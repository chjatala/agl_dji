// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fm_gen_msgs:msg/TopicStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fm_gen_msgs/msg/detail/topic_status__rosidl_typesupport_introspection_c.h"
#include "fm_gen_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fm_gen_msgs/msg/detail/topic_status__functions.h"
#include "fm_gen_msgs/msg/detail/topic_status__struct.h"


// Include directives for member types
// Member `topic_name`
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"
// Member `error_code`
// Member `error_value`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__TopicStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fm_gen_msgs__msg__TopicStatus__init(message_memory);
}

void fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__TopicStatus_fini_function(void * message_memory)
{
  fm_gen_msgs__msg__TopicStatus__fini(message_memory);
}

size_t fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__size_function__TopicStatus__error_message(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_const_function__TopicStatus__error_message(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_function__TopicStatus__error_message(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__fetch_function__TopicStatus__error_message(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_const_function__TopicStatus__error_message(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__assign_function__TopicStatus__error_message(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_function__TopicStatus__error_message(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__resize_function__TopicStatus__error_message(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__size_function__TopicStatus__error_code(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_const_function__TopicStatus__error_code(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_function__TopicStatus__error_code(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__fetch_function__TopicStatus__error_code(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_const_function__TopicStatus__error_code(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__assign_function__TopicStatus__error_code(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_function__TopicStatus__error_code(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__resize_function__TopicStatus__error_code(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__size_function__TopicStatus__error_value(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_const_function__TopicStatus__error_value(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_function__TopicStatus__error_value(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__fetch_function__TopicStatus__error_value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_const_function__TopicStatus__error_value(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__assign_function__TopicStatus__error_value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_function__TopicStatus__error_value(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__resize_function__TopicStatus__error_value(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__TopicStatus_message_member_array[5] = {
  {
    "topic_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__TopicStatus, topic_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "topic_is_ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__TopicStatus, topic_is_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__TopicStatus, error_message),  // bytes offset in struct
    NULL,  // default value
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__size_function__TopicStatus__error_message,  // size() function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_const_function__TopicStatus__error_message,  // get_const(index) function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_function__TopicStatus__error_message,  // get(index) function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__fetch_function__TopicStatus__error_message,  // fetch(index, &value) function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__assign_function__TopicStatus__error_message,  // assign(index, value) function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__resize_function__TopicStatus__error_message  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__TopicStatus, error_code),  // bytes offset in struct
    NULL,  // default value
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__size_function__TopicStatus__error_code,  // size() function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_const_function__TopicStatus__error_code,  // get_const(index) function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_function__TopicStatus__error_code,  // get(index) function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__fetch_function__TopicStatus__error_code,  // fetch(index, &value) function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__assign_function__TopicStatus__error_code,  // assign(index, value) function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__resize_function__TopicStatus__error_code  // resize(index) function pointer
  },
  {
    "error_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__TopicStatus, error_value),  // bytes offset in struct
    NULL,  // default value
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__size_function__TopicStatus__error_value,  // size() function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_const_function__TopicStatus__error_value,  // get_const(index) function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__get_function__TopicStatus__error_value,  // get(index) function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__fetch_function__TopicStatus__error_value,  // fetch(index, &value) function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__assign_function__TopicStatus__error_value,  // assign(index, value) function pointer
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__resize_function__TopicStatus__error_value  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__TopicStatus_message_members = {
  "fm_gen_msgs__msg",  // message namespace
  "TopicStatus",  // message name
  5,  // number of fields
  sizeof(fm_gen_msgs__msg__TopicStatus),
  fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__TopicStatus_message_member_array,  // message members
  fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__TopicStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__TopicStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__TopicStatus_message_type_support_handle = {
  0,
  &fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__TopicStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fm_gen_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, msg, TopicStatus)() {
  if (!fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__TopicStatus_message_type_support_handle.typesupport_identifier) {
    fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__TopicStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fm_gen_msgs__msg__TopicStatus__rosidl_typesupport_introspection_c__TopicStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
