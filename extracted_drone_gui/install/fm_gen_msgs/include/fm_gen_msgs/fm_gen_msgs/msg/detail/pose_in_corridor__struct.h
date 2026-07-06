// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fm_gen_msgs:msg/PoseInCorridor.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__POSE_IN_CORRIDOR__STRUCT_H_
#define FM_GEN_MSGS__MSG__DETAIL__POSE_IN_CORRIDOR__STRUCT_H_

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

/// Struct defined in msg/PoseInCorridor in the package fm_gen_msgs.
typedef struct fm_gen_msgs__msg__PoseInCorridor
{
  std_msgs__msg__Header header;
  float y;
  float yaw;
} fm_gen_msgs__msg__PoseInCorridor;

// Struct for a sequence of fm_gen_msgs__msg__PoseInCorridor.
typedef struct fm_gen_msgs__msg__PoseInCorridor__Sequence
{
  fm_gen_msgs__msg__PoseInCorridor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fm_gen_msgs__msg__PoseInCorridor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FM_GEN_MSGS__MSG__DETAIL__POSE_IN_CORRIDOR__STRUCT_H_
