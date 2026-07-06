// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:msg/DroneCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_CMD__STRUCT_H_
#define DRONE_MSGS__MSG__DETAIL__DRONE_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CMD_TAKEOFF'.
static const char * const drone_msgs__msg__DroneCmd__CMD_TAKEOFF = "takeoff";

/// Constant 'CMD_LAND'.
static const char * const drone_msgs__msg__DroneCmd__CMD_LAND = "land";

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'cmd'
// Member 'note'
// Member 'cmder'
// Member 'tgt'
#include "rosidl_runtime_c/string.h"
// Member 'param'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DroneCmd in the package drone_msgs.
typedef struct drone_msgs__msg__DroneCmd
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String cmd;
  rosidl_runtime_c__float__Sequence param;
  rosidl_runtime_c__String note;
  rosidl_runtime_c__String cmder;
  rosidl_runtime_c__String tgt;
} drone_msgs__msg__DroneCmd;

// Struct for a sequence of drone_msgs__msg__DroneCmd.
typedef struct drone_msgs__msg__DroneCmd__Sequence
{
  drone_msgs__msg__DroneCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__msg__DroneCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_CMD__STRUCT_H_
