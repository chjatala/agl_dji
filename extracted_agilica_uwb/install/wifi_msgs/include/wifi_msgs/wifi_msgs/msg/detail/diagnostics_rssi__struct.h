// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wifi_msgs:msg/DiagnosticsRSSI.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RSSI__STRUCT_H_
#define WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RSSI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DiagnosticsRSSI in the package wifi_msgs.
typedef struct wifi_msgs__msg__DiagnosticsRSSI
{
  /// Received signal strength intensity
  float rssi;
  /// A value from equation for estimating distance from RSSI (RSSI at one meter from the ap)
  float a;
  /// n value from equation for estimating distance from RSSI (represents the signal loss over distance)
  float n;
} wifi_msgs__msg__DiagnosticsRSSI;

// Struct for a sequence of wifi_msgs__msg__DiagnosticsRSSI.
typedef struct wifi_msgs__msg__DiagnosticsRSSI__Sequence
{
  wifi_msgs__msg__DiagnosticsRSSI * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wifi_msgs__msg__DiagnosticsRSSI__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RSSI__STRUCT_H_
