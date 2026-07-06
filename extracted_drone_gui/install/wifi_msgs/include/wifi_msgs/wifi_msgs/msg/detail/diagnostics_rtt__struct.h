// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from wifi_msgs:msg/DiagnosticsRTT.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__STRUCT_H_
#define WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DiagnosticsRTT in the package wifi_msgs.
typedef struct wifi_msgs__msg__DiagnosticsRTT
{
  /// Received signal strength intensity
  float rssi;
  /// spread on the RSSI measurements
  float rssi_spread;
  /// number of bursts in one measurement
  float num_bursts;
  /// duration of one burst
  float burst_duration;
  /// number of Fine Time Measurements per burst
  float ftms_per_burst;
  /// average round trip time for all measurements
  float rtt_avg;
  /// spread of the round trip time measurements
  float rtt_spread;
  /// variance of the round trip time for all measurements
  float rtt_variance;
} wifi_msgs__msg__DiagnosticsRTT;

// Struct for a sequence of wifi_msgs__msg__DiagnosticsRTT.
typedef struct wifi_msgs__msg__DiagnosticsRTT__Sequence
{
  wifi_msgs__msg__DiagnosticsRTT * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} wifi_msgs__msg__DiagnosticsRTT__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__STRUCT_H_
