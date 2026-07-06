import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from geometry_msgs.msg import Vector3Stamped, QuaternionStamped
from geographic_msgs.msg import GeoPointStamped
from sensor_msgs.msg import Range, BatteryState
from mavros_msgs.msg import GlobalPositionTarget

import threading
import time
import json
from .psdk_adapter import PSDKAdapter


class PSDKBridgeNode(Node):
    def __init__(self):
        super().__init__('psdk_bridge')
        # Publishers (mirror the topics used by the original MSDK bridge)
        self.position_pub = self.create_publisher(GeoPointStamped, 'drone/pos', 10)
        self.speed_pub = self.create_publisher(Vector3Stamped, 'drone/spd', 10)
        self.attitude_pub = self.create_publisher(QuaternionStamped, 'drone/attitude', 10)
        self.gimbal_pub = self.create_publisher(QuaternionStamped, 'gimbal_attitude', 10)
        self.ultra_pub = self.create_publisher(Range, 'height_from_ground', 10)
        self.batt_pub = self.create_publisher(BatteryState, 'battery', 10)

        # Debug publisher to inspect mapped PSDK commands
        self.debug_pub = self.create_publisher(String, 'dji/psdk_bridge/debug', 10)

        # Subscribers (commands coming from the rest of the stack)
        self.cmd_sub = self.create_subscription(String, 'cmd/drone/action', self.cmd_callback, 10)
        self.setpoint_sub = self.create_subscription(GlobalPositionTarget, 'cmd/drone/setpoint', self.setpoint_callback, 10)

        # Initialize PSDK adapter (attempt to load system/shared PSDK wrapper)
        self.psdk = PSDKAdapter(self.get_logger())
        ok = self.psdk.connect()
        if ok:
            self.get_logger().info('PSDK adapter connected')
        else:
            self.get_logger().warning('PSDK adapter not available; running in stub mode')

        # Start a thread to publish heartbeat telemetry (placeholder)
        self._stop_event = threading.Event()
        self._thread = threading.Thread(target=self._publish_telemetry_loop, daemon=True)
        self._thread.start()

    def cmd_callback(self, msg: String):
        cmd = msg.data.strip().lower()
        self.get_logger().info(f'Received command: {cmd}')

        mapping = {
            'arm': 'arm',
            'takeoff': 'takeoff',
            'land': 'land',
            'manual': 'manual',
            'hold': 'hold',
        }

        if cmd in mapping:
            psdk_cmd = mapping[cmd]
            self.send_psdk_command(psdk_cmd)
        else:
            # allow commands like 'goto x y z' or json payloads
            try:
                payload = json.loads(cmd)
                self.send_psdk_command('custom', payload)
            except Exception:
                # send raw as custom
                self.send_psdk_command('raw', {'cmd': cmd})

    def setpoint_callback(self, msg: GlobalPositionTarget):
        # Map GlobalPositionTarget to a PSDK setpoint structure
        sp = {
            'frame_id': msg.header.frame_id if hasattr(msg, 'header') else '',
            'latitude': float(msg.latitude) if hasattr(msg, 'latitude') else None,
            'longitude': float(msg.longitude) if hasattr(msg, 'longitude') else None,
            'altitude': float(msg.altitude) if hasattr(msg, 'altitude') else None,
            'vx': float(msg.velocity.x) if hasattr(msg, 'velocity') else None,
            'vy': float(msg.velocity.y) if hasattr(msg, 'velocity') else None,
            'vz': float(msg.velocity.z) if hasattr(msg, 'velocity') else None,
            'yaw': float(msg.yaw) if hasattr(msg, 'yaw') else None,
        }
        self.get_logger().info(f'Received setpoint: {sp}')
        self.send_psdk_setpoint(sp)

    def send_psdk_command(self, command_name: str, payload=None):
        # Use adapter if available, otherwise publish debug payload
        payload_json = json.dumps(payload) if payload is not None else ''
        if hasattr(self, 'psdk') and self.psdk.connected:
            rc = self.psdk.send_command(command_name, payload_json)
            self.get_logger().debug(f'psdk send_command rc={rc}')
        else:
            data = {'command': command_name, 'payload': payload}
            text = json.dumps(data)
            self.get_logger().info(f'Mapped to PSDK command (stub): {text}')
            self.debug_pub.publish(String(data=text))

    def send_psdk_setpoint(self, setpoint: dict):
        payload = json.dumps(setpoint)
        if hasattr(self, 'psdk') and self.psdk.connected:
            rc = self.psdk.send_setpoint(payload)
            self.get_logger().debug(f'psdk send_setpoint rc={rc}')
        else:
            text = json.dumps({'setpoint': setpoint})
            self.get_logger().info(f'Mapped to PSDK setpoint (stub): {text}')
            self.debug_pub.publish(String(data=text))

    def _publish_telemetry_loop(self):
        # Publishes real FC telemetry once the PSDK adapter is connected; falls back to
        # placeholder zeros in stub mode (no native wrapper / no aircraft link yet).
        rate = 1.0
        while not self._stop_event.is_set():
            now = self.get_clock().now().to_msg()
            telemetry = self.psdk.get_telemetry() if self.psdk.connected else None

            pos = GeoPointStamped()
            pos.header.stamp = now
            pos.position.latitude = telemetry['lat'] if telemetry else 0.0
            pos.position.longitude = telemetry['lon'] if telemetry else 0.0
            pos.position.altitude = telemetry['alt'] if telemetry else 0.0
            self.position_pub.publish(pos)

            spd = Vector3Stamped()
            spd.header.stamp = now
            spd.vector.x = telemetry['vx'] if telemetry else 0.0
            spd.vector.y = telemetry['vy'] if telemetry else 0.0
            spd.vector.z = telemetry['vz'] if telemetry else 0.0
            self.speed_pub.publish(spd)

            att = QuaternionStamped()
            att.header.stamp = now
            if telemetry:
                att.quaternion.w = telemetry['qw']
                att.quaternion.x = telemetry['qx']
                att.quaternion.y = telemetry['qy']
                att.quaternion.z = telemetry['qz']
            else:
                att.quaternion.w = 1.0
            self.attitude_pub.publish(att)

            batt = BatteryState()
            batt.header.stamp = now
            batt.percentage = (telemetry['battery_percent'] / 100.0) if telemetry else 1.0
            self.batt_pub.publish(batt)

            if telemetry:
                height = Range()
                height.header.stamp = now
                height.range = telemetry['height_rel']
                self.ultra_pub.publish(height)

            time.sleep(1.0 / rate)

    def destroy_node(self):
        self._stop_event.set()
        if self._thread.is_alive():
            self._thread.join(timeout=2.0)
        self.psdk.disconnect()
        super().destroy_node()


def main(args=None):
    rclpy.init(args=args)
    node = PSDKBridgeNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
