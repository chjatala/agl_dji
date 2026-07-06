// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from vitro_ros_definitions:msg/FMSResults.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "vitro_ros_definitions/msg/detail/fms_results__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vitro_ros_definitions
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FMSResults_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vitro_ros_definitions::msg::FMSResults(_init);
}

void FMSResults_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vitro_ros_definitions::msg::FMSResults *>(message_memory);
  typed_message->~FMSResults();
}

size_t size_function__FMSResults__results(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<vitro_ros_definitions::msg::FMSResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FMSResults__results(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<vitro_ros_definitions::msg::FMSResult> *>(untyped_member);
  return &member[index];
}

void * get_function__FMSResults__results(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<vitro_ros_definitions::msg::FMSResult> *>(untyped_member);
  return &member[index];
}

void fetch_function__FMSResults__results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const vitro_ros_definitions::msg::FMSResult *>(
    get_const_function__FMSResults__results(untyped_member, index));
  auto & value = *reinterpret_cast<vitro_ros_definitions::msg::FMSResult *>(untyped_value);
  value = item;
}

void assign_function__FMSResults__results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<vitro_ros_definitions::msg::FMSResult *>(
    get_function__FMSResults__results(untyped_member, index));
  const auto & value = *reinterpret_cast<const vitro_ros_definitions::msg::FMSResult *>(untyped_value);
  item = value;
}

void resize_function__FMSResults__results(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<vitro_ros_definitions::msg::FMSResult> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FMSResults_message_member_array[1] = {
  {
    "results",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<vitro_ros_definitions::msg::FMSResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vitro_ros_definitions::msg::FMSResults, results),  // bytes offset in struct
    nullptr,  // default value
    size_function__FMSResults__results,  // size() function pointer
    get_const_function__FMSResults__results,  // get_const(index) function pointer
    get_function__FMSResults__results,  // get(index) function pointer
    fetch_function__FMSResults__results,  // fetch(index, &value) function pointer
    assign_function__FMSResults__results,  // assign(index, value) function pointer
    resize_function__FMSResults__results  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FMSResults_message_members = {
  "vitro_ros_definitions::msg",  // message namespace
  "FMSResults",  // message name
  1,  // number of fields
  sizeof(vitro_ros_definitions::msg::FMSResults),
  FMSResults_message_member_array,  // message members
  FMSResults_init_function,  // function to initialize message memory (memory has to be allocated)
  FMSResults_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FMSResults_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FMSResults_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace vitro_ros_definitions


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vitro_ros_definitions::msg::FMSResults>()
{
  return &::vitro_ros_definitions::msg::rosidl_typesupport_introspection_cpp::FMSResults_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vitro_ros_definitions, msg, FMSResults)() {
  return &::vitro_ros_definitions::msg::rosidl_typesupport_introspection_cpp::FMSResults_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
