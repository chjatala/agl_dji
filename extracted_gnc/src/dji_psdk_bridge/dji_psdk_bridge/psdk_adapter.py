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

        Returns a dict with lat/lon/alt (deg, deg, m), vx/vy/vz (m/s, ground frame),
        qw/qx/qy/qz (aircraft attitude quaternion), height_rel (m, above takeoff point)
        and battery_percent (0-100), or None if not connected / the call failed.
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

    def disconnect(self):
        if self.lib and hasattr(self.lib, 'psdk_disconnect'):
            try:
                self.lib.psdk_disconnect()
            except Exception as e:
                self.logger.error(f'psdk_disconnect error: {e}')
        self.connected = False
