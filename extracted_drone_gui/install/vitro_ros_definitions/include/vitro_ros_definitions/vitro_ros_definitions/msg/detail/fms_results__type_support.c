// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vitro_ros_definitions:msg/FMSResults.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vitro_ros_definitions/msg/detail/fms_results__rosidl_typesupport_introspection_c.h"
#include "vitro_ros_definitions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vitro_ros_definitions/msg/detail/fms_results__functions.h"
#include "vitro_ros_definitions/msg/detail/fms_results__struct.h"


// Include directives for member types
// Member `results`
#include "vitro_ros_definitions/msg/fms_result.h"
// Member `results`
#include "vitro_ros_definitions/msg/detail/fms_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__FMSResults_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vitro_ros_definitions__msg__FMSResults__init(message_memory);
}

void vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__FMSResults_fini_function(void * message_memory)
{
  vitro_ros_definitions__msg__FMSResults__fini(message_memory);
}

size_t vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__size_function__FMSResults__results(
  const void * untyped_member)
{
  const vitro_ros_definitions__msg__FMSResult__Sequence * member =
    (const vitro_ros_definitions__msg__FMSResult__Sequence *)(untyped_member);
  return member->size;
}

const void * vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__get_const_function__FMSResults__results(
  const void * untyped_member, size_t index)
{
  const vitro_ros_definitions__msg__FMSResult__Sequence * member =
    (const vitro_ros_definitions__msg__FMSResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__get_function__FMSResults__results(
  void * untyped_member, size_t index)
{
  vitro_ros_definitions__msg__FMSResult__Sequence * member =
    (vitro_ros_definitions__msg__FMSResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__fetch_function__FMSResults__results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const vitro_ros_definitions__msg__FMSResult * item =
    ((const vitro_ros_definitions__msg__FMSResult *)
    vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__get_const_function__FMSResults__results(untyped_member, index));
  vitro_ros_definitions__msg__FMSResult * value =
    (vitro_ros_definitions__msg__FMSResult *)(untyped_value);
  *value = *item;
}

void vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__assign_function__FMSResults__results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  vitro_ros_definitions__msg__FMSResult * item =
    ((vitro_ros_definitions__msg__FMSResult *)
    vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__get_function__FMSResults__results(untyped_member, index));
  const vitro_ros_definitions__msg__FMSResult * value =
    (const vitro_ros_definitions__msg__FMSResult *)(untyped_value);
  *item = *value;
}

bool vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__resize_function__FMSResults__results(
  void * untyped_member, size_t size)
{
  vitro_ros_definitions__msg__FMSResult__Sequence * member =
    (vitro_ros_definitions__msg__FMSResult__Sequence *)(untyped_member);
  vitro_ros_definitions__msg__FMSResult__Sequence__fini(member);
  return vitro_ros_definitions__msg__FMSResult__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__FMSResults_message_member_array[1] = {
  {
    "results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vitro_ros_definitions__msg__FMSResults, results),  // bytes offset in struct
    NULL,  // default value
    vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__size_function__FMSResults__results,  // size() function pointer
    vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__get_const_function__FMSResults__results,  // get_const(index) function pointer
    vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__get_function__FMSResults__results,  // get(index) function pointer
    vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__fetch_function__FMSResults__results,  // fetch(index, &value) function pointer
    vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__assign_function__FMSResults__results,  // assign(index, value) function pointer
    vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__resize_function__FMSResults__results  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__FMSResults_message_members = {
  "vitro_ros_definitions__msg",  // message namespace
  "FMSResults",  // message name
  1,  // number of fields
  sizeof(vitro_ros_definitions__msg__FMSResults),
  vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__FMSResults_message_member_array,  // message members
  vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__FMSResults_init_function,  // function to initialize message memory (memory has to be allocated)
  vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__FMSResults_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__FMSResults_message_type_support_handle = {
  0,
  &vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__FMSResults_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vitro_ros_definitions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vitro_ros_definitions, msg, FMSResults)() {
  vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__FMSResults_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vitro_ros_definitions, msg, FMSResult)();
  if (!vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__FMSResults_message_type_support_handle.typesupport_identifier) {
    vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__FMSResults_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vitro_ros_definitions__msg__FMSResults__rosidl_typesupport_introspection_c__FMSResults_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
