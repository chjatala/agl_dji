// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vitro_ros_definitions:msg/InspectionObj.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__MSG__DETAIL__INSPECTION_OBJ__STRUCT_H_
#define VITRO_ROS_DEFINITIONS__MSG__DETAIL__INSPECTION_OBJ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INSPECTION_REQUESTED'.
/**
  * constants
 */
enum
{
  vitro_ros_definitions__msg__InspectionObj__INSPECTION_REQUESTED = 1
};

/// Constant 'NO_INSPECTION_REQUESTED'.
enum
{
  vitro_ros_definitions__msg__InspectionObj__NO_INSPECTION_REQUESTED = 0
};

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/InspectionObj in the package vitro_ros_definitions.
typedef struct vitro_ros_definitions__msg__InspectionObj
{
  rosidl_runtime_c__String id;
  int8_t status;
  geometry_msgs__msg__Pose pose;
} vitro_ros_definitions__msg__InspectionObj;

// Struct for a sequence of vitro_ros_definitions__msg__InspectionObj.
typedef struct vitro_ros_definitions__msg__InspectionObj__Sequence
{
  vitro_ros_definitions__msg__InspectionObj * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vitro_ros_definitions__msg__InspectionObj__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VITRO_ROS_DEFINITIONS__MSG__DETAIL__INSPECTION_OBJ__STRUCT_H_
