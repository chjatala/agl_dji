// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vitro_ros_definitions:srv/GetArucoDir.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_ARUCO_DIR__STRUCT_H_
#define VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_ARUCO_DIR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetArucoDir in the package vitro_ros_definitions.
typedef struct vitro_ros_definitions__srv__GetArucoDir_Request
{
  int64_t id;
} vitro_ros_definitions__srv__GetArucoDir_Request;

// Struct for a sequence of vitro_ros_definitions__srv__GetArucoDir_Request.
typedef struct vitro_ros_definitions__srv__GetArucoDir_Request__Sequence
{
  vitro_ros_definitions__srv__GetArucoDir_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vitro_ros_definitions__srv__GetArucoDir_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetArucoDir in the package vitro_ros_definitions.
typedef struct vitro_ros_definitions__srv__GetArucoDir_Response
{
  rosidl_runtime_c__String direction;
} vitro_ros_definitions__srv__GetArucoDir_Response;

// Struct for a sequence of vitro_ros_definitions__srv__GetArucoDir_Response.
typedef struct vitro_ros_definitions__srv__GetArucoDir_Response__Sequence
{
  vitro_ros_definitions__srv__GetArucoDir_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vitro_ros_definitions__srv__GetArucoDir_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_ARUCO_DIR__STRUCT_H_
