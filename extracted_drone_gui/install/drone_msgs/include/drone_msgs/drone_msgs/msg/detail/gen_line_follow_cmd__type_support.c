// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drone_msgs:msg/GenLineFollowCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drone_msgs/msg/detail/gen_line_follow_cmd__rosidl_typesupport_introspection_c.h"
#include "drone_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drone_msgs/msg/detail/gen_line_follow_cmd__functions.h"
#include "drone_msgs/msg/detail/gen_line_follow_cmd__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `x_type`
// Member `y_type`
// Member `z_type`
// Member `yaw_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `param`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__GenLineFollowCmd_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_msgs__msg__GenLineFollowCmd__init(message_memory);
}

void drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__GenLineFollowCmd_fini_function(void * message_memory)
{
  drone_msgs__msg__GenLineFollowCmd__fini(message_memory);
}

size_t drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__size_function__GenLineFollowCmd__param(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__get_const_function__GenLineFollowCmd__param(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__get_function__GenLineFollowCmd__param(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__fetch_function__GenLineFollowCmd__param(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__get_const_function__GenLineFollowCmd__param(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__assign_function__GenLineFollowCmd__param(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__get_function__GenLineFollowCmd__param(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__resize_function__GenLineFollowCmd__param(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__GenLineFollowCmd_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__GenLineFollowCmd, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_tgt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__GenLineFollowCmd, x_tgt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__GenLineFollowCmd, x_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_tgt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__GenLineFollowCmd, y_tgt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__GenLineFollowCmd, y_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_tgt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__GenLineFollowCmd, z_tgt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__GenLineFollowCmd, z_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_tgt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__GenLineFollowCmd, yaw_tgt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__GenLineFollowCmd, yaw_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "param",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__GenLineFollowCmd, param),  // bytes offset in struct
    NULL,  // default value
    drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__size_function__GenLineFollowCmd__param,  // size() function pointer
    drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__get_const_function__GenLineFollowCmd__param,  // get_const(index) function pointer
    drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__get_function__GenLineFollowCmd__param,  // get(index) function pointer
    drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__fetch_function__GenLineFollowCmd__param,  // fetch(index, &value) function pointer
    drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__assign_function__GenLineFollowCmd__param,  // assign(index, value) function pointer
    drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__resize_function__GenLineFollowCmd__param  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__GenLineFollowCmd_message_members = {
  "drone_msgs__msg",  // message namespace
  "GenLineFollowCmd",  // message name
  10,  // number of fields
  sizeof(drone_msgs__msg__GenLineFollowCmd),
  drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__GenLineFollowCmd_message_member_array,  // message members
  drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__GenLineFollowCmd_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__GenLineFollowCmd_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__GenLineFollowCmd_message_type_support_handle = {
  0,
  &drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__GenLineFollowCmd_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, msg, GenLineFollowCmd)() {
  drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__GenLineFollowCmd_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__GenLineFollowCmd_message_type_support_handle.typesupport_identifier) {
    drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__GenLineFollowCmd_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_msgs__msg__GenLineFollowCmd__rosidl_typesupport_introspection_c__GenLineFollowCmd_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
