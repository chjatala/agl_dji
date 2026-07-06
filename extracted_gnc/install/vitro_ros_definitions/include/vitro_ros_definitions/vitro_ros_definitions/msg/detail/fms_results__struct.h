// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vitro_ros_definitions:msg/FMSResults.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULTS__STRUCT_H_
#define VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'results'
#include "vitro_ros_definitions/msg/detail/fms_result__struct.h"

/// Struct defined in msg/FMSResults in the package vitro_ros_definitions.
typedef struct vitro_ros_definitions__msg__FMSResults
{
  vitro_ros_definitions__msg__FMSResult__Sequence results;
} vitro_ros_definitions__msg__FMSResults;

// Struct for a sequence of vitro_ros_definitions__msg__FMSResults.
typedef struct vitro_ros_definitions__msg__FMSResults__Sequence
{
  vitro_ros_definitions__msg__FMSResults * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vitro_ros_definitions__msg__FMSResults__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULTS__STRUCT_H_
