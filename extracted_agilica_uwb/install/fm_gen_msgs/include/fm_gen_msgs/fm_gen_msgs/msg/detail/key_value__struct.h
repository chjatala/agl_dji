// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fm_gen_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
#define FM_GEN_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
// Member 'data_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/KeyValue in the package fm_gen_msgs.
/**
  * What to label this value when viewing.
 */
typedef struct fm_gen_msgs__msg__KeyValue
{
  rosidl_runtime_c__String key;
  /// A value to track over time.
  rosidl_runtime_c__String value;
  /// How to interpret the value string (optional)
  rosidl_runtime_c__String data_type;
} fm_gen_msgs__msg__KeyValue;

// Struct for a sequence of fm_gen_msgs__msg__KeyValue.
typedef struct fm_gen_msgs__msg__KeyValue__Sequence
{
  fm_gen_msgs__msg__KeyValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fm_gen_msgs__msg__KeyValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FM_GEN_MSGS__MSG__DETAIL__KEY_VALUE__STRUCT_H_
