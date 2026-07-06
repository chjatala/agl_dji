// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vision_msgs:msg/VisionResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vision_msgs/msg/detail/vision_result__rosidl_typesupport_introspection_c.h"
#include "vision_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vision_msgs/msg/detail/vision_result__functions.h"
#include "vision_msgs/msg/detail/vision_result__struct.h"


// Include directives for member types
// Member `points`
#include "geometry_msgs/msg/point.h"
// Member `points`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `additional_info`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__VisionResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vision_msgs__msg__VisionResult__init(message_memory);
}

void vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__VisionResult_fini_function(void * message_memory)
{
  vision_msgs__msg__VisionResult__fini(message_memory);
}

size_t vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__size_function__VisionResult__points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__get_const_function__VisionResult__points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__get_function__VisionResult__points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__fetch_function__VisionResult__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__get_const_function__VisionResult__points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__assign_function__VisionResult__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__get_function__VisionResult__points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__resize_function__VisionResult__points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__VisionResult_message_member_array[3] = {
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs__msg__VisionResult, points),  // bytes offset in struct
    NULL,  // default value
    vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__size_function__VisionResult__points,  // size() function pointer
    vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__get_const_function__VisionResult__points,  // get_const(index) function pointer
    vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__get_function__VisionResult__points,  // get(index) function pointer
    vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__fetch_function__VisionResult__points,  // fetch(index, &value) function pointer
    vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__assign_function__VisionResult__points,  // assign(index, value) function pointer
    vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__resize_function__VisionResult__points  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs__msg__VisionResult, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "additional_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vision_msgs__msg__VisionResult, additional_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__VisionResult_message_members = {
  "vision_msgs__msg",  // message namespace
  "VisionResult",  // message name
  3,  // number of fields
  sizeof(vision_msgs__msg__VisionResult),
  vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__VisionResult_message_member_array,  // message members
  vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__VisionResult_init_function,  // function to initialize message memory (memory has to be allocated)
  vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__VisionResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__VisionResult_message_type_support_handle = {
  0,
  &vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__VisionResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vision_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vision_msgs, msg, VisionResult)() {
  vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__VisionResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__VisionResult_message_type_support_handle.typesupport_identifier) {
    vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__VisionResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vision_msgs__msg__VisionResult__rosidl_typesupport_introspection_c__VisionResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
