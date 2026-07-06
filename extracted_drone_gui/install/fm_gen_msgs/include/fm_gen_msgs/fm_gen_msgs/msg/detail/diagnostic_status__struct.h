// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fm_gen_msgs:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__STRUCT_H_
#define FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OK'.
/**
  * Possible levels of operations.
 */
enum
{
  fm_gen_msgs__msg__DiagnosticStatus__OK = 0
};

/// Constant 'WARN'.
enum
{
  fm_gen_msgs__msg__DiagnosticStatus__WARN = 3
};

/// Constant 'ERROR'.
enum
{
  fm_gen_msgs__msg__DiagnosticStatus__ERROR = 5
};

/// Constant 'STALE'.
enum
{
  fm_gen_msgs__msg__DiagnosticStatus__STALE = 7
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'diagnoiser_name'
// Member 'message'
// Member 'component_id'
#include "rosidl_runtime_c/string.h"
// Member 'values'
#include "fm_gen_msgs/msg/detail/key_value__struct.h"

/// Struct defined in msg/DiagnosticStatus in the package fm_gen_msgs.
/**
  * This message holds the status of diagnostic for SW/HW component
 */
typedef struct fm_gen_msgs__msg__DiagnosticStatus
{
  /// time of the status
  std_msgs__msg__Header header;
  /// Level of operation enumerated above.
  int8_t level;
  /// A description of who is reporting this status.
  rosidl_runtime_c__String diagnoiser_name;
  /// A description of the status.
  rosidl_runtime_c__String message;
  /// A component unique string.
  rosidl_runtime_c__String component_id;
  /// number of status (to make it easier to process the msg)
  uint8_t num_status;
  /// An array of values associated with the status.
  fm_gen_msgs__msg__KeyValue__Sequence values;
} fm_gen_msgs__msg__DiagnosticStatus;

// Struct for a sequence of fm_gen_msgs__msg__DiagnosticStatus.
typedef struct fm_gen_msgs__msg__DiagnosticStatus__Sequence
{
  fm_gen_msgs__msg__DiagnosticStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fm_gen_msgs__msg__DiagnosticStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__STRUCT_H_
