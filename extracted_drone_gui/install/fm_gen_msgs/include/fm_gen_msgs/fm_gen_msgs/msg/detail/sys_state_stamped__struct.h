// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fm_gen_msgs:msg/SysStateStamped.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_STAMPED__STRUCT_H_
#define FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_STAMPED__STRUCT_H_

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
// Member 'state'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SysStateStamped in the package fm_gen_msgs.
typedef struct fm_gen_msgs__msg__SysStateStamped
{
  std_msgs__msg__Header header;
  uint16_t dim;
  rosidl_runtime_c__double__Sequence state;
} fm_gen_msgs__msg__SysStateStamped;

// Struct for a sequence of fm_gen_msgs__msg__SysStateStamped.
typedef struct fm_gen_msgs__msg__SysStateStamped__Sequence
{
  fm_gen_msgs__msg__SysStateStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fm_gen_msgs__msg__SysStateStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_STAMPED__STRUCT_H_
