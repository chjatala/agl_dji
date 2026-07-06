// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:action/Moveto.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__ACTION__DETAIL__MOVETO__STRUCT_H_
#define DRONE_MSGS__ACTION__DETAIL__MOVETO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "drone_msgs/msg/detail/waypoints__struct.h"

/// Struct defined in action/Moveto in the package drone_msgs.
typedef struct drone_msgs__action__Moveto_Goal
{
  drone_msgs__msg__Waypoints waypoints;
} drone_msgs__action__Moveto_Goal;

// Struct for a sequence of drone_msgs__action__Moveto_Goal.
typedef struct drone_msgs__action__Moveto_Goal__Sequence
{
  drone_msgs__action__Moveto_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Moveto_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Moveto in the package drone_msgs.
typedef struct drone_msgs__action__Moveto_Result
{
  rosidl_runtime_c__String status;
} drone_msgs__action__Moveto_Result;

// Struct for a sequence of drone_msgs__action__Moveto_Result.
typedef struct drone_msgs__action__Moveto_Result__Sequence
{
  drone_msgs__action__Moveto_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Moveto_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Moveto in the package drone_msgs.
typedef struct drone_msgs__action__Moveto_Feedback
{
  float dist_to_go;
  float eta;
  float err_bar;
} drone_msgs__action__Moveto_Feedback;

// Struct for a sequence of drone_msgs__action__Moveto_Feedback.
typedef struct drone_msgs__action__Moveto_Feedback__Sequence
{
  drone_msgs__action__Moveto_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Moveto_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "drone_msgs/action/detail/moveto__struct.h"

/// Struct defined in action/Moveto in the package drone_msgs.
typedef struct drone_msgs__action__Moveto_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  drone_msgs__action__Moveto_Goal goal;
} drone_msgs__action__Moveto_SendGoal_Request;

// Struct for a sequence of drone_msgs__action__Moveto_SendGoal_Request.
typedef struct drone_msgs__action__Moveto_SendGoal_Request__Sequence
{
  drone_msgs__action__Moveto_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Moveto_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Moveto in the package drone_msgs.
typedef struct drone_msgs__action__Moveto_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} drone_msgs__action__Moveto_SendGoal_Response;

// Struct for a sequence of drone_msgs__action__Moveto_SendGoal_Response.
typedef struct drone_msgs__action__Moveto_SendGoal_Response__Sequence
{
  drone_msgs__action__Moveto_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Moveto_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Moveto in the package drone_msgs.
typedef struct drone_msgs__action__Moveto_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} drone_msgs__action__Moveto_GetResult_Request;

// Struct for a sequence of drone_msgs__action__Moveto_GetResult_Request.
typedef struct drone_msgs__action__Moveto_GetResult_Request__Sequence
{
  drone_msgs__action__Moveto_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Moveto_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "drone_msgs/action/detail/moveto__struct.h"

/// Struct defined in action/Moveto in the package drone_msgs.
typedef struct drone_msgs__action__Moveto_GetResult_Response
{
  int8_t status;
  drone_msgs__action__Moveto_Result result;
} drone_msgs__action__Moveto_GetResult_Response;

// Struct for a sequence of drone_msgs__action__Moveto_GetResult_Response.
typedef struct drone_msgs__action__Moveto_GetResult_Response__Sequence
{
  drone_msgs__action__Moveto_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Moveto_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "drone_msgs/action/detail/moveto__struct.h"

/// Struct defined in action/Moveto in the package drone_msgs.
typedef struct drone_msgs__action__Moveto_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  drone_msgs__action__Moveto_Feedback feedback;
} drone_msgs__action__Moveto_FeedbackMessage;

// Struct for a sequence of drone_msgs__action__Moveto_FeedbackMessage.
typedef struct drone_msgs__action__Moveto_FeedbackMessage__Sequence
{
  drone_msgs__action__Moveto_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Moveto_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__ACTION__DETAIL__MOVETO__STRUCT_H_
