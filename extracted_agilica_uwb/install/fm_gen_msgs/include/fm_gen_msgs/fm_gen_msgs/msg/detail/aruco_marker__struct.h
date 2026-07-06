// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fm_gen_msgs:msg/ArucoMarker.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER__STRUCT_H_
#define FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'corner'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ArucoMarker in the package fm_gen_msgs.
typedef struct fm_gen_msgs__msg__ArucoMarker
{
  uint16_t id;
  rosidl_runtime_c__float__Sequence corner;
} fm_gen_msgs__msg__ArucoMarker;

// Struct for a sequence of fm_gen_msgs__msg__ArucoMarker.
typedef struct fm_gen_msgs__msg__ArucoMarker__Sequence
{
  fm_gen_msgs__msg__ArucoMarker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fm_gen_msgs__msg__ArucoMarker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER__STRUCT_H_
