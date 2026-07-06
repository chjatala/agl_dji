// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vitro_ros_definitions:srv/SetGimballAngle.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_GIMBALL_ANGLE__STRUCT_H_
#define VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_GIMBALL_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetGimballAngle in the package vitro_ros_definitions.
typedef struct vitro_ros_definitions__srv__SetGimballAngle_Request
{
  float pitch;
  float speed;
} vitro_ros_definitions__srv__SetGimballAngle_Request;

// Struct for a sequence of vitro_ros_definitions__srv__SetGimballAngle_Request.
typedef struct vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence
{
  vitro_ros_definitions__srv__SetGimballAngle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetGimballAngle in the package vitro_ros_definitions.
typedef struct vitro_ros_definitions__srv__SetGimballAngle_Response
{
  rosidl_runtime_c__String status;
} vitro_ros_definitions__srv__SetGimballAngle_Response;

// Struct for a sequence of vitro_ros_definitions__srv__SetGimballAngle_Response.
typedef struct vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence
{
  vitro_ros_definitions__srv__SetGimballAngle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_GIMBALL_ANGLE__STRUCT_H_
