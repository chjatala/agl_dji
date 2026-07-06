// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fm_gen_msgs:msg/TopicStatusArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fm_gen_msgs/msg/detail/topic_status_array__struct.hpp"
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

void TopicStatusArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fm_gen_msgs::msg::TopicStatusArray(_init);
}

void TopicStatusArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fm_gen_msgs::msg::TopicStatusArray *>(message_memory);
  typed_message->~TopicStatusArray();
}

size_t size_function__TopicStatusArray__topic_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<fm_gen_msgs::msg::TopicStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TopicStatusArray__topic_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<fm_gen_msgs::msg::TopicStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__TopicStatusArray__topic_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<fm_gen_msgs::msg::TopicStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__TopicStatusArray__topic_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const fm_gen_msgs::msg::TopicStatus *>(
    get_const_function__TopicStatusArray__topic_array(untyped_member, index));
  auto & value = *reinterpret_cast<fm_gen_msgs::msg::TopicStatus *>(untyped_value);
  value = item;
}

void assign_function__TopicStatusArray__topic_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<fm_gen_msgs::msg::TopicStatus *>(
    get_function__TopicStatusArray__topic_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const fm_gen_msgs::msg::TopicStatus *>(untyped_value);
  item = value;
}

void resize_function__TopicStatusArray__topic_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<fm_gen_msgs::msg::TopicStatus> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TopicStatusArray_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::TopicStatusArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "general_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::TopicStatusArray, general_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status_sum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::TopicStatusArray, status_sum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "topic_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<fm_gen_msgs::msg::TopicStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs::msg::TopicStatusArray, topic_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__TopicStatusArray__topic_array,  // size() function pointer
    get_const_function__TopicStatusArray__topic_array,  // get_const(index) function pointer
    get_function__TopicStatusArray__topic_array,  // get(index) function pointer
    fetch_function__TopicStatusArray__topic_array,  // fetch(index, &value) function pointer
    assign_function__TopicStatusArray__topic_array,  // assign(index, value) function pointer
    resize_function__TopicStatusArray__topic_array  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TopicStatusArray_message_members = {
  "fm_gen_msgs::msg",  // message namespace
  "TopicStatusArray",  // message name
  4,  // number of fields
  sizeof(fm_gen_msgs::msg::TopicStatusArray),
  TopicStatusArray_message_member_array,  // message members
  TopicStatusArray_init_function,  // function to initialize message memory (memory has to be allocated)
  TopicStatusArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TopicStatusArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TopicStatusArray_message_members,
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
get_message_type_support_handle<fm_gen_msgs::msg::TopicStatusArray>()
{
  return &::fm_gen_msgs::msg::rosidl_typesupport_introspection_cpp::TopicStatusArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fm_gen_msgs, msg, TopicStatusArray)() {
  return &::fm_gen_msgs::msg::rosidl_typesupport_introspection_cpp::TopicStatusArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
