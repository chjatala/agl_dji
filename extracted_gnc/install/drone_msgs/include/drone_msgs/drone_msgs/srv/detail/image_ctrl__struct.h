// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:srv/ImageCtrl.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__SRV__DETAIL__IMAGE_CTRL__STRUCT_H_
#define DRONE_MSGS__SRV__DETAIL__IMAGE_CTRL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ImageCtrl in the package drone_msgs.
typedef struct drone_msgs__srv__ImageCtrl_Request
{
  bool enable;
  /// "distance" or "overlap"
  rosidl_runtime_c__String mode;
  /// Input required for "distance" mode
  float next_picture_distance;
  /// Input required for "overlap" mode
  float overlap;
  float fov;
  float picture_plane_distance;
} drone_msgs__srv__ImageCtrl_Request;

// Struct for a sequence of drone_msgs__srv__ImageCtrl_Request.
typedef struct drone_msgs__srv__ImageCtrl_Request__Sequence
{
  drone_msgs__srv__ImageCtrl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__srv__ImageCtrl_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ImageCtrl in the package drone_msgs.
typedef struct drone_msgs__srv__ImageCtrl_Response
{
  bool success;
} drone_msgs__srv__ImageCtrl_Response;

// Struct for a sequence of drone_msgs__srv__ImageCtrl_Response.
typedef struct drone_msgs__srv__ImageCtrl_Response__Sequence
{
  drone_msgs__srv__ImageCtrl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__srv__ImageCtrl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__SRV__DETAIL__IMAGE_CTRL__STRUCT_H_
