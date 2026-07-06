// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fm_gen_msgs:msg/ArucoMarker.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fm_gen_msgs/msg/detail/aruco_marker__rosidl_typesupport_introspection_c.h"
#include "fm_gen_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fm_gen_msgs/msg/detail/aruco_marker__functions.h"
#include "fm_gen_msgs/msg/detail/aruco_marker__struct.h"


// Include directives for member types
// Member `corner`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__ArucoMarker_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fm_gen_msgs__msg__ArucoMarker__init(message_memory);
}

void fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__ArucoMarker_fini_function(void * message_memory)
{
  fm_gen_msgs__msg__ArucoMarker__fini(message_memory);
}

size_t fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__size_function__ArucoMarker__corner(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__get_const_function__ArucoMarker__corner(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__get_function__ArucoMarker__corner(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__fetch_function__ArucoMarker__corner(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__get_const_function__ArucoMarker__corner(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__assign_function__ArucoMarker__corner(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__get_function__ArucoMarker__corner(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__resize_function__ArucoMarker__corner(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__ArucoMarker_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__ArucoMarker, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "corner",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__ArucoMarker, corner),  // bytes offset in struct
    NULL,  // default value
    fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__size_function__ArucoMarker__corner,  // size() function pointer
    fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__get_const_function__ArucoMarker__corner,  // get_const(index) function pointer
    fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__get_function__ArucoMarker__corner,  // get(index) function pointer
    fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__fetch_function__ArucoMarker__corner,  // fetch(index, &value) function pointer
    fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__assign_function__ArucoMarker__corner,  // assign(index, value) function pointer
    fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__resize_function__ArucoMarker__corner  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__ArucoMarker_message_members = {
  "fm_gen_msgs__msg",  // message namespace
  "ArucoMarker",  // message name
  2,  // number of fields
  sizeof(fm_gen_msgs__msg__ArucoMarker),
  fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__ArucoMarker_message_member_array,  // message members
  fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__ArucoMarker_init_function,  // function to initialize message memory (memory has to be allocated)
  fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__ArucoMarker_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__ArucoMarker_message_type_support_handle = {
  0,
  &fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__ArucoMarker_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fm_gen_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, msg, ArucoMarker)() {
  if (!fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__ArucoMarker_message_type_support_handle.typesupport_identifier) {
    fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__ArucoMarker_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fm_gen_msgs__msg__ArucoMarker__rosidl_typesupport_introspection_c__ArucoMarker_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
