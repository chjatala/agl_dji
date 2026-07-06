// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uwb_msgs:msg/Range.idl
// generated code does not contain a copyright notice

#ifndef UWB_MSGS__MSG__DETAIL__RANGE__STRUCT_H_
#define UWB_MSGS__MSG__DETAIL__RANGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'anchorid'
// Member 'listenerid'
#include "rosidl_runtime_c/string.h"
// Member 'anchor_position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'diagnostics'
#include "uwb_msgs/msg/detail/diagnostics__struct.h"

/// Struct defined in msg/Range in the package uwb_msgs.
/**
  * Anchor Range Message
  * This message type represents the information related to the distance measurement
  * between a tag and an anchor, including position, validity, and diagnostic details.
 */
typedef struct uwb_msgs__msg__Range
{
  /// Timestamp of the measurement
  builtin_interfaces__msg__Time stamp;
  /// Anchor Details
  /// A identifier for the anchor (e.g., "0x042D", "0x0417", "0x00CC", etc.)
  rosidl_runtime_c__String anchorid;
  /// ID of the listener
  rosidl_runtime_c__String listenerid;
  /// The (x,y,z) position of the anchor in the reference frame (in meters)
  geometry_msgs__msg__Point anchor_position;
  /// Range Information
  /// Flag indicating whether the measured range is valid (true if valid)
  bool valid_range;
  /// Distance between the tag and the anchor (in meters). by default it is single-side twr
  float distance;
  /// Signal Diagnostics
  /// Signal-specific diagnostic data, as defined in the Diagnostics message
  uwb_msgs__msg__Diagnostics diagnostics;
} uwb_msgs__msg__Range;

// Struct for a sequence of uwb_msgs__msg__Range.
typedef struct uwb_msgs__msg__Range__Sequence
{
  uwb_msgs__msg__Range * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uwb_msgs__msg__Range__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UWB_MSGS__MSG__DETAIL__RANGE__STRUCT_H_
