// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:action/LineFollow.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__ACTION__DETAIL__LINE_FOLLOW__STRUCT_H_
#define DRONE_MSGS__ACTION__DETAIL__LINE_FOLLOW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'param'
#include "std_msgs/msg/detail/float32_multi_array__struct.h"

/// Struct defined in action/LineFollow in the package drone_msgs.
typedef struct drone_msgs__action__LineFollow_Goal
{
  std_msgs__msg__Float32MultiArray param;
} drone_msgs__action__LineFollow_Goal;

// Struct for a sequence of drone_msgs__action__LineFollow_Goal.
typedef struct drone_msgs__action__LineFollow_Goal__Sequence
{
  drone_msgs__action__LineFollow_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__LineFollow_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/LineFollow in the package drone_msgs.
typedef struct drone_msgs__action__LineFollow_Result
{
  rosidl_runtime_c__String status;
} drone_msgs__action__LineFollow_Result;

// Struct for a sequence of drone_msgs__action__LineFollow_Result.
typedef struct drone_msgs__action__LineFollow_Result__Sequence
{
  drone_msgs__action__LineFollow_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__LineFollow_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/LineFollow in the package drone_msgs.
typedef struct drone_msgs__action__LineFollow_Feedback
{
  float dist_travelled;
} drone_msgs__action__LineFollow_Feedback;

// Struct for a sequence of drone_msgs__action__LineFollow_Feedback.
typedef struct drone_msgs__action__LineFollow_Feedback__Sequence
{
  drone_msgs__action__LineFollow_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__LineFollow_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "drone_msgs/action/detail/line_follow__struct.h"

/// Struct defined in action/LineFollow in the package drone_msgs.
typedef struct drone_msgs__action__LineFollow_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  drone_msgs__action__LineFollow_Goal goal;
} drone_msgs__action__LineFollow_SendGoal_Request;

// Struct for a sequence of drone_msgs__action__LineFollow_SendGoal_Request.
typedef struct drone_msgs__action__LineFollow_SendGoal_Request__Sequence
{
  drone_msgs__action__LineFollow_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__LineFollow_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/LineFollow in the package drone_msgs.
typedef struct drone_msgs__action__LineFollow_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} drone_msgs__action__LineFollow_SendGoal_Response;

// Struct for a sequence of drone_msgs__action__LineFollow_SendGoal_Response.
typedef struct drone_msgs__action__LineFollow_SendGoal_Response__Sequence
{
  drone_msgs__action__LineFollow_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__LineFollow_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/LineFollow in the package drone_msgs.
typedef struct drone_msgs__action__LineFollow_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} drone_msgs__action__LineFollow_GetResult_Request;

// Struct for a sequence of drone_msgs__action__LineFollow_GetResult_Request.
typedef struct drone_msgs__action__LineFollow_GetResult_Request__Sequence
{
  drone_msgs__action__LineFollow_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__LineFollow_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "drone_msgs/action/detail/line_follow__struct.h"

/// Struct defined in action/LineFollow in the package drone_msgs.
typedef struct drone_msgs__action__LineFollow_GetResult_Response
{
  int8_t status;
  drone_msgs__action__LineFollow_Result result;
} drone_msgs__action__LineFollow_GetResult_Response;

// Struct for a sequence of drone_msgs__action__LineFollow_GetResult_Response.
typedef struct drone_msgs__action__LineFollow_GetResult_Response__Sequence
{
  drone_msgs__action__LineFollow_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__LineFollow_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "drone_msgs/action/detail/line_follow__struct.h"

/// Struct defined in action/LineFollow in the package drone_msgs.
typedef struct drone_msgs__action__LineFollow_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  drone_msgs__action__LineFollow_Feedback feedback;
} drone_msgs__action__LineFollow_FeedbackMessage;

// Struct for a sequence of drone_msgs__action__LineFollow_FeedbackMessage.
typedef struct drone_msgs__action__LineFollow_FeedbackMessage__Sequence
{
  drone_msgs__action__LineFollow_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__LineFollow_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__ACTION__DETAIL__LINE_FOLLOW__STRUCT_H_
