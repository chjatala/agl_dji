"""ROS 2 bridge exposing a DJI aircraft over the VITRO ROS2 interface, via PSDK.

Topic and service names are parameters. Two naming schemes exist and it is not yet settled
which one Flanders Make's VITRO subscribes by default:

* the names currently deployed here and used by ``cfg/gnc/demo_agilica/sf_config.yaml``
  (``drone/pos``, ``drone/spd``, ...), which is the default; and
* the names in "ROS2 Interface - VITRO Framework 0.0.1" (``data/drone/location``,
  ``data/drone/velocity_global``, ...), selected with ``use_documented_topic_names:=true``.

Either table can be overridden per topic. Names without a leading ``/`` are relative, so they
pick up the node's namespace (the compose stack runs this under ``/dji``); prefix a name with
``/`` to place it at the root. The documentation writes them with a leading slash but VITRO's
own config mixes relative and absolute, so this is left to configuration rather than guessed.
"""

import json
import os
import time

import rclpy
from rclpy.node import Node

from geographic_msgs.msg import GeoPointStamped
from geometry_msgs.msg import QuaternionStamped, Vector3Stamped
from mavros_msgs.msg import GlobalPositionTarget
from sensor_msgs.msg import BatteryState, CompressedImage, Range
from std_msgs.msg import String
from std_srvs.srv import Trigger
from vitro_ros_definitions.srv import SetGimballAngle, SetVideoSettings

from .psdk_adapter import PSDKAdapter

LEGACY_TOPICS = {
    'location': 'drone/pos',
    'velocity': 'drone/spd',
    'attitude': 'drone/attitude',
    'gimbal_angle': 'gimbal_attitude',
    'height_above_ground': 'height_from_ground',
    'battery_state': 'battery',
    'camera_h264': 'camera_h264',
    'log': 'drone/log',
    'setpoint': 'cmd/drone/setpoint',
    'action': 'cmd/drone/action',
}

DOCUMENTED_TOPICS = {
    'location': 'data/drone/location',
    'velocity': 'data/drone/velocity_global',
    'attitude': 'data/drone/attitude',
    'gimbal_angle': 'data/camera/gimbal_angle',
    'height_above_ground': 'data/drone/height_above_ground',
    'battery_state': 'data/drone/battery_state',
    'camera_h264': 'data/camera/h264',
    'log': 'data/drone/log',
    'setpoint': 'cmd/drone/setpoint',
    'action': 'cmd/drone/action',
}

# "gimball" is spelled with two l's in the VITRO documentation and in the .srv file name.
# Kept verbatim - it is the contract, not a typo we get to fix on our side.
SERVICE_NAMES = {
    'enable_automatic_navigation': 'enable_automatic_navigation',
    'disable_automatic_navigation': 'disable_automatic_navigation',
    'gimbal_angle': 'gimball_angle_service',
    'save_photo': 'save_photo_service',
    'video_settings': 'video_settings_service',
    'liveview_keyframe': 'liveview_keyframe',
}


