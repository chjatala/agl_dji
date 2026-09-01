"""PSDK adapter wrapper.

This module attempts to load a native PSDK wrapper shared library (libpsdk_wrapper.so)
via ctypes. If the library is not present, it falls back to no-op stubs that log actions.

To provide a working implementation, build a native wrapper exposing the C symbols
used below (e.g., psdk_connect, psdk_arm, psdk_takeoff, psdk_land, psdk_send_setpoint)
and place the shared library in a location discoverable by the loader or set
`PSDK_LIB_PATH` environment variable to its path.
"""

import os
import ctypes
from typing import Optional


class PSDKAdapter:
    def __init__(self, logger):
        self.logger = logger
        self.lib = None  # type: Optional[ctypes.CDLL]
        self.connected = False

    def _find_lib(self):
        # Allow overriding via env var
        path = os.environ.get('PSDK_LIB_PATH')
        if path and os.path.exists(path):
            return path

        # Common locations
        candidates = [
            '/root/ros2_ws/install/psdk_wrapper/lib/libpsdk_wrapper.so',
            '/usr/lib/libpsdk_wrapper.so',
            '/usr/local/lib/libpsdk_wrapper.so',
            '/opt/psdk/lib/libpsdk_wrapper.so',
            '/root/psdk/lib/libpsdk_wrapper.so',
        ]
        for c in candidates:
            if os.path.exists(c):
                return c
        return None

    def connect(self):
        libpath = self._find_lib()
        if not libpath:
            self.logger.debug('PSDK wrapper library not found; adapter in stub mode')
            self.connected = False
            return False

        try:
            self.lib = ctypes.CDLL(libpath)
            # Optionally set argtypes/restype for known functions
            # Example: self.lib.psdk_connect.restype = ctypes.c_int
            # Do a quick connect call if available
            if hasattr(self.lib, 'psdk_connect'):
                try:
                    rc = self.lib.psdk_connect()
                    self.connected = (rc == 0)
                except Exception:
                    self.connected = True
            else:
                self.connected = True
            self.logger.debug(f'Loaded PSDK wrapper from {libpath}')
            return self.connected
        except OSError as e:
            self.logger.error(f'Failed loading PSDK wrapper: {e}')
            self.connected = False
            return False

    def arm(self):
        if self.lib and hasattr(self.lib, 'psdk_arm'):
            try:
                return self.lib.psdk_arm()
            except Exception as e:
                self.logger.error(f'psdk_arm error: {e}')
                return -1
        self.logger.info('PSDK arm stub invoked')
        return 0

    def takeoff(self):
        if self.lib and hasattr(self.lib, 'psdk_takeoff'):
            try:
                return self.lib.psdk_takeoff()
            except Exception as e:
                self.logger.error(f'psdk_takeoff error: {e}')
                return -1
        self.logger.info('PSDK takeoff stub invoked')
        return 0

    def land(self):
        if self.lib and hasattr(self.lib, 'psdk_land'):
            try:
                return self.lib.psdk_land()
            except Exception as e:
                self.logger.error(f'psdk_land error: {e}')
                return -1
        self.logger.info('PSDK land stub invoked')
        return 0

    def send_setpoint(self, setpoint_json: str):
        if self.lib and hasattr(self.lib, 'psdk_setpoint'):
            try:
                # pass a JSON string to the native wrapper
                self.lib.psdk_setpoint.argtypes = [ctypes.c_char_p]
                self.lib.psdk_setpoint.restype = ctypes.c_int
                b = setpoint_json.encode('utf-8')
                return self.lib.psdk_setpoint(b)
            except Exception as e:
                self.logger.error(f'psdk_setpoint error: {e}')
                return -1
        self.logger.info(f'PSDK setpoint stub: {setpoint_json}')
        return 0

    def send_command(self, name: str, payload_json: str = None):
        # Generic command forwarding
        if self.lib and hasattr(self.lib, 'psdk_command'):
            try:
                self.lib.psdk_command.argtypes = [ctypes.c_char_p, ctypes.c_char_p]
                self.lib.psdk_command.restype = ctypes.c_int
                bname = name.encode('utf-8')
                bpayload = (payload_json.encode('utf-8') if payload_json else b'')
                return self.lib.psdk_command(bname, bpayload)
            except Exception as e:
                self.logger.error(f'psdk_command error: {e}')
                return -1
        self.logger.info(f'PSDK command stub: {name} payload={payload_json}')
        return 0

    def get_telemetry(self):
        """Fetch the latest FC telemetry from the native wrapper.

        Returns a dict with lat/lon/alt (deg, deg, m), vx/vy/vz, qw/qx/qy/qz,
        height_rel (m, above takeoff point) and battery_percent (0-100), or None if not
        connected / the call failed.

        These are DJI's values verbatim, in DJI's frames - not the frames the VITRO
        interface publishes:

        * vx/vy/vz are ground-fixed **NEU** (m/s), i.e. NED with the Z sign flipped.
        * qw/qx/qy/qz rotate **body FRD -> ground NED** (Hamilton, q0 = w).

        Callers converting to the interface frames should use
        ``psdk_bridge_node.ground_neu_to_body_frd()`` rather than reimplementing it.
        """
        if not (self.lib and self.connected and hasattr(self.lib, 'psdk_get_telemetry')):
            return None

        lat = ctypes.c_double()
        lon = ctypes.c_double()
        alt = ctypes.c_double()
        vx = ctypes.c_float()
        vy = ctypes.c_float()
        vz = ctypes.c_float()
        qw = ctypes.c_float()
        qx = ctypes.c_float()
        qy = ctypes.c_float()
        qz = ctypes.c_float()
        height_rel = ctypes.c_float()
        battery_percent = ctypes.c_int()

        try:
            self.lib.psdk_get_telemetry.argtypes = [
                ctypes.POINTER(ctypes.c_double), ctypes.POINTER(ctypes.c_double), ctypes.POINTER(ctypes.c_double),
                ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float),
                ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float),
                ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float),
                ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_int),
            ]
            self.lib.psdk_get_telemetry.restype = ctypes.c_int
            rc = self.lib.psdk_get_telemetry(
                ctypes.byref(lat), ctypes.byref(lon), ctypes.byref(alt),
                ctypes.byref(vx), ctypes.byref(vy), ctypes.byref(vz),
                ctypes.byref(qw), ctypes.byref(qx), ctypes.byref(qy), ctypes.byref(qz),
                ctypes.byref(height_rel), ctypes.byref(battery_percent),
            )
            if rc != 0:
                return None
        except Exception as e:
            self.logger.error(f'psdk_get_telemetry error: {e}')
            return None

        return {
            'lat': lat.value, 'lon': lon.value, 'alt': alt.value,
            'vx': vx.value, 'vy': vy.value, 'vz': vz.value,
            'qw': qw.value, 'qx': qx.value, 'qy': qy.value, 'qz': qz.value,
            'height_rel': height_rel.value, 'battery_percent': battery_percent.value,
        }

    # -- liveview (H.264 video) -------------------------------------------------
    #
    # The Pi forwards the H.264 elementary stream untouched; decoding happens on the
    # laptop, where VITRO's aruco_detector already runs. Nothing here parses NAL units:
    # ffmpeg/PyAV handle arbitrary chunking, and boundary logic on the Pi would be risk
    # without benefit.

    #: Drain buffer, allocated once. liveview_read runs at frame rate, so a fresh
    #: allocation per call would churn the heap for no reason.
    LIVEVIEW_READ_CHUNK = 262144  # 256 KiB

    def _ensure_liveview_buffer(self):
        if getattr(self, '_lv_buf', None) is None:
            self._lv_buf = ctypes.create_string_buffer(self.LIVEVIEW_READ_CHUNK)
            self._lv_len = ctypes.c_uint32()
        return self._lv_buf

    def liveview_start(self, position=1, source=1, bitrate_kbps=4000):
        """Start the H.264 stream. position/source default to the Mavic 3E's payload-port
        visible-light camera; position 7 is the FPV camera if that returns NONSUPPORT."""
        if not (self.lib and self.connected and hasattr(self.lib, 'psdk_liveview_start')):
            return -1
        try:
            self.lib.psdk_liveview_start.argtypes = [ctypes.c_int, ctypes.c_int, ctypes.c_int]
            self.lib.psdk_liveview_start.restype = ctypes.c_int
            return self.lib.psdk_liveview_start(int(position), int(source), int(bitrate_kbps))
        except Exception as e:  # noqa: BLE001
            self.logger.error(f'psdk_liveview_start error: {e}')
            return -1

    def liveview_stop(self):
        if not (self.lib and hasattr(self.lib, 'psdk_liveview_stop')):
            return -1
        try:
            self.lib.psdk_liveview_stop.restype = ctypes.c_int
            return self.lib.psdk_liveview_stop()
        except Exception as e:  # noqa: BLE001
            self.logger.error(f'psdk_liveview_stop error: {e}')
            return -1

    def liveview_read(self):
        """Drain whatever the ring buffer holds. Returns bytes (possibly empty), or None
        if liveview is not running. Empty is the normal idle case, not an error."""
        if not (self.lib and self.connected and hasattr(self.lib, 'psdk_liveview_read')):
            return None
        buf = self._ensure_liveview_buffer()
        try:
            self.lib.psdk_liveview_read.argtypes = [
                ctypes.POINTER(ctypes.c_uint8), ctypes.c_uint32, ctypes.POINTER(ctypes.c_uint32)]
            self.lib.psdk_liveview_read.restype = ctypes.c_int
            rc = self.lib.psdk_liveview_read(
                ctypes.cast(buf, ctypes.POINTER(ctypes.c_uint8)),
                ctypes.c_uint32(self.LIVEVIEW_READ_CHUNK),
                ctypes.byref(self._lv_len))
            if rc != 0:
                return None
            return buf.raw[:self._lv_len.value]
        except Exception as e:  # noqa: BLE001
            self.logger.error(f'psdk_liveview_read error: {e}')
            return None

    def liveview_request_keyframe(self):
        """Ask for an IDR frame - a decoder that joined mid-stream cannot render until one."""
        if not (self.lib and hasattr(self.lib, 'psdk_liveview_request_keyframe')):
            return -1
        try:
            self.lib.psdk_liveview_request_keyframe.restype = ctypes.c_int
            return self.lib.psdk_liveview_request_keyframe()
        except Exception as e:  # noqa: BLE001
            self.logger.error(f'psdk_liveview_request_keyframe error: {e}')
            return -1

    def liveview_stats(self):
        """(bytes_in, dropped) since liveview_start, or None."""
        if not (self.lib and hasattr(self.lib, 'psdk_liveview_stats')):
            return None
        try:
            b = ctypes.c_ulonglong()
            d = ctypes.c_ulonglong()
            self.lib.psdk_liveview_stats.argtypes = [
                ctypes.POINTER(ctypes.c_ulonglong), ctypes.POINTER(ctypes.c_ulonglong)]
            self.lib.psdk_liveview_stats.restype = ctypes.c_int
            self.lib.psdk_liveview_stats(ctypes.byref(b), ctypes.byref(d))
            return b.value, d.value
        except Exception as e:  # noqa: BLE001
            self.logger.error(f'psdk_liveview_stats error: {e}')
            return None

    # PSDK authority owner codes (E_DJIFcSubscriptionControlAuthority).
    AUTHORITY_RC = 0
    AUTHORITY_MSDK = 1
    AUTHORITY_PSDK = 4
    AUTHORITY_DOCK = 5

    AUTHORITY_NAMES = {0: 'RC', 1: 'MSDK', 4: 'PSDK', 5: 'Dock'}

    def get_control_authority(self):
        """(authority, change_reason, last_event) or None if unavailable.

        `authority` is who the aircraft says is flying it. This matters because
        psdk_setpoint() returns success whether or not PSDK holds authority - DJI's
        ExecuteJoystickAction reports the API call succeeded, and the aircraft then
        discards the command. This is the only way to tell the two apart.
        """
        if not (self.lib and hasattr(self.lib, 'psdk_get_control_authority')):
            return None
        try:
            auth = ctypes.c_int(-1)
            reason = ctypes.c_int(-1)
            last = ctypes.c_int(-1)
            self.lib.psdk_get_control_authority.argtypes = [
                ctypes.POINTER(ctypes.c_int),
                ctypes.POINTER(ctypes.c_int),
                ctypes.POINTER(ctypes.c_int)]
            self.lib.psdk_get_control_authority.restype = ctypes.c_int
            rc = self.lib.psdk_get_control_authority(
                ctypes.byref(auth), ctypes.byref(reason), ctypes.byref(last))
            if rc != 0:
                return None
            return auth.value, reason.value, last.value
        except Exception as e:  # noqa: BLE001
            self.logger.error(f'psdk_get_control_authority error: {e}')
            return None

    def has_psdk_authority(self):
        """True only if the aircraft confirms PSDK holds authority.

        None (not False) when the aircraft has not reported yet, so callers can tell
        "definitely not ours" from "don't know".
        """
        info = self.get_control_authority()
        if info is None:
            return None
        return info[0] == self.AUTHORITY_PSDK

    def get_rc(self):
        """RC stick positions and link flags, or None if unavailable.

        Returns (pitch, roll, yaw, throttle, flags) with sticks normalised
        -0.999 .. 0.999, centre 0.0. `flags` is a bitfield:
        bit0 logic, bit1 sky, bit2 ground, bit3 app connected.
        """
        if not (self.lib and hasattr(self.lib, 'psdk_get_rc')):
            return None
        try:
            pitch = ctypes.c_float(0.0)
            roll = ctypes.c_float(0.0)
            yaw = ctypes.c_float(0.0)
            throttle = ctypes.c_float(0.0)
            flags = ctypes.c_int(0)
            self.lib.psdk_get_rc.argtypes = [
                ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float),
                ctypes.POINTER(ctypes.c_float), ctypes.POINTER(ctypes.c_float),
                ctypes.POINTER(ctypes.c_int)]
            self.lib.psdk_get_rc.restype = ctypes.c_int
            rc = self.lib.psdk_get_rc(
                ctypes.byref(pitch), ctypes.byref(roll), ctypes.byref(yaw),
                ctypes.byref(throttle), ctypes.byref(flags))
            if rc != 0:
                return None
            return (pitch.value, roll.value, yaw.value, throttle.value, flags.value)
        except Exception as e:  # noqa: BLE001
            self.logger.error(f'psdk_get_rc error: {e}')
            return None

    def disconnect(self):
        if self.lib and hasattr(self.lib, 'psdk_disconnect'):
            try:
                self.lib.psdk_disconnect()
            except Exception as e:
                self.logger.error(f'psdk_disconnect error: {e}')
        self.connected = False
