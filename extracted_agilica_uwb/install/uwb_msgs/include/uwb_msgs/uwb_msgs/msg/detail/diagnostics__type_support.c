// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uwb_msgs:msg/Diagnostics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uwb_msgs/msg/detail/diagnostics__rosidl_typesupport_introspection_c.h"
#include "uwb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uwb_msgs/msg/detail/diagnostics__functions.h"
#include "uwb_msgs/msg/detail/diagnostics__struct.h"


// Include directives for member types
// Member `cir_magnitude`
// Member `cir_phase`
// Member `cir_imag`
// Member `cir_real`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__Diagnostics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uwb_msgs__msg__Diagnostics__init(message_memory);
}

void uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__Diagnostics_fini_function(void * message_memory)
{
  uwb_msgs__msg__Diagnostics__fini(message_memory);
}

size_t uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__size_function__Diagnostics__cir_magnitude(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_const_function__Diagnostics__cir_magnitude(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_function__Diagnostics__cir_magnitude(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__fetch_function__Diagnostics__cir_magnitude(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_const_function__Diagnostics__cir_magnitude(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__assign_function__Diagnostics__cir_magnitude(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_function__Diagnostics__cir_magnitude(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__resize_function__Diagnostics__cir_magnitude(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__size_function__Diagnostics__cir_phase(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_const_function__Diagnostics__cir_phase(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_function__Diagnostics__cir_phase(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__fetch_function__Diagnostics__cir_phase(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_const_function__Diagnostics__cir_phase(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__assign_function__Diagnostics__cir_phase(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_function__Diagnostics__cir_phase(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__resize_function__Diagnostics__cir_phase(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__size_function__Diagnostics__cir_imag(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_const_function__Diagnostics__cir_imag(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_function__Diagnostics__cir_imag(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__fetch_function__Diagnostics__cir_imag(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_const_function__Diagnostics__cir_imag(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__assign_function__Diagnostics__cir_imag(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_function__Diagnostics__cir_imag(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__resize_function__Diagnostics__cir_imag(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

size_t uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__size_function__Diagnostics__cir_real(
  const void * untyped_member)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return member->size;
}

const void * uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_const_function__Diagnostics__cir_real(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int16__Sequence * member =
    (const rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_function__Diagnostics__cir_real(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  return &member->data[index];
}

void uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__fetch_function__Diagnostics__cir_real(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_const_function__Diagnostics__cir_real(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__assign_function__Diagnostics__cir_real(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_function__Diagnostics__cir_real(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

bool uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__resize_function__Diagnostics__cir_real(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int16__Sequence * member =
    (rosidl_runtime_c__int16__Sequence *)(untyped_member);
  rosidl_runtime_c__int16__Sequence__fini(member);
  return rosidl_runtime_c__int16__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__Diagnostics_message_member_array[10] = {
  {
    "cir_power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__Diagnostics, cir_power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cir_magnitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__Diagnostics, cir_magnitude),  // bytes offset in struct
    NULL,  // default value
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__size_function__Diagnostics__cir_magnitude,  // size() function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_const_function__Diagnostics__cir_magnitude,  // get_const(index) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_function__Diagnostics__cir_magnitude,  // get(index) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__fetch_function__Diagnostics__cir_magnitude,  // fetch(index, &value) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__assign_function__Diagnostics__cir_magnitude,  // assign(index, value) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__resize_function__Diagnostics__cir_magnitude  // resize(index) function pointer
  },
  {
    "cir_phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__Diagnostics, cir_phase),  // bytes offset in struct
    NULL,  // default value
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__size_function__Diagnostics__cir_phase,  // size() function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_const_function__Diagnostics__cir_phase,  // get_const(index) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_function__Diagnostics__cir_phase,  // get(index) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__fetch_function__Diagnostics__cir_phase,  // fetch(index, &value) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__assign_function__Diagnostics__cir_phase,  // assign(index, value) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__resize_function__Diagnostics__cir_phase  // resize(index) function pointer
  },
  {
    "cir_imag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__Diagnostics, cir_imag),  // bytes offset in struct
    NULL,  // default value
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__size_function__Diagnostics__cir_imag,  // size() function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_const_function__Diagnostics__cir_imag,  // get_const(index) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_function__Diagnostics__cir_imag,  // get(index) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__fetch_function__Diagnostics__cir_imag,  // fetch(index, &value) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__assign_function__Diagnostics__cir_imag,  // assign(index, value) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__resize_function__Diagnostics__cir_imag  // resize(index) function pointer
  },
  {
    "cir_real",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__Diagnostics, cir_real),  // bytes offset in struct
    NULL,  // default value
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__size_function__Diagnostics__cir_real,  // size() function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_const_function__Diagnostics__cir_real,  // get_const(index) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__get_function__Diagnostics__cir_real,  // get(index) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__fetch_function__Diagnostics__cir_real,  // fetch(index, &value) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__assign_function__Diagnostics__cir_real,  // assign(index, value) function pointer
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__resize_function__Diagnostics__cir_real  // resize(index) function pointer
  },
  {
    "preamble_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__Diagnostics, preamble_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fppl",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__Diagnostics, fppl),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rssi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__Diagnostics, rssi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index_fp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__Diagnostics, index_fp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "msgdelay_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__Diagnostics, msgdelay_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__Diagnostics_message_members = {
  "uwb_msgs__msg",  // message namespace
  "Diagnostics",  // message name
  10,  // number of fields
  sizeof(uwb_msgs__msg__Diagnostics),
  uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__Diagnostics_message_member_array,  // message members
  uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__Diagnostics_init_function,  // function to initialize message memory (memory has to be allocated)
  uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__Diagnostics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__Diagnostics_message_type_support_handle = {
  0,
  &uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__Diagnostics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uwb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uwb_msgs, msg, Diagnostics)() {
  if (!uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__Diagnostics_message_type_support_handle.typesupport_identifier) {
    uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__Diagnostics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uwb_msgs__msg__Diagnostics__rosidl_typesupport_introspection_c__Diagnostics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
