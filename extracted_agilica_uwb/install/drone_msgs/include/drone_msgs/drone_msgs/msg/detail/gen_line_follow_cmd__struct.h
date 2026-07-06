// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:msg/GenLineFollowCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__GEN_LINE_FOLLOW_CMD__STRUCT_H_
#define DRONE_MSGS__MSG__DETAIL__GEN_LINE_FOLLOW_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POS_CLOSELOOP'.
/**
  * some constant for ctrl type
  * close loop pos control, will keep the drone at the *_tgt position
 */
static const char * const drone_msgs__msg__GenLineFollowCmd__POS_CLOSELOOP = "POS_CLOSELOOP";

/// Constant 'SPEED_OPENLOOP'.
/**
  * open loop speed control, will send a constant speed (*_tgt) command
 */
static const char * const drone_msgs__msg__GenLineFollowCmd__SPEED_OPENLOOP = "SPEED_OPENLOOP";

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'x_type'
// Member 'y_type'
// Member 'z_type'
// Member 'yaw_type'
#include "rosidl_runtime_c/string.h"
// Member 'param'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/GenLineFollowCmd in the package drone_msgs.
/**
  * A generic cmd msg for gen_line_follow control
  * the x/y/z/yaw control targets are defined in the global frame, not
  * in the drone body frame.
 */
typedef struct drone_msgs__msg__GenLineFollowCmd
{
  /// to save the time stamp
  std_msgs__msg__Header header;
  float x_tgt;
  rosidl_runtime_c__String x_type;
  float y_tgt;
  rosidl_runtime_c__String y_type;
  float z_tgt;
  rosidl_runtime_c__String z_type;
  float yaw_tgt;
  rosidl_runtime_c__String yaw_type;
  /// reserved for advanced setting (e.g., ctrl gain)
  rosidl_runtime_c__double__Sequence param;
} drone_msgs__msg__GenLineFollowCmd;

// Struct for a sequence of drone_msgs__msg__GenLineFollowCmd.
typedef struct drone_msgs__msg__GenLineFollowCmd__Sequence
{
  drone_msgs__msg__GenLineFollowCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__msg__GenLineFollowCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__MSG__DETAIL__GEN_LINE_FOLLOW_CMD__STRUCT_H_
