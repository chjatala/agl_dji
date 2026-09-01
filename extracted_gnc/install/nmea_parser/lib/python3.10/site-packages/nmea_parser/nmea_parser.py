#!/usr/bin/env python3
"""
Custom NMEA String Parser for Serial Communication

This script reads NMEA strings from a serail bus and parses them according to
custom or standard NMEA protocols. It handles checksum validation and
provides a framework for  message parsing.

"""

import serial
import time
import threading
import queue
from typing import Dict, List, Optional, Callable
from dataclasses import dataclass
from datetime import datetime

# ROS2 imports
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped
from geometry_msgs.msg import Pose, Point, Quaternion
from std_msgs.msg import Header


@dataclass
class NMEAMessage:
    """Data class to store parsed NMEA message"""

    sentence_type: str
    timestamp: datetime
    raw_data: str
    parsed_data: Dict
    checksum_valid: bool


class NMEAParser(Node):
    """
    Custom NMEA Parser class for reading and parsing NMEA strings from serial port
    with ROS2 integration for publishing pose data
    """

    def __init__(self, node_name: str = "nmea_parser"):
        """
        Initialize NMEA Parser with ROS2 Node and load parameters

        Args:
            node_name: ROS2 node name (default: 'nmea_parser')
        """
        # Initialize ROS2 Node
        super().__init__(node_name)

        # Declare ROS2 parameters with default values
        self.declare_parameter("port", "/dev/ttyUSB0")
        self.declare_parameter("baudrate", 460800)
        self.declare_parameter("timeout", 1.0)
        self.declare_parameter("pose_topic", "agilica_pose")
        self.declare_parameter("frame_id", "agilica_frame")
        # Output rate for pose_topic (Hz). The UWB module streams AGLLP sentences at
        # ~40 Hz with the serial poll interval as jitter, so publishing one pose per
        # sentence puts that jitter straight into the EKF. Set to 0.0 to do exactly
        # that anyway (publish every sentence, unthrottled).
        self.declare_parameter("publish_rate", 10.0)

        # Get parameter values
        self.port = self.get_parameter("port").get_parameter_value().string_value
        self.baudrate = (
            self.get_parameter("baudrate").get_parameter_value().integer_value
        )
        self.timeout = self.get_parameter("timeout").get_parameter_value().double_value
        self.pose_topic = (
            self.get_parameter("pose_topic").get_parameter_value().string_value
        )
        self.frame_id = (
            self.get_parameter("frame_id").get_parameter_value().string_value
        )
        self.publish_rate = (
            self.get_parameter("publish_rate").get_parameter_value().double_value
        )

        self.serial_conn = None
        self.running = False
        self.message_queue = queue.Queue()

        # Variables for handling sequential GPRMC -> AGLLP processing
        self.latest_gprmc_timestamp = None
        self.latest_gprmc_date = None

        # Create ROS2 publisher for pose data
        self.pose_publisher = self.create_publisher(PoseStamped, self.pose_topic, 10)

        # Rate limiting. The serial reader runs in its own thread (start_reading), so
        # the newest parsed pose is handed to the timer callback - which runs on the
        # executor thread - under a lock. Only a pose that actually arrived since the
        # last tick is published: a stalled UWB link must go quiet rather than repeat
        # its last position, or the consumer's observation timeout never fires.
        self._pose_lock = threading.Lock()
        self._pending_pose = None
        self._publish_timer = None
        if self.publish_rate > 0.0:
            self._publish_timer = self.create_timer(
                1.0 / self.publish_rate, self._publish_pending_pose
            )

        # Log ROS2 node initialization
        self.get_logger().info(f"NMEA Parser node initialized")
        self.get_logger().info(
            f"Port: {self.port}, Baudrate: {self.baudrate}, Timeout: {self.timeout}"
        )
        self.get_logger().info(f"Publishing pose data on topic: {self.pose_topic}")
        if self._publish_timer is not None:
            self.get_logger().info(f"Pose publish rate: {self.publish_rate} Hz")
        else:
            self.get_logger().info(
                "Pose publish rate: unthrottled (one pose per AGLLP sentence)"
            )
        self.get_logger().info(f"Frame ID: {self.frame_id}")

        # Standard NMEA sentence types
        self.sentence_parsers = {
            "GPGGA": self._parse_gga,
            "GPRMC": self._parse_rmc,
            "GPGSV": self._parse_gsv,
            "GPGSA": self._parse_gsa,
            "GPVTG": self._parse_vtg,
            "GPGLL": self._parse_gll,
            "AGLLP": self._parse_agilica,  # custom agilica message
        }

    def _emit_pose(self, pose_msg: PoseStamped):
        """Publish a pose, or hold it for the next timer tick when rate limiting is on

        Called from the serial reader thread.
        """
        if self._publish_timer is None:
            self.pose_publisher.publish(pose_msg)
            return

        with self._pose_lock:
            self._pending_pose = pose_msg

    def _publish_pending_pose(self):
        """Timer callback: publish the newest pose parsed since the last tick

        Ticks with no new pose publish nothing, so the topic reflects the UWB link
        going silent instead of repeating a stale position.
        """
        with self._pose_lock:
            pose_msg, self._pending_pose = self._pending_pose, None

        if pose_msg is not None:
            self.pose_publisher.publish(pose_msg)

    def _nmea_time_to_ros_stamp(self, nmea_time: str, nmea_date: str | None = None):
        """
        Convert NMEA time and date to ROS timestamp

        Args:
            nmea_time: NMEA time format (HHMMSS.sss)
            nmea_date: NMEA date format (DDMMYY), optional

        Returns:
            ROS Time stamp or None if conversion fails
        """
        try:
            if not nmea_time:
                return self.get_clock().now().to_msg()

            # Parse time (HHMMSS.sss)
            if "." in nmea_time:
                time_part, microsec_part = nmea_time.split(".")
                microsec = int(
                    microsec_part.ljust(6, "0")[:6]
                )  # Pad or truncate to 6 digits
            else:
                time_part = nmea_time
                microsec = 0

            hour = int(time_part[:2])
            minute = int(time_part[2:4])
            second = int(time_part[4:6])

            # Use date if provided, otherwise use today's date
            if nmea_date and len(nmea_date) == 6:
                day = int(nmea_date[:2])
                month = int(nmea_date[2:4])
                year = int(nmea_date[4:6]) + 2000  # Convert YY to 20YY
            else:
                # Use current date if no date provided
                now = datetime.now()
                day = now.day
                month = now.month
                year = now.year

            # Create datetime object
            dt = datetime(year, month, day, hour, minute, second, microsec)

            # Convert to ROS timestamp
            timestamp = dt.timestamp()
            ros_time = self.get_clock().now().to_msg()
            ros_time.sec = int(timestamp)
            ros_time.nanosec = int((timestamp - int(timestamp)) * 1e9)

            return ros_time

        except (ValueError, IndexError) as e:
            self.get_logger().warning(
                f"Failed to convert NMEA time {nmea_time}, date {nmea_date}: {e}"
            )
            return self.get_clock().now().to_msg()

    def connect(self) -> bool:
        """
        Establish serial connection

        Returns:
            bool: True if connection successful, False otherwise
        """
        try:
            self.serial_conn = serial.Serial(
                port=self.port,
                baudrate=self.baudrate,
                timeout=self.timeout,
                bytesize=serial.EIGHTBITS,
                parity=serial.PARITY_NONE,
                stopbits=serial.STOPBITS_ONE,
            )
            self.get_logger().info(f"Connected to {self.port} at {self.baudrate} baud")
            return True
        except serial.SerialException as e:
            self.get_logger().error(f"Failed to connect to {self.port}: {e}")
            return False

    def disconnect(self):
        """Close serial connection"""
        if self.serial_conn and self.serial_conn.is_open:
            self.serial_conn.close()
            self.get_logger().info("Serial connection closed")

    def calculate_checksum(self, sentence: str) -> str:
        """
        Calculate NMEA checksum for a sentence

        Args:
            sentence: NMEA sentence without $ and checksum

        Returns:
            str: Hexadecimal checksum
        """
        checksum = 0
        for char in sentence:
            checksum ^= ord(char)
        return f"{checksum:02X}"

    def validate_checksum(self, nmea_string: str) -> bool:
        """
        Validate NMEA string checksum

        Args:
            nmea_string: Complete NMEA string with checksum

        Returns:
            bool: True if checksum is valid
        """
        if "*" not in nmea_string:
            return False

        try:
            sentence, checksum = nmea_string.split("*")
            sentence = sentence[1:]  # Remove $ prefix
            calculated_checksum = self.calculate_checksum(sentence)
            return calculated_checksum.upper() == checksum.upper()
        except (ValueError, IndexError):
            return False

    def parse_nmea_string(self, nmea_string: str) -> Optional[NMEAMessage]:
        """
        Parse a complete NMEA string

        Args:
            nmea_string: Raw NMEA string

        Returns:
            NMEAMessage or None if parsing fails
        """
        nmea_string = nmea_string.strip()

        if not nmea_string.startswith("$"):
            self.get_logger().warning(f"Invalid NMEA string format: {nmea_string}")
            return None

        # Validate checksum
        checksum_valid = self.validate_checksum(nmea_string)

        # Extract sentence type and data
        try:
            if "*" in nmea_string:
                data_part = nmea_string[1 : nmea_string.index("*")]
            else:
                data_part = nmea_string[1:]

            fields = data_part.split(",")
            sentence_type = fields[0] if fields else ""

            # Parse using appropriate parser
            parsed_data = {}
            if sentence_type in self.sentence_parsers:
                parsed_data = self.sentence_parsers[sentence_type](fields)
            else:
                # Generic parsing for unknown sentence types
                parsed_data = self._parse_generic(fields)

            return NMEAMessage(
                sentence_type=sentence_type,
                timestamp=datetime.now(),
                raw_data=nmea_string,
                parsed_data=parsed_data,
                checksum_valid=checksum_valid,
            )

        except Exception as e:
            self.get_logger().error(f"Error parsing NMEA string '{nmea_string}': {e}")
            return None

    def _parse_generic(self, fields: List[str]) -> Dict:
        """Generic parser for unknown NMEA sentences"""
        self.get_logger().info("Using generic parser")
        return {
            "sentence_type": fields[0] if fields else "",
            "fields": fields[1:] if len(fields) > 1 else [],
            "field_count": len(fields) - 1,
        }

    def _parse_agilica(self, fields: List[str]) -> Dict:
        """Parse custom agilica AGLLP sentence and publish as PoseStamped with GPRMC
        timestamp

        """

        try:
            self.get_logger().debug(f"Parsing AGLLP sentence: {fields}")

            # Check if required fields are present and not empty
            if len(fields) <= 6:
                self.get_logger().warning("AGLLP sentence has insufficient fields")
                return {"error": "Insufficient fields in AGLLP sentence"}

            # Check if x, y, z fields are not empty
            if not fields[2] or not fields[4] or not fields[6]:
                self.get_logger().warning(
                    "AGLLP sentence has empty coordinate fields: x='"
                    + f"{fields[2] if len(fields) > 2 else ''}', "
                    + f"y='{fields[4] if len(fields) > 4 else ''}', "
                    + f"z='{fields[6] if len(fields) > 6 else ''}'"
                )
                return {
                    "error": "Empty coordinate fields in AGLLP sentence",
                    "pose_published": False,
                }

            # Parse the fields - adjust indices based on your AGLLP format
            try:
                x = float(fields[2]) * 1e-2  # conversion from cm to m
                y = float(fields[4]) * 1e-2  # conversion from cm to m
                z = float(fields[6]) * 1e-2  # conversion from cm to m
            except ValueError as e:
                self.get_logger().warning(
                    f"AGLLP sentence has invalid coordinate values: {e}"
                )
                return {
                    "error": "Invalid coordinate values in AGLLP sentence",
                    "pose_published": False,
                }

            # Create PoseStamped message
            pose_msg = PoseStamped()

            # Set header with GPRMC timestamp if available, otherwise current time
            pose_msg.header = Header()
            if self.latest_gprmc_timestamp:
                pose_msg.header.stamp = self._nmea_time_to_ros_stamp(
                    self.latest_gprmc_timestamp, self.latest_gprmc_date
                )
            else:
                pose_msg.header.stamp = self.get_clock().now().to_msg()
                self.get_logger().warning(
                    "No GPRMC timestamp available, using current time", once=True
                )

            pose_msg.header.frame_id = "agilica_frame"

            # Set position from x, y, z values
            pose_msg.pose.position = Point()
            pose_msg.pose.position.x = float(x)
            # Invert Y axis to convert left-handed to right-handed coordinate system
            pose_msg.pose.position.y = float(y) * -1.0
            pose_msg.pose.position.z = float(z)

            # Set orientation (identity quaternion since no orientation data available)
            pose_msg.pose.orientation = Quaternion()
            pose_msg.pose.orientation.x = 0.0
            pose_msg.pose.orientation.y = 0.0
            pose_msg.pose.orientation.z = 0.0
            pose_msg.pose.orientation.w = 1.0

            # Hand the pose to the rate limiter (publishes directly when unthrottled)
            self._emit_pose(pose_msg)

            if self.latest_gprmc_timestamp:
                self.get_logger().info(
                    f"Published pose: x={x}, y={y}, z={z} with GPRMC timestamp",
                    throttle_duration_sec=5.0,
                )
            else:
                self.get_logger().info(
                    f"Published pose: x={x}, y={y}, z={z} with current timestamp",
                    throttle_duration_sec=5.0,
                )

            return {
                "x": str(x),
                "y": str(y),
                "z": str(z),
                "gprmc_time": self.latest_gprmc_timestamp,
                "gprmc_date": self.latest_gprmc_date,
                "pose_published": True,
            }
        except (IndexError, ValueError) as e:
            self.get_logger().error(f"Error parsing AGLLP sentence: {e}")
            return {"error": "Incomplete or invalid AGLLP sentence"}

    def _parse_gga(self, fields: List[str]) -> Dict:
        """Parse GGA (Global Positioning System Fix Data) sentence"""
        try:
            return {
                "time": fields[1] if len(fields) > 1 else "",
                "latitude": fields[2] if len(fields) > 2 else "",
                "lat_direction": fields[3] if len(fields) > 3 else "",
                "longitude": fields[4] if len(fields) > 4 else "",
                "lon_direction": fields[5] if len(fields) > 5 else "",
                "fix_quality": fields[6] if len(fields) > 6 else "",
                "num_satellites": fields[7] if len(fields) > 7 else "",
                "hdop": fields[8] if len(fields) > 8 else "",
                "altitude": fields[9] if len(fields) > 9 else "",
                "altitude_units": fields[10] if len(fields) > 10 else "",
            }
        except IndexError:
            return {"error": "Incomplete GGA sentence"}

    def _parse_rmc(self, fields: List[str]) -> Dict:
        """Parse RMC (Recommended Minimum Course) sentence and store timestamp"""
        try:
            # Store the timestamp and date for use in subsequent AGLLP messages
            if len(fields) > 1 and fields[1]:  # Time field
                self.latest_gprmc_timestamp = fields[1]
            if len(fields) > 9 and fields[9]:  # Date field
                self.latest_gprmc_date = fields[9]

            self.get_logger().debug(
                f"Stored GPRMC time: {self.latest_gprmc_timestamp}, date: {self.latest_gprmc_date}"
            )

            return {
                "time": fields[1] if len(fields) > 1 else "",
                "status": fields[2] if len(fields) > 2 else "",
                "latitude": fields[3] if len(fields) > 3 else "",
                "lat_direction": fields[4] if len(fields) > 4 else "",
                "longitude": fields[5] if len(fields) > 5 else "",
                "lon_direction": fields[6] if len(fields) > 6 else "",
                "speed": fields[7] if len(fields) > 7 else "",
                "course": fields[8] if len(fields) > 8 else "",
                "date": fields[9] if len(fields) > 9 else "",
            }
        except IndexError:
            return {"error": "Incomplete RMC sentence"}

    def _parse_gsv(self, fields: List[str]) -> Dict:
        """Parse GSV (Satellites in View) sentence"""
        return {"satellites_info": fields[1:] if len(fields) > 1 else []}

    def _parse_gsa(self, fields: List[str]) -> Dict:
        """Parse GSA (GPS DOP and Active Satellites) sentence"""
        return {"satellite_data": fields[1:] if len(fields) > 1 else []}

    def _parse_vtg(self, fields: List[str]) -> Dict:
        """Parse VTG (Track Made Good and Ground Speed) sentence"""
        try:
            return {
                "true_course": fields[1] if len(fields) > 1 else "",
                "magnetic_course": fields[3] if len(fields) > 3 else "",
                "speed_knots": fields[5] if len(fields) > 5 else "",
                "speed_kmh": fields[7] if len(fields) > 7 else "",
            }
        except IndexError:
            return {"error": "Incomplete VTG sentence"}

    def _parse_gll(self, fields: List[str]) -> Dict:
        """Parse GLL (Geographic Position) sentence"""
        try:
            return {
                "latitude": fields[1] if len(fields) > 1 else "",
                "lat_direction": fields[2] if len(fields) > 2 else "",
                "longitude": fields[3] if len(fields) > 3 else "",
                "lon_direction": fields[4] if len(fields) > 4 else "",
                "time": fields[5] if len(fields) > 5 else "",
                "status": fields[6] if len(fields) > 6 else "",
            }
        except IndexError:
            return {"error": "Incomplete GLL sentence"}

    def read_serial_data(self):
        """
        Thread function to continuously read data from serial port
        """
        buffer = ""

        while self.running and self.serial_conn and self.serial_conn.is_open:
            try:
                if self.serial_conn.in_waiting > 0:
                    data = self.serial_conn.read(self.serial_conn.in_waiting).decode(
                        "utf-8", errors="ignore"
                    )
                    buffer += data

                    # Process complete NMEA sentences
                    while "\n" in buffer:
                        line, buffer = buffer.split("\n", 1)
                        line = line.strip()

                        if line.startswith("$"):
                            message = self.parse_nmea_string(line)
                            if message:
                                pass
                                # do not put parsed messages in queue for now since the
                                # queue is not used A.T.M
                                # self.message_queue.put(message)

                time.sleep(0.01)  # Small delay to prevent CPU overload

            except serial.SerialException as e:
                self.get_logger().error(f"Serial read error: {e}")
                break
            except Exception as e:
                self.get_logger().error(f"Unexpected error in read thread: {e}")
                break

    def start_reading(self):
        """Start reading NMEA data in a separate thread"""
        if not self.serial_conn or not self.serial_conn.is_open:
            self.get_logger().error("Serial connection not established")
            return False

        self.running = True
        self.read_thread = threading.Thread(target=self.read_serial_data, daemon=True)
        self.read_thread.start()
        self.get_logger().info("Started reading NMEA data")
        return True

    def stop_reading(self):
        """Stop reading NMEA data"""
        self.running = False
        if hasattr(self, "read_thread"):
            self.read_thread.join(timeout=2.0)
        self.get_logger().info("Stopped reading NMEA data")

    def get_message(self, timeout: float = 1.0) -> Optional[NMEAMessage]:
        """
        Get next parsed NMEA message from queue

        Args:
            timeout: Timeout in seconds

        Returns:
            NMEAMessage or None if timeout
        """
        try:
            return self.message_queue.get(timeout=timeout)
        except queue.Empty:
            return None


def main():
    """
    Main function demonstrating NMEA parser usage with ROS2
    """
    # Initialize ROS2
    rclpy.init()
    keyboard_interrupt = False
    try:
        # Initialize parser with ROS2 node
        parser = NMEAParser()

        # Connect to serial port
        if not parser.connect():
            parser.get_logger().error("Failed to connect to serial port")
            return

        # Start reading data
        if not parser.start_reading():
            parser.get_logger().error("Failed to start reading data")
            return

        parser.get_logger().info("NMEA Parser started. Press Ctrl+C to stop.")

        # Spin ROS2 node
        rclpy.spin(parser)

    except KeyboardInterrupt:
        keyboard_interrupt = True
    finally:
        # Cleanup
        if "parser" in locals():
            parser.stop_reading()
            parser.disconnect()
            parser.destroy_node()
        if not keyboard_interrupt:
            rclpy.shutdown()


if __name__ == "__main__":
    main()
