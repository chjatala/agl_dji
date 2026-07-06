// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:msg/VelYawCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__VEL_YAW_CMD__STRUCT_H_
#define DRONE_MSGS__MSG__DETAIL__VEL_YAW_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/VelYawCmd in the package drone_msgs.
typedef struct drone_msgs__msg__VelYawCmd
{
  geometry_msgs__msg__Vector3 velocity;
  double yaw;
} drone_msgs__msg__VelYawCmd;

// Struct for a sequence of drone_msgs__msg__VelYawCmd.
typedef struct drone_msgs__msg__VelYawCmd__Sequence
{
  drone_msgs__msg__VelYawCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__msg__VelYawCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__MSG__DETAIL__VEL_YAW_CMD__STRUCT_H_
