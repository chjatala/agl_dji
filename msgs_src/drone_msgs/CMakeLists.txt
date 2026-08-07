cmake_minimum_required(VERSION 3.8)
project(drone_msgs)

# Regenerated from the interface definitions shipped in the VITRO install tree.
# See tools/reconstruct_msgs.py - do not hand-edit, re-run that instead.

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(action_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/AttZvelCmd.msg"
  "msg/DroneCmd.msg"
  "msg/DroneEulerStamped.msg"
  "msg/DroneJoystick.msg"
  "msg/DroneStateStamped.msg"
  "msg/GenLineFollowCmd.msg"
  "msg/GimbalAngleDegStamped.msg"
  "msg/VelYawCmd.msg"
  "msg/Waypoint.msg"
  "msg/Waypoints.msg"
  "srv/DroneCmd.srv"
  "srv/ImageCtrl.srv"
  "action/AlignMarker.action"
  "action/ApproachObj.action"
  "action/GenLineFollow.action"
  "action/Land.action"
  "action/LineFollow.action"
  "action/Move.action"
  "action/Moveto.action"
  "action/PrecisionLanding.action"
  "action/SysId.action"
  "action/TakeOff.action"
  DEPENDENCIES
  action_msgs
  geometry_msgs
  std_msgs
)

ament_export_dependencies(rosidl_default_runtime)
ament_package()
