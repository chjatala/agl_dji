// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fm_gen_msgs:msg/LineArray.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__LINE_ARRAY__STRUCT_H_
#define FM_GEN_MSGS__MSG__DETAIL__LINE_ARRAY__STRUCT_H_

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
// Member 'lines'
#include "fm_gen_msgs/msg/detail/line__struct.h"

/// Struct defined in msg/LineArray in the package fm_gen_msgs.
typedef struct fm_gen_msgs__msg__LineArray
{
  std_msgs__msg__Header header;
  /// number of detections in the img
  uint8_t num_detection;
  /// camera id (reserved for future application)
  rosidl_runtime_c__String camera_id;
  /// time stamp of the image
  double time_captured;
  /// an array of all lines detected
  fm_gen_msgs__msg__Line__Sequence lines;
} fm_gen_msgs__msg__LineArray;

// Struct for a sequence of fm_gen_msgs__msg__LineArray.
typedef struct fm_gen_msgs__msg__LineArray__Sequence
{
  fm_gen_msgs__msg__LineArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fm_gen_msgs__msg__LineArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FM_GEN_MSGS__MSG__DETAIL__LINE_ARRAY__STRUCT_H_
