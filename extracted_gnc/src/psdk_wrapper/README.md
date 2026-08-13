# psdk_wrapper

Native shim (`libpsdk_wrapper.so`) around DJI's [Payload SDK](https://github.com/dji-sdk/Payload-SDK)
(vendored under `third_party/`, MIT-licensed). It backs `dji_psdk_bridge`'s `PSDKAdapter`
(see `../dji_psdk_bridge/dji_psdk_bridge/psdk_adapter.py`), which loads it via `ctypes` -
so it has no ROS dependency itself, just a plain C ABI:

`psdk_connect`, `psdk_arm`, `psdk_takeoff`, `psdk_land`, `psdk_setpoint`, `psdk_command`,
`psdk_get_telemetry`, `psdk_disconnect`.

## Before this will actually fly anything

1. **The aircraft must support PSDK.** Only DJI's enterprise airframes with a payload
   port do: M30/M30T, M300/M350 RTK, Matrice 4 series, Mavic 3 Enterprise, etc.
   Consumer drones (Mini series, Air series, ...) have no payload port and cannot run
   PSDK - if that's the target aircraft, use the MSDK path (`vitro_interface`) instead.
2. **A physical UART link** from the companion computer to the aircraft's E-Port/X-Port/
   SkyPort adapter, wired per DJI's reference schematics (see `third_party/psdk_lib`'s
   upstream docs). `PSDK_UART_DEV1` names the *container-side* node (`/dev/ttyUSB0`); the host
   side is resolved at launch by USB product string in `agilica/scripts/detect_serial.sh`, since
   both this cable and the UWB module are FTDI and the `ttyUSB*` index depends on plug order.
   (The UWB unit is an FTDI FT231X on `/dev/ttyUSBn` - *not* `/dev/ttyACM0`, as earlier notes
   in this repo claimed; it is not a CDC-ACM device.)
3. **A DJI developer app**, registered at <https://developer.dji.com/user/apps>, supplying:
   `PSDK_APP_NAME`, `PSDK_APP_ID`, `PSDK_APP_KEY`, `PSDK_APP_LICENSE`, `PSDK_DEV_ACCOUNT`.
   `psdk_connect()` refuses to call `DjiCore_Init` without all five set.

   The target aircraft for this integration is a **Mavic 3 Enterprise** (`M3E`/`M3T` in
   `DJI_AIRCRAFT_TYPE_*`), which does have an E-Port. The `drone_make: DJI_MINI3` left in
   `cfg/dji_interface.yaml` is an MSDK-era leftover - the Mini series appears nowhere in
   PSDK's aircraft enum and cannot run PSDK at all.
4. Optional: `PSDK_BAUD_RATE` (default `460800`, must match the adapter's configured baud).

None of the above can be supplied by this codebase - they're specific to your aircraft,
adapter wiring, and DJI developer account.

## Build

Ament/colcon package (`ament_cmake`), same as any other package in this workspace:

```
colcon build --packages-select psdk_wrapper dji_psdk_bridge
```

`CMakeLists.txt` picks the matching prebuilt `libpayloadsdk.a` for the host architecture
(x86_64 or aarch64) from `third_party/psdk_lib/lib/`. There's no support for other
architectures because DJI doesn't ship a prebuilt static lib for them under Linux.


## Done
Implemented against the actual PSDK API (`DjiCore_Init`, `DjiFlightController_*`,
`DjiFcSubscription_*`): connect/init, arm (obtain joystick authority), takeoff, land,
velocity+yaw-rate joystick setpoints, and telemetry (position, velocity, attitude
quaternion, relative height, battery %) - mirroring the control modes already used by
the MSDK path in `cfg/dji_interface.yaml` (velocity/velocity/angular-rate).

## Frames: this wrapper returns DJI's values verbatim

`psdk_get_telemetry()` does **no** frame conversion, and DJI's frames are not the ones the
VITRO ROS2 interface publishes. Two traps, both documented in
`third_party/psdk_lib/include/dji_fc_subscription.h`:

* `TOPIC_VELOCITY` (and `TOPIC_ACCELERATION_GROUND`) are ground-fixed **NEU** - the header
  warns this "is not in a conventional right-handed frame": it is NED with the **sign of Z
  flipped**. Negate Z to get NED.
* `TOPIC_QUATERNION` rotates **body FRD -> ground NED** (Hamilton, q0 = w), so its transpose
  is what maps a ground vector into the body frame.

VITRO expects **body-frame** speed on its velocity topic (confirmed by Flanders Make,
13 Aug 2026). The conversion lives in one place on the ROS side -
`dji_psdk_bridge/psdk_bridge_node.py:ground_neu_to_body_frd()`, covered by
`dji_psdk_bridge/test/test_frames.py`. Don't reimplement it here or in a caller; if you add
more ground-frame subscriptions (acceleration, angular rate), route them through the same
helper.

## TODO
Not implemented (out of scope for this bridge): gimbal control, camera/video, waypoint
missions, RTK, obstacle avoidance config. Add calls against the corresponding
`dji_*.h` header under `third_party/psdk_lib/include` if you need them.
