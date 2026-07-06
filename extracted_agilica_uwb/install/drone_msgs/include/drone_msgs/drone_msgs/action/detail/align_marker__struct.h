// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:action/AlignMarker.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__ACTION__DETAIL__ALIGN_MARKER__STRUCT_H_
#define DRONE_MSGS__ACTION__DETAIL__ALIGN_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/AlignMarker in the package drone_msgs.
typedef struct drone_msgs__action__AlignMarker_Goal
{
  uint16_t id;
  double max_vel;
  double max_yaw_rate;
  double distance;
} drone_msgs__action__AlignMarker_Goal;

// Struct for a sequence of drone_msgs__action__AlignMarker_Goal.
typedef struct drone_msgs__action__AlignMarker_Goal__Sequence
{
  drone_msgs__action__AlignMarker_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__AlignMarker_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"
// Member 'init_pos'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/AlignMarker in the package drone_msgs.
typedef struct drone_msgs__action__AlignMarker_Result
{
  rosidl_runtime_c__String status;
  geometry_msgs__msg__Point init_pos;
  double init_yaw;
} drone_msgs__action__AlignMarker_Result;

// Struct for a sequence of drone_msgs__action__AlignMarker_Result.
typedef struct drone_msgs__action__AlignMarker_Result__Sequence
{
  drone_msgs__action__AlignMarker_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__AlignMarker_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'target_pos'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in action/AlignMarker in the package drone_msgs.
typedef struct drone_msgs__action__AlignMarker_Feedback
{
  float dist_to_go;
  geometry_msgs__msg__Point target_pos;
} drone_msgs__action__AlignMarker_Feedback;

// Struct for a sequence of drone_msgs__action__AlignMarker_Feedback.
typedef struct drone_msgs__action__AlignMarker_Feedback__Sequence
{
  drone_msgs__action__AlignMarker_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__AlignMarker_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "drone_msgs/action/detail/align_marker__struct.h"

/// Struct defined in action/AlignMarker in the package drone_msgs.
typedef struct drone_msgs__action__AlignMarker_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  drone_msgs__action__AlignMarker_Goal goal;
} drone_msgs__action__AlignMarker_SendGoal_Request;

// Struct for a sequence of drone_msgs__action__AlignMarker_SendGoal_Request.
typedef struct drone_msgs__action__AlignMarker_SendGoal_Request__Sequence
{
  drone_msgs__action__AlignMarker_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__AlignMarker_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AlignMarker in the package drone_msgs.
typedef struct drone_msgs__action__AlignMarker_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} drone_msgs__action__AlignMarker_SendGoal_Response;

// Struct for a sequence of drone_msgs__action__AlignMarker_SendGoal_Response.
typedef struct drone_msgs__action__AlignMarker_SendGoal_Response__Sequence
{
  drone_msgs__action__AlignMarker_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__AlignMarker_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AlignMarker in the package drone_msgs.
typedef struct drone_msgs__action__AlignMarker_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} drone_msgs__action__AlignMarker_GetResult_Request;

// Struct for a sequence of drone_msgs__action__AlignMarker_GetResult_Request.
typedef struct drone_msgs__action__AlignMarker_GetResult_Request__Sequence
{
  drone_msgs__action__AlignMarker_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__AlignMarker_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "drone_msgs/action/detail/align_marker__struct.h"

/// Struct defined in action/AlignMarker in the package drone_msgs.
typedef struct drone_msgs__action__AlignMarker_GetResult_Response
{
  int8_t status;
  drone_msgs__action__AlignMarker_Result result;
} drone_msgs__action__AlignMarker_GetResult_Response;

// Struct for a sequence of drone_msgs__action__AlignMarker_GetResult_Response.
typedef struct drone_msgs__action__AlignMarker_GetResult_Response__Sequence
{
  drone_msgs__action__AlignMarker_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__AlignMarker_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "drone_msgs/action/detail/align_marker__struct.h"

/// Struct defined in action/AlignMarker in the package drone_msgs.
typedef struct drone_msgs__action__AlignMarker_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  drone_msgs__action__AlignMarker_Feedback feedback;
} drone_msgs__action__AlignMarker_FeedbackMessage;

// Struct for a sequence of drone_msgs__action__AlignMarker_FeedbackMessage.
typedef struct drone_msgs__action__AlignMarker_FeedbackMessage__Sequence
{
  drone_msgs__action__AlignMarker_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__AlignMarker_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__ACTION__DETAIL__ALIGN_MARKER__STRUCT_H_
