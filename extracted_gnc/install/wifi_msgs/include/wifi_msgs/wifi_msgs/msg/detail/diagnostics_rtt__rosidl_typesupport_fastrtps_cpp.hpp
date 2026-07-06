// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from wifi_msgs:msg/DiagnosticsRTT.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "wifi_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "wifi_msgs/msg/detail/diagnostics_rtt__struct.hpp"

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

namespace wifi_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wifi_msgs
cdr_serialize(
  const wifi_msgs::msg::DiagnosticsRTT & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wifi_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  wifi_msgs::msg::DiagnosticsRTT & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wifi_msgs
get_serialized_size(
  const wifi_msgs::msg::DiagnosticsRTT & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wifi_msgs
max_serialized_size_DiagnosticsRTT(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace wifi_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_wifi_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, wifi_msgs, msg, DiagnosticsRTT)();

#ifdef __cplusplus
}
#endif

#endif  // WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
