cmake_minimum_required(VERSION 3.8)
project(vision_msgs)

# Regenerated from the interface definitions shipped in the VITRO install tree.
# See tools/reconstruct_msgs.py - do not hand-edit, re-run that instead.

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/VisionResult.msg"
  "msg/VisionResultArray.msg"
  DEPENDENCIES
  geometry_msgs
  sensor_msgs
  std_msgs
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
