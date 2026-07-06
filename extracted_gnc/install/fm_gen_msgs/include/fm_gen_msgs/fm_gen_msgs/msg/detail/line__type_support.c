// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fm_gen_msgs:msg/Line.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fm_gen_msgs/msg/detail/line__rosidl_typesupport_introspection_c.h"
#include "fm_gen_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fm_gen_msgs/msg/detail/line__functions.h"
#include "fm_gen_msgs/msg/detail/line__struct.h"


// Include directives for member types
// Member `line_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `line_1`
// Member `line_2`
// Member `line_c`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__Line_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fm_gen_msgs__msg__Line__init(message_memory);
}

void fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__Line_fini_function(void * message_memory)
{
  fm_gen_msgs__msg__Line__fini(message_memory);
}

size_t fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__line_1(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__line_1(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__line_1(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__line_1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__line_1(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__line_1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__line_1(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__line_1(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__line_2(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__line_2(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__line_2(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__line_2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__line_2(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__line_2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__line_2(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__line_2(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__line_c(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__line_c(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__line_c(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__line_c(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__line_c(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__line_c(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__line_c(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__line_c(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__Line_message_member_array[5] = {
  {
    "line_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__Line, line_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "certainty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__Line, certainty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "line_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__Line, line_1),  // bytes offset in struct
    NULL,  // default value
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__line_1,  // size() function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__line_1,  // get_const(index) function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__line_1,  // get(index) function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__line_1,  // fetch(index, &value) function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__line_1,  // assign(index, value) function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__line_1  // resize(index) function pointer
  },
  {
    "line_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__Line, line_2),  // bytes offset in struct
    NULL,  // default value
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__line_2,  // size() function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__line_2,  // get_const(index) function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__line_2,  // get(index) function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__line_2,  // fetch(index, &value) function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__line_2,  // assign(index, value) function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__line_2  // resize(index) function pointer
  },
  {
    "line_c",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__Line, line_c),  // bytes offset in struct
    NULL,  // default value
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__size_function__Line__line_c,  // size() function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_const_function__Line__line_c,  // get_const(index) function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__get_function__Line__line_c,  // get(index) function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__fetch_function__Line__line_c,  // fetch(index, &value) function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__assign_function__Line__line_c,  // assign(index, value) function pointer
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__resize_function__Line__line_c  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__Line_message_members = {
  "fm_gen_msgs__msg",  // message namespace
  "Line",  // message name
  5,  // number of fields
  sizeof(fm_gen_msgs__msg__Line),
  fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__Line_message_member_array,  // message members
  fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__Line_init_function,  // function to initialize message memory (memory has to be allocated)
  fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__Line_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__Line_message_type_support_handle = {
  0,
  &fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__Line_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fm_gen_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, msg, Line)() {
  if (!fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__Line_message_type_support_handle.typesupport_identifier) {
    fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__Line_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fm_gen_msgs__msg__Line__rosidl_typesupport_introspection_c__Line_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
