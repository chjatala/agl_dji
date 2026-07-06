// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vision_msgs:msg/VisionResultArray.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__VISION_RESULT_ARRAY__STRUCT_H_
#define VISION_MSGS__MSG__DETAIL__VISION_RESULT_ARRAY__STRUCT_H_

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
// Member 'results'
#include "vision_msgs/msg/detail/vision_result__struct.h"
// Member 'visualization_image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/VisionResultArray in the package vision_msgs.
/**
  * VisionResultArray.msg
  * A message to hold an array of vision detection results and link to the original image via header
 */
typedef struct vision_msgs__msg__VisionResultArray
{
  /// Header for metadata (timestamps, frame_id, etc.)
  std_msgs__msg__Header header;
  /// An array of vision detection results
  vision_msgs__msg__VisionResult__Sequence results;
  /// Debug purposes: Visualization image (default not active), can be linked to image by header
  sensor_msgs__msg__Image visualization_image;
} vision_msgs__msg__VisionResultArray;

// Struct for a sequence of vision_msgs__msg__VisionResultArray.
typedef struct vision_msgs__msg__VisionResultArray__Sequence
{
  vision_msgs__msg__VisionResultArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vision_msgs__msg__VisionResultArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VISION_MSGS__MSG__DETAIL__VISION_RESULT_ARRAY__STRUCT_H_
