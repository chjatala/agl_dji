// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fm_gen_msgs:msg/ArucoMarkerArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fm_gen_msgs/msg/detail/aruco_marker_array__struct.hpp"
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

void ArucoMarkerArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fm_gen_msgs::msg::ArucoMarkerArray(_init);
}

void ArucoMarkerArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fm_gen_msgs::msg::ArucoMarkerArray *>(message_memory);
  typed_message->~ArucoMarkerArray();
}

size_t size_function__ArucoMarkerArray__marker(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<fm_gen_msgs::msg::ArucoMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ArucoMarkerArray__marker(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<fm_gen_msgs::msg::ArucoMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__ArucoMarkerArray__marker(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<fm_gen_msgs::msg::ArucoMarker> *>(untyped_member);
  return &member[index];
}

void fetch_function__ArucoMarkerArray__marker(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const fm_gen_msgs::msg::ArucoMarker *>(
    get_const_function__ArucoMarkerArray__marker(untyped_member, index));
  auto & value = *reinterpret_cast<fm_gen_msgs::msg::ArucoMarker *>(untyped_value);
  value = item;
}

void assign_function__ArucoMarkerArray__marker(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<fm_gen_msgs::msg::ArucoMarker *>(
    get_function__ArucoMarkerArray__marker(untyped_member, index));
  const auto & value = *reinterpret_cast<const fm_gen_msgs::msg::ArucoMarker *>(untyped_value);
  item = value;
}

void resize_function__ArucoMarkerArray__marker(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<fm_gen_msgs::msg::ArucoMarker> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ArucoMarkerArray_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::ArucoMarkerArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num_marker",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::ArucoMarkerArray, num_marker),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "camera_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::ArucoMarkerArray, camera_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_captured",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::ArucoMarkerArray, time_captured),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "marker",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<fm_gen_msgs::msg::ArucoMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::ArucoMarkerArray, marker),  // bytes offset in struct
    nullptr,  // default value
    size_function__ArucoMarkerArray__marker,  // size() function pointer
    get_const_function__ArucoMarkerArray__marker,  // get_const(index) function pointer
    get_function__ArucoMarkerArray__marker,  // get(index) function pointer
    fetch_function__ArucoMarkerArray__marker,  // fetch(index, &value) function pointer
    assign_function__ArucoMarkerArray__marker,  // assign(index, value) function pointer
    resize_function__ArucoMarkerArray__marker  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ArucoMarkerArray_message_members = {
  "fm_gen_msgs::msg",  // message namespace
  "ArucoMarkerArray",  // message name
  5,  // number of fields
  sizeof(fm_gen_msgs::msg::ArucoMarkerArray),
  ArucoMarkerArray_message_member_array,  // message members
  ArucoMarkerArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ArucoMarkerArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ArucoMarkerArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ArucoMarkerArray_message_members,
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
get_message_type_support_handle<fm_gen_msgs::msg::ArucoMarkerArray>()
{
  return &::fm_gen_msgs::msg::rosidl_typesupport_introspection_cpp::ArucoMarkerArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fm_gen_msgs, msg, ArucoMarkerArray)() {
  return &::fm_gen_msgs::msg::rosidl_typesupport_introspection_cpp::ArucoMarkerArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
