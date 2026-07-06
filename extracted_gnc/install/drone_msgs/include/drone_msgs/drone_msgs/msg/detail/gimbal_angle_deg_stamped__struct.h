// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:msg/GimbalAngleDegStamped.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__GIMBAL_ANGLE_DEG_STAMPED__STRUCT_H_
#define DRONE_MSGS__MSG__DETAIL__GIMBAL_ANGLE_DEG_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/GimbalAngleDegStamped in the package drone_msgs.
typedef struct drone_msgs__msg__GimbalAngleDegStamped
{
  std_msgs__msg__Header header;
  float yaw;
  float pitch;
  float roll;
} drone_msgs__msg__GimbalAngleDegStamped;

// Struct for a sequence of drone_msgs__msg__GimbalAngleDegStamped.
typedef struct drone_msgs__msg__GimbalAngleDegStamped__Sequence
{
  drone_msgs__msg__GimbalAngleDegStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__msg__GimbalAngleDegStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__MSG__DETAIL__GIMBAL_ANGLE_DEG_STAMPED__STRUCT_H_
