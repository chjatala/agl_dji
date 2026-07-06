// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from wifi_msgs:msg/DiagnosticsRSSI.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "wifi_msgs/msg/detail/diagnostics_rssi__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace wifi_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DiagnosticsRSSI_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wifi_msgs::msg::DiagnosticsRSSI(_init);
}

void DiagnosticsRSSI_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wifi_msgs::msg::DiagnosticsRSSI *>(message_memory);
  typed_message->~DiagnosticsRSSI();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DiagnosticsRSSI_message_member_array[3] = {
  {
    "rssi",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wifi_msgs::msg::DiagnosticsRSSI, rssi),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "a",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wifi_msgs::msg::DiagnosticsRSSI, a),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wifi_msgs::msg::DiagnosticsRSSI, n),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DiagnosticsRSSI_message_members = {
  "wifi_msgs::msg",  // message namespace
  "DiagnosticsRSSI",  // message name
  3,  // number of fields
  sizeof(wifi_msgs::msg::DiagnosticsRSSI),
  DiagnosticsRSSI_message_member_array,  // message members
  DiagnosticsRSSI_init_function,  // function to initialize message memory (memory has to be allocated)
  DiagnosticsRSSI_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DiagnosticsRSSI_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DiagnosticsRSSI_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace wifi_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<wifi_msgs::msg::DiagnosticsRSSI>()
{
  return &::wifi_msgs::msg::rosidl_typesupport_introspection_cpp::DiagnosticsRSSI_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wifi_msgs, msg, DiagnosticsRSSI)() {
  return &::wifi_msgs::msg::rosidl_typesupport_introspection_cpp::DiagnosticsRSSI_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
