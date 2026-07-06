// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fm_gen_msgs:msg/LineArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fm_gen_msgs/msg/detail/line_array__rosidl_typesupport_introspection_c.h"
#include "fm_gen_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fm_gen_msgs/msg/detail/line_array__functions.h"
#include "fm_gen_msgs/msg/detail/line_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `camera_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `lines`
#include "fm_gen_msgs/msg/line.h"
// Member `lines`
#include "fm_gen_msgs/msg/detail/line__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fm_gen_msgs__msg__LineArray__init(message_memory);
}

void fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_fini_function(void * message_memory)
{
  fm_gen_msgs__msg__LineArray__fini(message_memory);
}

size_t fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__size_function__LineArray__lines(
  const void * untyped_member)
{
  const fm_gen_msgs__msg__Line__Sequence * member =
    (const fm_gen_msgs__msg__Line__Sequence *)(untyped_member);
  return member->size;
}

const void * fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__get_const_function__LineArray__lines(
  const void * untyped_member, size_t index)
{
  const fm_gen_msgs__msg__Line__Sequence * member =
    (const fm_gen_msgs__msg__Line__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__get_function__LineArray__lines(
  void * untyped_member, size_t index)
{
  fm_gen_msgs__msg__Line__Sequence * member =
    (fm_gen_msgs__msg__Line__Sequence *)(untyped_member);
  return &member->data[index];
}

void fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__fetch_function__LineArray__lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const fm_gen_msgs__msg__Line * item =
    ((const fm_gen_msgs__msg__Line *)
    fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__get_const_function__LineArray__lines(untyped_member, index));
  fm_gen_msgs__msg__Line * value =
    (fm_gen_msgs__msg__Line *)(untyped_value);
  *value = *item;
}

void fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__assign_function__LineArray__lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  fm_gen_msgs__msg__Line * item =
    ((fm_gen_msgs__msg__Line *)
    fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__get_function__LineArray__lines(untyped_member, index));
  const fm_gen_msgs__msg__Line * value =
    (const fm_gen_msgs__msg__Line *)(untyped_value);
  *item = *value;
}

bool fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__resize_function__LineArray__lines(
  void * untyped_member, size_t size)
{
  fm_gen_msgs__msg__Line__Sequence * member =
    (fm_gen_msgs__msg__Line__Sequence *)(untyped_member);
  fm_gen_msgs__msg__Line__Sequence__fini(member);
  return fm_gen_msgs__msg__Line__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__LineArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_detection",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__LineArray, num_detection),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__LineArray, camera_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_captured",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__LineArray, time_captured),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__LineArray, lines),  // bytes offset in struct
    NULL,  // default value
    fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__size_function__LineArray__lines,  // size() function pointer
    fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__get_const_function__LineArray__lines,  // get_const(index) function pointer
    fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__get_function__LineArray__lines,  // get(index) function pointer
    fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__fetch_function__LineArray__lines,  // fetch(index, &value) function pointer
    fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__assign_function__LineArray__lines,  // assign(index, value) function pointer
    fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__resize_function__LineArray__lines  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_message_members = {
  "fm_gen_msgs__msg",  // message namespace
  "LineArray",  // message name
  5,  // number of fields
  sizeof(fm_gen_msgs__msg__LineArray),
  fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_message_member_array,  // message members
  fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_init_function,  // function to initialize message memory (memory has to be allocated)
  fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_message_type_support_handle = {
  0,
  &fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fm_gen_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, msg, LineArray)() {
  fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, msg, Line)();
  if (!fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_message_type_support_handle.typesupport_identifier) {
    fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fm_gen_msgs__msg__LineArray__rosidl_typesupport_introspection_c__LineArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
