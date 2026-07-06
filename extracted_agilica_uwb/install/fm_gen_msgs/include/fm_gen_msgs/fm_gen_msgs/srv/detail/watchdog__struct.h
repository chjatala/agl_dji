// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fm_gen_msgs:srv/Watchdog.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__SRV__DETAIL__WATCHDOG__STRUCT_H_
#define FM_GEN_MSGS__SRV__DETAIL__WATCHDOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Watchdog in the package fm_gen_msgs.
typedef struct fm_gen_msgs__srv__Watchdog_Request
{
  uint8_t structure_needs_at_least_one_member;
} fm_gen_msgs__srv__Watchdog_Request;

// Struct for a sequence of fm_gen_msgs__srv__Watchdog_Request.
typedef struct fm_gen_msgs__srv__Watchdog_Request__Sequence
{
  fm_gen_msgs__srv__Watchdog_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fm_gen_msgs__srv__Watchdog_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'diagnostic_status'
#include "fm_gen_msgs/msg/detail/diagnostic_array__struct.h"

/// Struct defined in srv/Watchdog in the package fm_gen_msgs.
typedef struct fm_gen_msgs__srv__Watchdog_Response
{
  fm_gen_msgs__msg__DiagnosticArray diagnostic_status;
} fm_gen_msgs__srv__Watchdog_Response;

// Struct for a sequence of fm_gen_msgs__srv__Watchdog_Response.
typedef struct fm_gen_msgs__srv__Watchdog_Response__Sequence
{
  fm_gen_msgs__srv__Watchdog_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fm_gen_msgs__srv__Watchdog_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FM_GEN_MSGS__SRV__DETAIL__WATCHDOG__STRUCT_H_
