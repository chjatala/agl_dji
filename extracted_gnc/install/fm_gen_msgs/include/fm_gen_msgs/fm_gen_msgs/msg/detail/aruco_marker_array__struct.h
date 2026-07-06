// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fm_gen_msgs:msg/ArucoMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER_ARRAY__STRUCT_H_
#define FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER_ARRAY__STRUCT_H_

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
// Member 'camera_id'
#include "rosidl_runtime_c/string.h"
// Member 'marker'
#include "fm_gen_msgs/msg/detail/aruco_marker__struct.h"

/// Struct defined in msg/ArucoMarkerArray in the package fm_gen_msgs.
typedef struct fm_gen_msgs__msg__ArucoMarkerArray
{
  std_msgs__msg__Header header;
  uint8_t num_marker;
  rosidl_runtime_c__String camera_id;
  double time_captured;
  fm_gen_msgs__msg__ArucoMarker__Sequence marker;
} fm_gen_msgs__msg__ArucoMarkerArray;

// Struct for a sequence of fm_gen_msgs__msg__ArucoMarkerArray.
typedef struct fm_gen_msgs__msg__ArucoMarkerArray__Sequence
{
  fm_gen_msgs__msg__ArucoMarkerArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fm_gen_msgs__msg__ArucoMarkerArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER_ARRAY__STRUCT_H_
