// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fm_gen_msgs:msg/TopicStatusArray.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS_ARRAY__STRUCT_H_
#define FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS_ARRAY__STRUCT_H_

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
// Member 'topic_array'
#include "fm_gen_msgs/msg/detail/topic_status__struct.h"

/// Struct defined in msg/TopicStatusArray in the package fm_gen_msgs.
/**
  * values can be negative ?
 */
typedef struct fm_gen_msgs__msg__TopicStatusArray
{
  std_msgs__msg__Header header;
  /// Integer which indicates status of the monitored topics at the moment
  uint32_t general_status;
  /// Sum of general_status since the last 'good' topics
  uint32_t status_sum;
  /// Array of individual status messages, one for each monitored topic
  fm_gen_msgs__msg__TopicStatus__Sequence topic_array;
} fm_gen_msgs__msg__TopicStatusArray;

// Struct for a sequence of fm_gen_msgs__msg__TopicStatusArray.
typedef struct fm_gen_msgs__msg__TopicStatusArray__Sequence
{
  fm_gen_msgs__msg__TopicStatusArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fm_gen_msgs__msg__TopicStatusArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS_ARRAY__STRUCT_H_
