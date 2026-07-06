// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:msg/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__WAYPOINTS__STRUCT_H_
#define DRONE_MSGS__MSG__DETAIL__WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_wp'
// Member 'previous_wp'
#include "drone_msgs/msg/detail/waypoint__struct.h"

/// Struct defined in msg/Waypoints in the package drone_msgs.
typedef struct drone_msgs__msg__Waypoints
{
  drone_msgs__msg__Waypoint current_wp;
  drone_msgs__msg__Waypoint previous_wp;
  bool last_wp_reached;
} drone_msgs__msg__Waypoints;

// Struct for a sequence of drone_msgs__msg__Waypoints.
typedef struct drone_msgs__msg__Waypoints__Sequence
{
  drone_msgs__msg__Waypoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__msg__Waypoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__MSG__DETAIL__WAYPOINTS__STRUCT_H_
