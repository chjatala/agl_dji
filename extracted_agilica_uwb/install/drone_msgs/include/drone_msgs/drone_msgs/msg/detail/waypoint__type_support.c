// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drone_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drone_msgs/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"
#include "drone_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drone_msgs/msg/detail/waypoint__functions.h"
#include "drone_msgs/msg/detail/waypoint__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_msgs__msg__Waypoint__init(message_memory);
}

void drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_fini_function(void * message_memory)
{
  drone_msgs__msg__Waypoint__fini(message_memory);
}

size_t drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__size_function__Waypoint__param(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__param(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__param(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__fetch_function__Waypoint__param(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__param(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__assign_function__Waypoint__param(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__param(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_member_array[6] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__Waypoint, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__Waypoint, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__Waypoint, max_vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_yaw_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__Waypoint, max_yaw_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__Waypoint, type),  // bytes offset in struct
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
    5,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__msg__Waypoint, param),  // bytes offset in struct
    NULL,  // default value
    drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__size_function__Waypoint__param,  // size() function pointer
    drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__get_const_function__Waypoint__param,  // get_const(index) function pointer
    drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__get_function__Waypoint__param,  // get(index) function pointer
    drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__fetch_function__Waypoint__param,  // fetch(index, &value) function pointer
    drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__assign_function__Waypoint__param,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_members = {
  "drone_msgs__msg",  // message namespace
  "Waypoint",  // message name
  6,  // number of fields
  sizeof(drone_msgs__msg__Waypoint),
  drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_member_array,  // message members
  drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle = {
  0,
  &drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, msg, Waypoint)() {
  drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle.typesupport_identifier) {
    drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_msgs__msg__Waypoint__rosidl_typesupport_introspection_c__Waypoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
