// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fm_gen_msgs:msg/SysStateWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_WITH_COVARIANCE_STAMPED__STRUCT_H_
#define FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_WITH_COVARIANCE_STAMPED__STRUCT_H_

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
// Member 'state_name'
#include "rosidl_runtime_c/string.h"
// Member 'state'
// Member 'covariance'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SysStateWithCovarianceStamped in the package fm_gen_msgs.
typedef struct fm_gen_msgs__msg__SysStateWithCovarianceStamped
{
  std_msgs__msg__Header header;
  uint16_t dim;
  rosidl_runtime_c__String__Sequence state_name;
  rosidl_runtime_c__double__Sequence state;
  rosidl_runtime_c__double__Sequence covariance;
} fm_gen_msgs__msg__SysStateWithCovarianceStamped;

// Struct for a sequence of fm_gen_msgs__msg__SysStateWithCovarianceStamped.
typedef struct fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence
{
  fm_gen_msgs__msg__SysStateWithCovarianceStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_WITH_COVARIANCE_STAMPED__STRUCT_H_
