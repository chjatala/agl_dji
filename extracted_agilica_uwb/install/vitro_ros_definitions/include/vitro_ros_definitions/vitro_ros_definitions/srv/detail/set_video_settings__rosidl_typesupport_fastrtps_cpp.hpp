// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from vitro_ros_definitions:srv/SetVideoSettings.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_VIDEO_SETTINGS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_VIDEO_SETTINGS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "vitro_ros_definitions/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "vitro_ros_definitions/srv/detail/set_video_settings__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace vitro_ros_definitions
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
cdr_serialize(
  const vitro_ros_definitions::srv::SetVideoSettings_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vitro_ros_definitions::srv::SetVideoSettings_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
get_serialized_size(
  const vitro_ros_definitions::srv::SetVideoSettings_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
max_serialized_size_SetVideoSettings_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace vitro_ros_definitions

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vitro_ros_definitions, srv, SetVideoSettings_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vitro_ros_definitions/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "vitro_ros_definitions/srv/detail/set_video_settings__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace vitro_ros_definitions
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
cdr_serialize(
  const vitro_ros_definitions::srv::SetVideoSettings_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vitro_ros_definitions::srv::SetVideoSettings_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
get_serialized_size(
  const vitro_ros_definitions::srv::SetVideoSettings_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
max_serialized_size_SetVideoSettings_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace vitro_ros_definitions

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vitro_ros_definitions, srv, SetVideoSettings_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vitro_ros_definitions/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vitro_ros_definitions, srv, SetVideoSettings)();

#ifdef __cplusplus
}
#endif

#endif  // VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_VIDEO_SETTINGS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
