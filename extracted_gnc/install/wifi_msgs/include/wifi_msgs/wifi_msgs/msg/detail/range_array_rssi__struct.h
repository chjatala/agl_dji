// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wifi_msgs:msg/RangeArrayRSSI.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__RANGE_ARRAY_RSSI__STRUCT_H_
#define WIFI_MSGS__MSG__DETAIL__RANGE_ARRAY_RSSI__STRUCT_H_

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
// Member 'tag_mac'
#include "rosidl_runtime_c/string.h"
// Member 'tag_position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'ranges'
#include "wifi_msgs/msg/detail/range_rssi__struct.h"

/// Struct defined in msg/RangeArrayRSSI in the package wifi_msgs.
typedef struct wifi_msgs__msg__RangeArrayRSSI
{
  std_msgs__msg__Header header;
  /// MAC address of the used wifi card
  rosidl_runtime_c__String tag_mac;
  /// The (x,y,z) position (in meter) of the tag in the body frame
  geometry_msgs__msg__Point tag_position;
  /// A list of ranges, one for each anchor a range is measured to
  wifi_msgs__msg__RangeRSSI__Sequence ranges;
} wifi_msgs__msg__RangeArrayRSSI;

// Struct for a sequence of wifi_msgs__msg__RangeArrayRSSI.
typedef struct wifi_msgs__msg__RangeArrayRSSI__Sequence
{
  wifi_msgs__msg__RangeArrayRSSI * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wifi_msgs__msg__RangeArrayRSSI__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WIFI_MSGS__MSG__DETAIL__RANGE_ARRAY_RSSI__STRUCT_H_
