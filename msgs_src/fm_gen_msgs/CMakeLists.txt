cmake_minimum_required(VERSION 3.8)
project(fm_gen_msgs)

# Regenerated from the interface definitions shipped in the VITRO install tree.
# See tools/reconstruct_msgs.py - do not hand-edit, re-run that instead.

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/ArucoMarker.msg"
  "msg/ArucoMarkerArray.msg"
  "msg/DiagnosticArray.msg"
  "msg/DiagnosticStatus.msg"
  "msg/KeyValue.msg"
  "msg/Line.msg"
  "msg/LineArray.msg"
  "msg/PoseInCorridor.msg"
  "msg/SysStateStamped.msg"
  "msg/SysStateWithCovarianceStamped.msg"
  "msg/TopicStatus.msg"
  "msg/TopicStatusArray.msg"
  "srv/Watchdog.srv"
  DEPENDENCIES
  std_msgs
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
