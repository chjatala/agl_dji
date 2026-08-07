cmake_minimum_required(VERSION 3.8)
project(wifi_msgs)

# Regenerated from the interface definitions shipped in the VITRO install tree.
# See tools/reconstruct_msgs.py - do not hand-edit, re-run that instead.

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/DiagnosticsRSSI.msg"
  "msg/DiagnosticsRTT.msg"
  "msg/RangeArrayRSSI.msg"
  "msg/RangeArrayRTT.msg"
  "msg/RangeRSSI.msg"
  "msg/RangeRTT.msg"
  DEPENDENCIES
  builtin_interfaces
  geometry_msgs
  std_msgs
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
