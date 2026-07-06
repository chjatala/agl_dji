// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_msgs:msg/VisionResult.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__VISION_RESULT__STRUCT_H_
#define VISION_MSGS__MSG__DETAIL__VISION_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'additional_info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VisionResult in the package vision_msgs.
/**
  * VisionResult.msg
  * A message to hold a single vision recognition result
 */
typedef struct vision_msgs__msg__VisionResult
{
  /// Array of positions to decode point, (oriented) bounding box or segmentation
  geometry_msgs__msg__Point__Sequence points;
  /// Optional: Confidence value
  float confidence;
  /// Optional: Additional Information i.e. Text
  rosidl_runtime_c__String additional_info;
} vision_msgs__msg__VisionResult;

// Struct for a sequence of vision_msgs__msg__VisionResult.
typedef struct vision_msgs__msg__VisionResult__Sequence
{
  vision_msgs__msg__VisionResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_msgs__msg__VisionResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_MSGS__MSG__DETAIL__VISION_RESULT__STRUCT_H_
