// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fm_gen_msgs:msg/ArucoMarker.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fm_gen_msgs/msg/detail/aruco_marker__struct.hpp"
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

void ArucoMarker_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fm_gen_msgs::msg::ArucoMarker(_init);
}

void ArucoMarker_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fm_gen_msgs::msg::ArucoMarker *>(message_memory);
  typed_message->~ArucoMarker();
}

size_t size_function__ArucoMarker__corner(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ArucoMarker__corner(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ArucoMarker__corner(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArucoMarker__corner(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ArucoMarker__corner(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ArucoMarker__corner(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ArucoMarker__corner(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ArucoMarker__corner(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArucoMarker_message_member_array[2] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::ArucoMarker, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "corner",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::ArucoMarker, corner),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArucoMarker__corner,  // size() function pointer
    get_const_function__ArucoMarker__corner,  // get_const(index) function pointer
    get_function__ArucoMarker__corner,  // get(index) function pointer
    fetch_function__ArucoMarker__corner,  // fetch(index, &value) function pointer
    assign_function__ArucoMarker__corner,  // assign(index, value) function pointer
    resize_function__ArucoMarker__corner  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArucoMarker_message_members = {
  "fm_gen_msgs::msg",  // message namespace
  "ArucoMarker",  // message name
  2,  // number of fields
  sizeof(fm_gen_msgs::msg::ArucoMarker),
  ArucoMarker_message_member_array,  // message members
  ArucoMarker_init_function,  // function to initialize message memory (memory has to be allocated)
  ArucoMarker_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArucoMarker_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArucoMarker_message_members,
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
get_message_type_support_handle<fm_gen_msgs::msg::ArucoMarker>()
{
  return &::fm_gen_msgs::msg::rosidl_typesupport_introspection_cpp::ArucoMarker_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fm_gen_msgs, msg, ArucoMarker)() {
  return &::fm_gen_msgs::msg::rosidl_typesupport_introspection_cpp::ArucoMarker_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
