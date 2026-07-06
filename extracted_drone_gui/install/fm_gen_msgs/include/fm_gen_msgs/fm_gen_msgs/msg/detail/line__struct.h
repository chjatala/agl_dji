// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fm_gen_msgs:msg/Line.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__LINE__STRUCT_H_
#define FM_GEN_MSGS__MSG__DETAIL__LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'line_type'
#include "rosidl_runtime_c/string.h"
// Member 'line_1'
// Member 'line_2'
// Member 'line_c'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Line in the package fm_gen_msgs.
/**
  * Give a meaningful name to the line, e.g., GroundPlant, VerticalRack
 */
typedef struct fm_gen_msgs__msg__Line
{
  rosidl_runtime_c__String line_type;
  /// certainty of the detection from 1 to 100, set to 255 if no information
  /// available
  uint8_t certainty;
  /// x1/y1/x2/y2 coordinates of the two points define one side of the detection
  rosidl_runtime_c__float__Sequence line_1;
  /// for another side
  rosidl_runtime_c__float__Sequence line_2;
  /// the center line
  rosidl_runtime_c__float__Sequence line_c;
} fm_gen_msgs__msg__Line;

// Struct for a sequence of fm_gen_msgs__msg__Line.
typedef struct fm_gen_msgs__msg__Line__Sequence
{
  fm_gen_msgs__msg__Line * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fm_gen_msgs__msg__Line__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FM_GEN_MSGS__MSG__DETAIL__LINE__STRUCT_H_
