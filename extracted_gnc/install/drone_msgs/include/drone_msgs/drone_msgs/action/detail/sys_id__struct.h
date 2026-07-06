// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:action/SysId.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__ACTION__DETAIL__SYS_ID__STRUCT_H_
#define DRONE_MSGS__ACTION__DETAIL__SYS_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cfg_file'
// Member 'cfg_str'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/SysId in the package drone_msgs.
typedef struct drone_msgs__action__SysId_Goal
{
  rosidl_runtime_c__String cfg_file;
  rosidl_runtime_c__String cfg_str;
} drone_msgs__action__SysId_Goal;

// Struct for a sequence of drone_msgs__action__SysId_Goal.
typedef struct drone_msgs__action__SysId_Goal__Sequence
{
  drone_msgs__action__SysId_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__SysId_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"
// Member 'ret'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/SysId in the package drone_msgs.
typedef struct drone_msgs__action__SysId_Result
{
  rosidl_runtime_c__String status;
  rosidl_runtime_c__double__Sequence ret;
} drone_msgs__action__SysId_Result;

// Struct for a sequence of drone_msgs__action__SysId_Result.
typedef struct drone_msgs__action__SysId_Result__Sequence
{
  drone_msgs__action__SysId_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__SysId_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SysId in the package drone_msgs.
typedef struct drone_msgs__action__SysId_Feedback
{
  rosidl_runtime_c__String status;
} drone_msgs__action__SysId_Feedback;

// Struct for a sequence of drone_msgs__action__SysId_Feedback.
typedef struct drone_msgs__action__SysId_Feedback__Sequence
{
  drone_msgs__action__SysId_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__SysId_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "drone_msgs/action/detail/sys_id__struct.h"

/// Struct defined in action/SysId in the package drone_msgs.
typedef struct drone_msgs__action__SysId_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  drone_msgs__action__SysId_Goal goal;
} drone_msgs__action__SysId_SendGoal_Request;

// Struct for a sequence of drone_msgs__action__SysId_SendGoal_Request.
typedef struct drone_msgs__action__SysId_SendGoal_Request__Sequence
{
  drone_msgs__action__SysId_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__SysId_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SysId in the package drone_msgs.
typedef struct drone_msgs__action__SysId_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} drone_msgs__action__SysId_SendGoal_Response;

// Struct for a sequence of drone_msgs__action__SysId_SendGoal_Response.
typedef struct drone_msgs__action__SysId_SendGoal_Response__Sequence
{
  drone_msgs__action__SysId_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__SysId_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SysId in the package drone_msgs.
typedef struct drone_msgs__action__SysId_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} drone_msgs__action__SysId_GetResult_Request;

// Struct for a sequence of drone_msgs__action__SysId_GetResult_Request.
typedef struct drone_msgs__action__SysId_GetResult_Request__Sequence
{
  drone_msgs__action__SysId_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__SysId_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "drone_msgs/action/detail/sys_id__struct.h"

/// Struct defined in action/SysId in the package drone_msgs.
typedef struct drone_msgs__action__SysId_GetResult_Response
{
  int8_t status;
  drone_msgs__action__SysId_Result result;
} drone_msgs__action__SysId_GetResult_Response;

// Struct for a sequence of drone_msgs__action__SysId_GetResult_Response.
typedef struct drone_msgs__action__SysId_GetResult_Response__Sequence
{
  drone_msgs__action__SysId_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__SysId_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "drone_msgs/action/detail/sys_id__struct.h"

/// Struct defined in action/SysId in the package drone_msgs.
typedef struct drone_msgs__action__SysId_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  drone_msgs__action__SysId_Feedback feedback;
} drone_msgs__action__SysId_FeedbackMessage;

// Struct for a sequence of drone_msgs__action__SysId_FeedbackMessage.
typedef struct drone_msgs__action__SysId_FeedbackMessage__Sequence
{
  drone_msgs__action__SysId_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__SysId_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__ACTION__DETAIL__SYS_ID__STRUCT_H_
