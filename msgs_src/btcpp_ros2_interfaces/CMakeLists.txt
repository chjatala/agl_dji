cmake_minimum_required(VERSION 3.8)
project(btcpp_ros2_interfaces)

# Regenerated from the interface definitions shipped in the VITRO install tree.
# See tools/reconstruct_msgs.py - do not hand-edit, re-run that instead.

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(action_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/NodeStatus.msg"
  "srv/GetTrees.srv"
  "action/ExecuteTree.action"
  "action/Sleep.action"
  DEPENDENCIES
  action_msgs
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
