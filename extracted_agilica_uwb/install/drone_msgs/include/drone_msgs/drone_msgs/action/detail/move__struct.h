// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from drone_msgs:action/Move.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__ACTION__DETAIL__MOVE__STRUCT_H_
#define DRONE_MSGS__ACTION__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RELATIVE'.
enum
{
  drone_msgs__action__Move_Goal__RELATIVE = 0
};

/// Constant 'ABSOLUTE'.
enum
{
  drone_msgs__action__Move_Goal__ABSOLUTE = 1
};

/// Constant 'LOCAL'.
/**
  * Ref frame constants
 */
enum
{
  drone_msgs__action__Move_Goal__LOCAL = 0
};

// Include directives for member types
// Member 'waypoints'
#include "drone_msgs/msg/detail/waypoints__struct.h"

/// Struct defined in action/Move in the package drone_msgs.
typedef struct drone_msgs__action__Move_Goal
{
  drone_msgs__msg__Waypoints waypoints;
  /// Reference type fo each DOF (RELATIVE or ABSOLUTE)
  uint8_t x_reference_type;
  uint8_t y_reference_type;
  uint8_t z_reference_type;
  uint8_t yaw_reference_type;
  /// Reference frame (in case of relative DOFS)
  uint8_t ref_frame;
} drone_msgs__action__Move_Goal;

// Struct for a sequence of drone_msgs__action__Move_Goal.
typedef struct drone_msgs__action__Move_Goal__Sequence
{
  drone_msgs__action__Move_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Move_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Move in the package drone_msgs.
typedef struct drone_msgs__action__Move_Result
{
  rosidl_runtime_c__String status;
} drone_msgs__action__Move_Result;

// Struct for a sequence of drone_msgs__action__Move_Result.
typedef struct drone_msgs__action__Move_Result__Sequence
{
  drone_msgs__action__Move_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Move_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Move in the package drone_msgs.
typedef struct drone_msgs__action__Move_Feedback
{
  float dist_to_go;
  float eta;
  float err_bar;
} drone_msgs__action__Move_Feedback;

// Struct for a sequence of drone_msgs__action__Move_Feedback.
typedef struct drone_msgs__action__Move_Feedback__Sequence
{
  drone_msgs__action__Move_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Move_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "drone_msgs/action/detail/move__struct.h"

/// Struct defined in action/Move in the package drone_msgs.
typedef struct drone_msgs__action__Move_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  drone_msgs__action__Move_Goal goal;
} drone_msgs__action__Move_SendGoal_Request;

// Struct for a sequence of drone_msgs__action__Move_SendGoal_Request.
typedef struct drone_msgs__action__Move_SendGoal_Request__Sequence
{
  drone_msgs__action__Move_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Move_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Move in the package drone_msgs.
typedef struct drone_msgs__action__Move_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} drone_msgs__action__Move_SendGoal_Response;

// Struct for a sequence of drone_msgs__action__Move_SendGoal_Response.
typedef struct drone_msgs__action__Move_SendGoal_Response__Sequence
{
  drone_msgs__action__Move_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Move_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Move in the package drone_msgs.
typedef struct drone_msgs__action__Move_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} drone_msgs__action__Move_GetResult_Request;

// Struct for a sequence of drone_msgs__action__Move_GetResult_Request.
typedef struct drone_msgs__action__Move_GetResult_Request__Sequence
{
  drone_msgs__action__Move_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Move_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "drone_msgs/action/detail/move__struct.h"

/// Struct defined in action/Move in the package drone_msgs.
typedef struct drone_msgs__action__Move_GetResult_Response
{
  int8_t status;
  drone_msgs__action__Move_Result result;
} drone_msgs__action__Move_GetResult_Response;

// Struct for a sequence of drone_msgs__action__Move_GetResult_Response.
typedef struct drone_msgs__action__Move_GetResult_Response__Sequence
{
  drone_msgs__action__Move_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Move_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "drone_msgs/action/detail/move__struct.h"

/// Struct defined in action/Move in the package drone_msgs.
typedef struct drone_msgs__action__Move_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  drone_msgs__action__Move_Feedback feedback;
} drone_msgs__action__Move_FeedbackMessage;

// Struct for a sequence of drone_msgs__action__Move_FeedbackMessage.
typedef struct drone_msgs__action__Move_FeedbackMessage__Sequence
{
  drone_msgs__action__Move_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} drone_msgs__action__Move_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DRONE_MSGS__ACTION__DETAIL__MOVE__STRUCT_H_
