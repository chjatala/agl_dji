// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from wifi_msgs:msg/RangeArrayRTT.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "wifi_msgs/msg/detail/range_array_rtt__struct.hpp"
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

void RangeArrayRTT_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) wifi_msgs::msg::RangeArrayRTT(_init);
}

void RangeArrayRTT_fini_function(void * message_memory)
{
  auto typed_message = static_cast<wifi_msgs::msg::RangeArrayRTT *>(message_memory);
  typed_message->~RangeArrayRTT();
}

size_t size_function__RangeArrayRTT__ranges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<wifi_msgs::msg::RangeRTT> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RangeArrayRTT__ranges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<wifi_msgs::msg::RangeRTT> *>(untyped_member);
  return &member[index];
}

void * get_function__RangeArrayRTT__ranges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<wifi_msgs::msg::RangeRTT> *>(untyped_member);
  return &member[index];
}

void fetch_function__RangeArrayRTT__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const wifi_msgs::msg::RangeRTT *>(
    get_const_function__RangeArrayRTT__ranges(untyped_member, index));
  auto & value = *reinterpret_cast<wifi_msgs::msg::RangeRTT *>(untyped_value);
  value = item;
}

void assign_function__RangeArrayRTT__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<wifi_msgs::msg::RangeRTT *>(
    get_function__RangeArrayRTT__ranges(untyped_member, index));
  const auto & value = *reinterpret_cast<const wifi_msgs::msg::RangeRTT *>(untyped_value);
  item = value;
}

void resize_function__RangeArrayRTT__ranges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<wifi_msgs::msg::RangeRTT> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RangeArrayRTT_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wifi_msgs::msg::RangeArrayRTT, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tag_mac",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wifi_msgs::msg::RangeArrayRTT, tag_mac),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tag_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wifi_msgs::msg::RangeArrayRTT, tag_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ranges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<wifi_msgs::msg::RangeRTT>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wifi_msgs::msg::RangeArrayRTT, ranges),  // bytes offset in struct
    nullptr,  // default value
    size_function__RangeArrayRTT__ranges,  // size() function pointer
    get_const_function__RangeArrayRTT__ranges,  // get_const(index) function pointer
    get_function__RangeArrayRTT__ranges,  // get(index) function pointer
    fetch_function__RangeArrayRTT__ranges,  // fetch(index, &value) function pointer
    assign_function__RangeArrayRTT__ranges,  // assign(index, value) function pointer
    resize_function__RangeArrayRTT__ranges  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RangeArrayRTT_message_members = {
  "wifi_msgs::msg",  // message namespace
  "RangeArrayRTT",  // message name
  4,  // number of fields
  sizeof(wifi_msgs::msg::RangeArrayRTT),
  RangeArrayRTT_message_member_array,  // message members
  RangeArrayRTT_init_function,  // function to initialize message memory (memory has to be allocated)
  RangeArrayRTT_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RangeArrayRTT_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RangeArrayRTT_message_members,
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
get_message_type_support_handle<wifi_msgs::msg::RangeArrayRTT>()
{
  return &::wifi_msgs::msg::rosidl_typesupport_introspection_cpp::RangeArrayRTT_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, wifi_msgs, msg, RangeArrayRTT)() {
  return &::wifi_msgs::msg::rosidl_typesupport_introspection_cpp::RangeArrayRTT_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