def ground_neu_to_body_frd(vx, vy, vz, qw, qx, qy, qz):
    """Convert a DJI ground-frame velocity/acceleration into the body FRD frame.

    Two corrections are needed, and both come straight from DJI's own headers:

    1. TOPIC_VELOCITY (and TOPIC_ACCELERATION_GROUND) are documented as ground-fixed
       *NEU*, with the warning that this "is not in a conventional right-handed frame":
       it is NED with the sign of Z flipped before publishing. So negate Z to get NED
       (dji_fc_subscription.h, TOPIC_VELOCITY / TOPIC_ACCELERATION_GROUND).
    2. TOPIC_QUATERNION provides the "aircraft body frame (FRD) to ground frame (NED)
       rotation", Hamilton convention with q0 = w. That rotation maps body -> ground,
       so the inverse (its transpose) maps ground -> body.

    VITRO expects body-frame speed on the velocity topic (confirmed by Jia Wan,
    13 Aug 2026), while `drone/spd` previously carried this data through untouched -
    wrong frame and wrong Z sign.

    Verify empirically rather than by inspection: yaw the aircraft 90 degrees and
    translate along a known direction. Body- and ground-frame velocity disagree
    unmistakably, and a vertical move exposes the Z sign.
    """
    # NEU -> NED
    vz_ned = -vz

    norm = (qw * qw + qx * qx + qy * qy + qz * qz) ** 0.5
    if norm < 1e-9:
        # Degenerate quaternion (no attitude fix yet): don't invent a rotation.
        return 0.0, 0.0, 0.0
    qw, qx, qy, qz = qw / norm, qx / norm, qy / norm, qz / norm

    # R maps body -> ground. Rows written out so the transpose below is easy to check.
    r00 = 1.0 - 2.0 * (qy * qy + qz * qz)
    r01 = 2.0 * (qx * qy - qw * qz)
    r02 = 2.0 * (qx * qz + qw * qy)
    r10 = 2.0 * (qx * qy + qw * qz)
    r11 = 1.0 - 2.0 * (qx * qx + qz * qz)
    r12 = 2.0 * (qy * qz - qw * qx)
    r20 = 2.0 * (qx * qz - qw * qy)
    r21 = 2.0 * (qy * qz + qw * qx)
    r22 = 1.0 - 2.0 * (qx * qx + qy * qy)

    # v_body = R^T * v_ground
    bx = r00 * vx + r10 * vy + r20 * vz_ned
    by = r01 * vx + r11 * vy + r21 * vz_ned
    bz = r02 * vx + r12 * vy + r22 * vz_ned
    return bx, by, bz


