// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wifi_msgs:msg/RangeRTT.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__RANGE_RTT__STRUCT_H_
#define WIFI_MSGS__MSG__DETAIL__RANGE_RTT__STRUCT_H_

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
// Member 'ap_mac'
#include "rosidl_runtime_c/string.h"
// Member 'ap_position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'diagnostics'
#include "wifi_msgs/msg/detail/diagnostics_rtt__struct.h"

/// Struct defined in msg/RangeRTT in the package wifi_msgs.
typedef struct wifi_msgs__msg__RangeRTT
{
  builtin_interfaces__msg__Time stamp;
  /// A unique number (1,2,3...) per anchor
  rosidl_runtime_c__String ap_mac;
  /// flag that determines if the ap position is known
  bool valid_ap_position;
  /// The (x,y,z) position (in meter) of the tag in the reference frame
  geometry_msgs__msg__Point ap_position;
  /// Flag that determines if the measured range is valid
  bool valid_range;
  /// Distance (in meter) between the tag and the anchor
  float distance;
  /// Signal specific data
  wifi_msgs__msg__DiagnosticsRTT diagnostics;
} wifi_msgs__msg__RangeRTT;

// Struct for a sequence of wifi_msgs__msg__RangeRTT.
typedef struct wifi_msgs__msg__RangeRTT__Sequence
{
  wifi_msgs__msg__RangeRTT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wifi_msgs__msg__RangeRTT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WIFI_MSGS__MSG__DETAIL__RANGE_RTT__STRUCT_H_
