// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uwb_msgs:msg/Diagnostics.idl
// generated code does not contain a copyright notice

#ifndef UWB_MSGS__MSG__DETAIL__DIAGNOSTICS__STRUCT_H_
#define UWB_MSGS__MSG__DETAIL__DIAGNOSTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cir_magnitude'
// Member 'cir_phase'
// Member 'cir_imag'
// Member 'cir_real'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Diagnostics in the package uwb_msgs.
/**
  * Diagnostics Message
  * This message type encapsulates various diagnostic information related to
  * # channel impulse response, signal strength, and frequency points.
 */
typedef struct uwb_msgs__msg__Diagnostics
{
  /// # Channel Impulse Response (CIR) Attributes
  /// CIR power (e.g., in dBm)
  uint32_t cir_power;
  /// CIR magnitude signal
  rosidl_runtime_c__float__Sequence cir_magnitude;
  /// CIR phase signal
  rosidl_runtime_c__float__Sequence cir_phase;
  /// CIR imaginary signal
  rosidl_runtime_c__int16__Sequence cir_imag;
  /// CIR real signal
  rosidl_runtime_c__int16__Sequence cir_real;
  /// # Wireless Channel Signal Attributes
  /// Size of the preamble message
  uint32_t preamble_count;
  /// First peak power level (e.g., in dB)
  float fppl;
  /// Received Signal Strength Intensity (RSSI, e.g., in dBm)
  float rssi;
  /// Index of the first peak in the CIR (e.g., in samples)
  float index_fp;
  /// delay of message in ms
  uint32_t msgdelay_ms;
} uwb_msgs__msg__Diagnostics;

// Struct for a sequence of uwb_msgs__msg__Diagnostics.
typedef struct uwb_msgs__msg__Diagnostics__Sequence
{
  uwb_msgs__msg__Diagnostics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uwb_msgs__msg__Diagnostics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UWB_MSGS__MSG__DETAIL__DIAGNOSTICS__STRUCT_H_