class PSDKBridgeNode(Node):
    def __init__(self):
        super().__init__('psdk_bridge')

        self.declare_parameter('use_documented_topic_names', False)
        documented = self.get_parameter('use_documented_topic_names').value
        table = DOCUMENTED_TOPICS if documented else LEGACY_TOPICS

        # Telemetry publish rates. psdk_wrapper subscribes the flight-controller topics at
        # 5 Hz (battery at 1 Hz), so publishing faster than that would just repeat cached
        # values and present VITRO's EKF with data that looks higher-rate than it is.
        # Raising this means raising DJI_DATA_SUBSCRIPTION_TOPIC_*_HZ in
        # psdk_wrapper.c:PsdkWrapper_SubscribeTelemetry() to match.
        self.declare_parameter('telemetry_rate', 5.0)
        self.declare_parameter('battery_rate', 1.0)

        # Liveview is opt-in because it can consume substantial bandwidth. The publisher
        # carries raw H.264 chunks; the receiver joins them into an elementary stream.
        self.declare_parameter('liveview_enabled', False)
        self.declare_parameter('liveview_position', 1)
        self.declare_parameter('liveview_source', 1)
        self.declare_parameter('liveview_bitrate_kbps', 4000)
        self.declare_parameter('liveview_drain_rate', 100.0)

        # Registers T_DjiHalNetworkHandler. Separate from liveview_enabled on purpose, and
        # off by default: on this aircraft it makes DjiCore_Init fail with 0xE1, taking
        # telemetry and control with it. Needed only for outbound payload-camera video and
        # high-speed bandwidth control - not for receiving liveview.
        self.declare_parameter('network_handler_enabled', False)

        # Setpoint watchdog. Matters most in the split deployment, where VITRO runs on a
        # laptop and the 40 Hz control loop crosses WiFi: a dropout must not leave the last
        # velocity command latched on the aircraft.
        self.declare_parameter('setpoint_watchdog_enabled', True)
        self.declare_parameter('setpoint_timeout', 0.5)

        # When true, setpoints are only forwarded between enable_automatic_navigation and
        # disable_automatic_navigation. Off by default so existing behaviour is unchanged.
        self.declare_parameter('require_automatic_navigation', False)

        self.telemetry_rate = float(self.get_parameter('telemetry_rate').value)
        self.battery_rate = float(self.get_parameter('battery_rate').value)
        self.liveview_enabled = bool(self.get_parameter('liveview_enabled').value)
        self.liveview_position = int(self.get_parameter('liveview_position').value)
        self.liveview_source = int(self.get_parameter('liveview_source').value)
        self.liveview_bitrate_kbps = int(self.get_parameter('liveview_bitrate_kbps').value)
        self.liveview_drain_rate = float(self.get_parameter('liveview_drain_rate').value)
        self.setpoint_timeout = float(self.get_parameter('setpoint_timeout').value)
        self.watchdog_enabled = bool(self.get_parameter('setpoint_watchdog_enabled').value)
        self.require_auto_nav = bool(self.get_parameter('require_automatic_navigation').value)

        # Deliberately independent of liveview_enabled. Registering the PSDK network handler
        # costs the core link entirely on this aircraft (DjiCore_Init returns 0xE1), and
        # dji_liveview.h documents no dependency on it - only the outbound payload-camera
        # and bandwidth-control interfaces do. Tying the two together would mean liveview
        # could never be tried. psdk_wrapper reads this at connect time, so it must be set
        # before psdk_connect() runs.
        self.network_handler_enabled = bool(
            self.get_parameter('network_handler_enabled').value)
        os.environ['PSDK_REGISTER_NETWORK_HANDLER'] = \
            '1' if self.network_handler_enabled else '0'

        def topic(key):
            self.declare_parameter(f'topic_{key}', '')
            return self.get_parameter(f'topic_{key}').value or table[key]

        def service(key):
            self.declare_parameter(f'service_{key}', '')
            return self.get_parameter(f'service_{key}').value or SERVICE_NAMES[key]

        self.position_pub = self.create_publisher(GeoPointStamped, topic('location'), 10)
        self.speed_pub = self.create_publisher(Vector3Stamped, topic('velocity'), 10)
        self.attitude_pub = self.create_publisher(QuaternionStamped, topic('attitude'), 10)
        self.gimbal_pub = self.create_publisher(QuaternionStamped, topic('gimbal_angle'), 10)
        self.ultra_pub = self.create_publisher(Range, topic('height_above_ground'), 10)
        self.batt_pub = self.create_publisher(BatteryState, topic('battery_state'), 10)
        self.log_pub = self.create_publisher(String, topic('log'), 10)
        self.camera_h264_pub = self.create_publisher(
            CompressedImage, topic('camera_h264'), 10)

        # Debug publisher to inspect mapped PSDK commands
        self.debug_pub = self.create_publisher(String, 'psdk_bridge/debug', 10)

        self.cmd_sub = self.create_subscription(
            String, topic('action'), self.cmd_callback, 10)
        self.setpoint_sub = self.create_subscription(
            GlobalPositionTarget, topic('setpoint'), self.setpoint_callback, 10)

        self.create_service(
            Trigger, service('enable_automatic_navigation'), self.enable_auto_nav_callback)
        self.create_service(
            Trigger, service('disable_automatic_navigation'), self.disable_auto_nav_callback)
        self.create_service(
            SetGimballAngle, service('gimbal_angle'), self.set_gimbal_angle_callback)
        self.create_service(Trigger, service('save_photo'), self.save_photo_callback)
        self.create_service(
            SetVideoSettings, service('video_settings'), self.set_video_settings_callback)
        self.create_service(
            Trigger, service('liveview_keyframe'), self.liveview_keyframe_callback)

        self.auto_nav_enabled = False
        self._last_setpoint_monotonic = None
        self._setpoint_latched = False

        self.psdk = PSDKAdapter(self.get_logger())
        if self.psdk.connect():
            self.publish_log('PSDK adapter connected')
            if self.liveview_enabled:
                rc = self.psdk.liveview_start(
                    self.liveview_position, self.liveview_source, self.liveview_bitrate_kbps)
                if rc == 0:
                    self.publish_log('PSDK liveview started')
                else:
                    self.publish_log(
                        f'PSDK liveview failed to start (rc={rc})', level='warning')
        else:
            self.get_logger().warning('PSDK adapter not available; running in stub mode')

        self.create_timer(1.0 / self.telemetry_rate, self._publish_fast_telemetry)
        self.create_timer(1.0 / self.battery_rate, self._publish_battery)
        if self.liveview_enabled:
            self.create_timer(1.0 / self.liveview_drain_rate, self._drain_liveview)
        if self.watchdog_enabled:
            # Check at least twice per timeout so a stale command is caught promptly.
            self.create_timer(
                min(0.25, self.setpoint_timeout / 2.0), self._setpoint_watchdog_tick)

        self.get_logger().info(
            f"topic names: {'documented' if documented else 'legacy'}; "
            f"telemetry {self.telemetry_rate} Hz; "
            f"watchdog {'on' if self.watchdog_enabled else 'off'} "
            f"@ {self.setpoint_timeout}s; "
            f"liveview {'on' if self.liveview_enabled else 'off'}; "
            f"network handler {'on' if self.network_handler_enabled else 'off'}"
        )

    # -- helpers ----------------------------------------------------------------

    def publish_log(self, message: str, level: str = 'info'):
        """Log locally and mirror onto the interface's log topic.

        The severity must be dispatched to a *different source line* per level. rclpy caches
        a logger's severity against the call site (file/function/line), and raises
        "Logger severity cannot be changed between calls" if the same site is later used at a
        different level. Funnelling every level through one `getattr(logger, level)(...)` line
        therefore threw the first time the watchdog logged a warning after an earlier info -
        inside a timer callback, which killed the node outright.
        """
        logger = self.get_logger()
        if level == 'error':
            logger.error(message)
        elif level == 'warning':
            logger.warning(message)
        else:
            logger.info(message)
        self.log_pub.publish(String(data=message))

    # -- commands ---------------------------------------------------------------

    def cmd_callback(self, msg: String):
        cmd = msg.data.strip().lower()
        self.get_logger().info(f'Received command: {cmd}')

        # takeoff and land are the two the VITRO interface documents; arm/manual/hold are
        # local extensions that map onto psdk_command() directly.
        mapping = {
            'arm': 'arm',
            'takeoff': 'takeoff',
            'land': 'land',
            'manual': 'manual',
            'hold': 'hold',
        }

        if cmd in mapping:
            self.send_psdk_command(mapping[cmd])
            if cmd in ('land', 'manual', 'hold'):
                self._setpoint_latched = False
        else:
            try:
                payload = json.loads(cmd)
                self.send_psdk_command('custom', payload)
            except Exception:
                self.send_psdk_command('raw', {'cmd': cmd})

    def setpoint_callback(self, msg: GlobalPositionTarget):
        if self.require_auto_nav and not self.auto_nav_enabled:
            self.get_logger().warning(
                'setpoint ignored: automatic navigation is disabled',
                throttle_duration_sec=5.0)
            return

        sp = {
            'frame_id': msg.header.frame_id,
            'latitude': float(msg.latitude),
            'longitude': float(msg.longitude),
            'altitude': float(msg.altitude),
            'vx': float(msg.velocity.x),
            'vy': float(msg.velocity.y),
            'vz': float(msg.velocity.z),
            'yaw': float(msg.yaw),
        }
        self._last_setpoint_monotonic = time.monotonic()
        self._setpoint_latched = True
        self.get_logger().debug(f'Received setpoint: {sp}')
        self.send_psdk_setpoint(sp)

    def _setpoint_watchdog_tick(self):
        """Zero the joystick if setpoints stop arriving while a command is still latched."""
        if not self._setpoint_latched or self._last_setpoint_monotonic is None:
            return
        age = time.monotonic() - self._last_setpoint_monotonic
        if age < self.setpoint_timeout:
            return

        # Command hover first, report second. An exception raised inside a timer callback
        # takes the whole node down - which is how a logging bug once killed the bridge the
        # first time this fired - so the safety action must already have happened, and the
        # reporting must not be able to undo it.
        self._setpoint_latched = False
        self.send_psdk_command('hold')
        try:
            self.publish_log(
                f'setpoint watchdog: no setpoint for {age:.2f}s '
                f'(timeout {self.setpoint_timeout}s) - commanding hover',
                level='warning')
        except Exception as exc:  # noqa: BLE001 - never let reporting kill the watchdog
            self.get_logger().error(f'watchdog reporting failed: {exc}')

    def send_psdk_command(self, command_name: str, payload=None):
        payload_json = json.dumps(payload) if payload is not None else ''
        if self.psdk.connected:
            rc = self.psdk.send_command(command_name, payload_json)
            # Commands are rare and consequential (arm takes flight-control authority;
            # land/hold change what the aircraft is doing), so their result belongs in the
            # normal log, not at debug. A silently-failed 'arm' otherwise looks identical
            # to a successful one from outside.
            if rc == 0:
                self.publish_log(f"PSDK command '{command_name}' accepted")
            else:
                self.publish_log(
                    f"PSDK command '{command_name}' REJECTED by the aircraft (rc={rc}). "
                    f"For 'arm', the usual cause is the RC flight-mode switch not being in "
                    f"N/P mode - the aircraft refuses to hand over joystick authority.",
                    level='warning')
            return rc == 0
        data = {'command': command_name, 'payload': payload}
        text = json.dumps(data)
        self.get_logger().info(f'Mapped to PSDK command (stub): {text}')
        self.debug_pub.publish(String(data=text))
        return False

    def send_psdk_setpoint(self, setpoint: dict):
        payload = json.dumps(setpoint)
        if self.psdk.connected:
            rc = self.psdk.send_setpoint(payload)
            # Setpoints arrive at up to 40 Hz, so success stays at debug to avoid flooding
            # the log - but a *failure* is throttled-warned, since silently dropping control
            # commands is exactly the failure you need to see.
            if rc == 0:
                self.get_logger().debug(f'psdk send_setpoint rc={rc}')
            else:
                self.get_logger().warning(
                    f'psdk send_setpoint REJECTED (rc={rc}) - is joystick authority held?',
                    throttle_duration_sec=5.0)
            return rc == 0
        text = json.dumps({'setpoint': setpoint})
        self.get_logger().info(f'Mapped to PSDK setpoint (stub): {text}')
        self.debug_pub.publish(String(data=text))
        return False

    # -- services ---------------------------------------------------------------

    def enable_auto_nav_callback(self, request, response):
        """Take joystick control authority so setpoints can drive the aircraft."""
        ok = self.send_psdk_command('arm')
        self.auto_nav_enabled = ok
        response.success = ok
        response.message = (
            'automatic navigation enabled (joystick control authority obtained)' if ok
            else 'failed to obtain joystick control authority'
        )
        self.publish_log(response.message, level='info' if ok else 'error')
        return response

    def disable_auto_nav_callback(self, request, response):
        """Zero the joystick first, then hand authority back - never release while latched."""
        self._setpoint_latched = False
        self.send_psdk_command('hold')
        ok = self.send_psdk_command('manual')
        self.auto_nav_enabled = False
        response.success = ok
        response.message = (
            'automatic navigation disabled (hover commanded, authority released)' if ok
            else 'hover commanded but releasing joystick control authority failed'
        )
        self.publish_log(response.message, level='info' if ok else 'error')
        return response

    # The three below complete the documented service surface. They intentionally do not
    # implement gimbal or camera control: psdk_wrapper exposes none of dji_gimbal_manager.h
    # or dji_camera_manager.h yet, and whether the demonstrator needs them is still an open
    # question with Flanders Make. Answering explicitly beats leaving the services absent,
    # which would make a VITRO mission block on a call that never resolves.
    _UNIMPLEMENTED = (
        'not implemented: psdk_wrapper exposes no {area} control yet '
        '(see psdk_wrapper/README.md TODO)'
    )

    def set_gimbal_angle_callback(self, request, response):
        response.status = self._UNIMPLEMENTED.format(area='gimbal')
        self.publish_log(
            f'gimball_angle_service(pitch={request.pitch}, speed={request.speed}): '
            f'{response.status}', level='warning')
        return response

    def save_photo_callback(self, request, response):
        response.success = False
        response.message = self._UNIMPLEMENTED.format(area='camera')
        self.publish_log(f'save_photo_service: {response.message}', level='warning')
        return response

    def set_video_settings_callback(self, request, response):
        response.status = self._UNIMPLEMENTED.format(area='camera')
        self.publish_log(f'video_settings_service: {response.status}', level='warning')
        return response

    def liveview_keyframe_callback(self, request, response):
        rc = self.psdk.liveview_request_keyframe() if self.liveview_enabled else -1
        response.success = rc == 0
        response.message = (
            'liveview keyframe requested' if response.success
            else 'liveview keyframe request failed: liveview is not running'
        )
        self.publish_log(response.message, level='info' if response.success else 'warning')
        return response

    def _drain_liveview(self):
        # Per the contract with the laptop-side decoder: sensor_msgs/CompressedImage,
        # format "h264", one liveview callback buffer verbatim per message. `data=chunk`
        # passes the bytes straight through - no per-byte list conversion, which matters
        # at up to LIVEVIEW_READ_CHUNK (256 KiB) per drain, at up to 100 Hz, sharing this
        # process with telemetry and the setpoint watchdog.
        chunk = self.psdk.liveview_read()
        if chunk:
            msg = CompressedImage()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.format = 'h264'
            msg.data = chunk
            self.camera_h264_pub.publish(msg)

    # -- telemetry --------------------------------------------------------------

    def _publish_fast_telemetry(self):
        now = self.get_clock().now().to_msg()
        telemetry = self.psdk.get_telemetry() if self.psdk.connected else None

        pos = GeoPointStamped()
        pos.header.stamp = now
        pos.position.latitude = telemetry['lat'] if telemetry else 0.0
        pos.position.longitude = telemetry['lon'] if telemetry else 0.0
        # Altitude is relative to the takeoff point, not AMSL (per the VITRO interface doc).
        pos.position.altitude = telemetry['alt'] if telemetry else 0.0
        self.position_pub.publish(pos)

        # Body-frame FRD speed, per the VITRO interface. The wrapper hands back DJI's raw
        # ground-NEU velocity, so convert here - see ground_neu_to_body_frd().
        spd = Vector3Stamped()
        spd.header.stamp = now
        if telemetry:
            spd.vector.x, spd.vector.y, spd.vector.z = ground_neu_to_body_frd(
                telemetry['vx'], telemetry['vy'], telemetry['vz'],
                telemetry['qw'], telemetry['qx'], telemetry['qy'], telemetry['qz'],
            )
        self.speed_pub.publish(spd)

        att = QuaternionStamped()
        att.header.stamp = now
        if telemetry:
            # DJI's quaternion is already body-FRD -> ground-NED, which is the convention
            # the VITRO interface uses, so it passes through unrotated.
            att.quaternion.w = telemetry['qw']
            att.quaternion.x = telemetry['qx']
            att.quaternion.y = telemetry['qy']
            att.quaternion.z = telemetry['qz']
        else:
            att.quaternion.w = 1.0
        self.attitude_pub.publish(att)

        if telemetry:
            height = Range()
            height.header.stamp = now
            # HEIGHT_FUSION is the ultrasonic/VO fused height above ground. The FC does not
            # report the sensor's own limits, so min/max/FOV are left unset rather than
            # invented.
            height.radiation_type = Range.ULTRASOUND
            height.range = telemetry['height_rel']
            self.ultra_pub.publish(height)

    def _publish_battery(self):
        telemetry = self.psdk.get_telemetry() if self.psdk.connected else None
        batt = BatteryState()
        batt.header.stamp = self.get_clock().now().to_msg()
        batt.percentage = (telemetry['battery_percent'] / 100.0) if telemetry else 1.0
        self.batt_pub.publish(batt)

    def destroy_node(self):
        # Leaving the aircraft with a latched velocity command on shutdown would be the
        # worst possible exit, so hover before dropping the link.
        if self._setpoint_latched:
            self.send_psdk_command('hold')
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
