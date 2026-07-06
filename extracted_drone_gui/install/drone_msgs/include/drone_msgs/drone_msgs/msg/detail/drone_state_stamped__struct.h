// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:msg/DroneStateStamped.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_STATE_STAMPED__STRUCT_H_
#define DRONE_MSGS__MSG__DETAIL__DRONE_STATE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FLIGHT_STATE_INIT'.
static const char * const drone_msgs__msg__DroneStateStamped__FLIGHT_STATE_INIT = "init";

/// Constant 'CTRL_MODE_MANUAL'.
static const char * const drone_msgs__msg__DroneStateStamped__CTRL_MODE_MANUAL = "manual";

/// Constant 'CTRL_MODE_AUTO'.
static const char * const drone_msgs__msg__DroneStateStamped__CTRL_MODE_AUTO = "auto";

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'drone_id'
// Member 'flight_state'
// Member 'ctrl_mode'
// Member 'cam_state'
// Member 'nav_state'
// Member 'mission_state'
// Member 'pil_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DroneStateStamped in the package drone_msgs.
typedef struct drone_msgs__msg__DroneStateStamped
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String drone_id;
  rosidl_runtime_c__String flight_state;
  rosidl_runtime_c__String ctrl_mode;
  rosidl_runtime_c__String cam_state;
  rosidl_runtime_c__String nav_state;
  rosidl_runtime_c__String mission_state;
  rosidl_runtime_c__String pil_state;
  bool armed;
  float battery_remain;
  float battery_voltage;
} drone_msgs__msg__DroneStateStamped;

// Struct for a sequence of drone_msgs__msg__DroneStateStamped.
typedef struct drone_msgs__msg__DroneStateStamped__Sequence
{
  drone_msgs__msg__DroneStateStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__msg__DroneStateStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_STATE_STAMPED__STRUCT_H_
