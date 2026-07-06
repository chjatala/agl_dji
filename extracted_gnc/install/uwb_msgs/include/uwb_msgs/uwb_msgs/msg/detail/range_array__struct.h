// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uwb_msgs:msg/RangeArray.idl
// generated code does not contain a copyright notice

#ifndef UWB_MSGS__MSG__DETAIL__RANGE_ARRAY__STRUCT_H_
#define UWB_MSGS__MSG__DETAIL__RANGE_ARRAY__STRUCT_H_

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
// Member 'tagid'
#include "rosidl_runtime_c/string.h"
// Member 'tag_position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'ranges'
#include "uwb_msgs/msg/detail/range__struct.h"

/// Struct defined in msg/RangeArray in the package uwb_msgs.
/**
  * RangeArray Message
  * This message type represents an array of range measurements between a specific tag
  * and multiple anchors, including the tag's position and unique identifier.
 */
typedef struct uwb_msgs__msg__RangeArray
{
  /// Header Information
  /// Standard metadata for higher-level stamped data types
  std_msgs__msg__Header header;
  /// Tag Details
  /// A unique identifier for the tag (e.g., "1", "2", "3", etc.)
  rosidl_runtime_c__String tagid;
  /// The (x,y,z) position of the tag in the body frame (in meters)
  geometry_msgs__msg__Point tag_position;
  /// Range Measurements
  /// An array of Range messages, one for each anchor a range is measured to
  uwb_msgs__msg__Range__Sequence ranges;
} uwb_msgs__msg__RangeArray;

// Struct for a sequence of uwb_msgs__msg__RangeArray.
typedef struct uwb_msgs__msg__RangeArray__Sequence
{
  uwb_msgs__msg__RangeArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uwb_msgs__msg__RangeArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UWB_MSGS__MSG__DETAIL__RANGE_ARRAY__STRUCT_H_
