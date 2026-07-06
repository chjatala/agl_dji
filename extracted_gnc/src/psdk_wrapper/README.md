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
   upstream docs). Configure the device node via `PSDK_UART_DEV1` (default `/dev/ttyUSB0`;
   kept off `/dev/ttyACM0` since that's already used by the Agilica UWB unit).
3. **A DJI developer app**, registered at <https://developer.dji.com/user/apps>, supplying:
   `PSDK_APP_NAME`, `PSDK_APP_ID`, `PSDK_APP_KEY`, `PSDK_APP_LICENSE`, `PSDK_DEV_ACCOUNT`.
   `psdk_connect()` refuses to call `DjiCore_Init` without all five set.
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

## TODO
Not implemented (out of scope for this bridge): gimbal control, camera/video, waypoint
missions, RTK, obstacle avoidance config. Add calls against the corresponding
`dji_*.h` header under `third_party/psdk_lib/include` if you need them.
