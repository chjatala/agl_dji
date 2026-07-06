// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fm_gen_msgs:msg/TopicStatus.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS__STRUCT_H_
#define FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic_name'
// Member 'error_message'
#include "rosidl_runtime_c/string.h"
// Member 'error_code'
// Member 'error_value'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/TopicStatus in the package fm_gen_msgs.
/**
  * values can be negative ?
 */
typedef struct fm_gen_msgs__msg__TopicStatus
{
  rosidl_runtime_c__String topic_name;
  bool topic_is_ok;
  rosidl_runtime_c__String__Sequence error_message;
  rosidl_runtime_c__uint32__Sequence error_code;
  rosidl_runtime_c__double__Sequence error_value;
} fm_gen_msgs__msg__TopicStatus;

// Struct for a sequence of fm_gen_msgs__msg__TopicStatus.
typedef struct fm_gen_msgs__msg__TopicStatus__Sequence
{
  fm_gen_msgs__msg__TopicStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fm_gen_msgs__msg__TopicStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS__STRUCT_H_
