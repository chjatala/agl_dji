// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vitro_ros_definitions:msg/FMSResult.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULT__STRUCT_H_
#define VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/FMSResult in the package vitro_ros_definitions.
typedef struct vitro_ros_definitions__msg__FMSResult
{
  rosidl_runtime_c__String id;
  double id_confidence;
  geometry_msgs__msg__Pose pose;
  sensor_msgs__msg__Image img;
} vitro_ros_definitions__msg__FMSResult;

// Struct for a sequence of vitro_ros_definitions__msg__FMSResult.
typedef struct vitro_ros_definitions__msg__FMSResult__Sequence
{
  vitro_ros_definitions__msg__FMSResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vitro_ros_definitions__msg__FMSResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULT__STRUCT_H_
