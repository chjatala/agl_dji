// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fm_gen_msgs:msg/PoseInCorridor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fm_gen_msgs/msg/detail/pose_in_corridor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace fm_gen_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PoseInCorridor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fm_gen_msgs::msg::PoseInCorridor(_init);
}

void PoseInCorridor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fm_gen_msgs::msg::PoseInCorridor *>(message_memory);
  typed_message->~PoseInCorridor();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PoseInCorridor_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::PoseInCorridor, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::PoseInCorridor, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::PoseInCorridor, yaw),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PoseInCorridor_message_members = {
  "fm_gen_msgs::msg",  // message namespace
  "PoseInCorridor",  // message name
  3,  // number of fields
  sizeof(fm_gen_msgs::msg::PoseInCorridor),
  PoseInCorridor_message_member_array,  // message members
  PoseInCorridor_init_function,  // function to initialize message memory (memory has to be allocated)
  PoseInCorridor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PoseInCorridor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PoseInCorridor_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace fm_gen_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<fm_gen_msgs::msg::PoseInCorridor>()
{
  return &::fm_gen_msgs::msg::rosidl_typesupport_introspection_cpp::PoseInCorridor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fm_gen_msgs, msg, PoseInCorridor)() {
  return &::fm_gen_msgs::msg::rosidl_typesupport_introspection_cpp::PoseInCorridor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
