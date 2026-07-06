// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vitro_ros_definitions:srv/GetInspectionObject.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_INSPECTION_OBJECT__STRUCT_H_
#define VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_INSPECTION_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetInspectionObject in the package vitro_ros_definitions.
typedef struct vitro_ros_definitions__srv__GetInspectionObject_Request
{
  uint8_t structure_needs_at_least_one_member;
} vitro_ros_definitions__srv__GetInspectionObject_Request;

// Struct for a sequence of vitro_ros_definitions__srv__GetInspectionObject_Request.
typedef struct vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence
{
  vitro_ros_definitions__srv__GetInspectionObject_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence;


// Constants defined in the message

/// Constant 'INSPECTION_REQUESTED'.
/**
  * constants
 */
enum
{
  vitro_ros_definitions__srv__GetInspectionObject_Response__INSPECTION_REQUESTED = 1
};

/// Constant 'NO_INSPECTION_REQUESTED'.
enum
{
  vitro_ros_definitions__srv__GetInspectionObject_Response__NO_INSPECTION_REQUESTED = 0
};

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/GetInspectionObject in the package vitro_ros_definitions.
typedef struct vitro_ros_definitions__srv__GetInspectionObject_Response
{
  rosidl_runtime_c__String id;
  int8_t status;
  geometry_msgs__msg__Pose pose;
} vitro_ros_definitions__srv__GetInspectionObject_Response;

// Struct for a sequence of vitro_ros_definitions__srv__GetInspectionObject_Response.
typedef struct vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence
{
  vitro_ros_definitions__srv__GetInspectionObject_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_INSPECTION_OBJECT__STRUCT_H_
