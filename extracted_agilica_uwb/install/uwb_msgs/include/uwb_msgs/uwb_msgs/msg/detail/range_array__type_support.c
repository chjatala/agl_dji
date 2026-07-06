// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uwb_msgs:msg/RangeArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uwb_msgs/msg/detail/range_array__rosidl_typesupport_introspection_c.h"
#include "uwb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uwb_msgs/msg/detail/range_array__functions.h"
#include "uwb_msgs/msg/detail/range_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `tagid`
#include "rosidl_runtime_c/string_functions.h"
// Member `tag_position`
#include "geometry_msgs/msg/point.h"
// Member `tag_position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `ranges`
#include "uwb_msgs/msg/range.h"
// Member `ranges`
#include "uwb_msgs/msg/detail/range__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uwb_msgs__msg__RangeArray__init(message_memory);
}

void uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_fini_function(void * message_memory)
{
  uwb_msgs__msg__RangeArray__fini(message_memory);
}

size_t uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__size_function__RangeArray__ranges(
  const void * untyped_member)
{
  const uwb_msgs__msg__Range__Sequence * member =
    (const uwb_msgs__msg__Range__Sequence *)(untyped_member);
  return member->size;
}

const void * uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__get_const_function__RangeArray__ranges(
  const void * untyped_member, size_t index)
{
  const uwb_msgs__msg__Range__Sequence * member =
    (const uwb_msgs__msg__Range__Sequence *)(untyped_member);
  return &member->data[index];
}

void * uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__get_function__RangeArray__ranges(
  void * untyped_member, size_t index)
{
  uwb_msgs__msg__Range__Sequence * member =
    (uwb_msgs__msg__Range__Sequence *)(untyped_member);
  return &member->data[index];
}

void uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__fetch_function__RangeArray__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uwb_msgs__msg__Range * item =
    ((const uwb_msgs__msg__Range *)
    uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__get_const_function__RangeArray__ranges(untyped_member, index));
  uwb_msgs__msg__Range * value =
    (uwb_msgs__msg__Range *)(untyped_value);
  *value = *item;
}

void uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__assign_function__RangeArray__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uwb_msgs__msg__Range * item =
    ((uwb_msgs__msg__Range *)
    uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__get_function__RangeArray__ranges(untyped_member, index));
  const uwb_msgs__msg__Range * value =
    (const uwb_msgs__msg__Range *)(untyped_value);
  *item = *value;
}

bool uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__resize_function__RangeArray__ranges(
  void * untyped_member, size_t size)
{
  uwb_msgs__msg__Range__Sequence * member =
    (uwb_msgs__msg__Range__Sequence *)(untyped_member);
  uwb_msgs__msg__Range__Sequence__fini(member);
  return uwb_msgs__msg__Range__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__RangeArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tagid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__RangeArray, tagid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tag_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__RangeArray, tag_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ranges",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uwb_msgs__msg__RangeArray, ranges),  // bytes offset in struct
    NULL,  // default value
    uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__size_function__RangeArray__ranges,  // size() function pointer
    uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__get_const_function__RangeArray__ranges,  // get_const(index) function pointer
    uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__get_function__RangeArray__ranges,  // get(index) function pointer
    uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__fetch_function__RangeArray__ranges,  // fetch(index, &value) function pointer
    uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__assign_function__RangeArray__ranges,  // assign(index, value) function pointer
    uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__resize_function__RangeArray__ranges  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_message_members = {
  "uwb_msgs__msg",  // message namespace
  "RangeArray",  // message name
  4,  // number of fields
  sizeof(uwb_msgs__msg__RangeArray),
  uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_message_member_array,  // message members
  uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_init_function,  // function to initialize message memory (memory has to be allocated)
  uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_message_type_support_handle = {
  0,
  &uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uwb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uwb_msgs, msg, RangeArray)() {
  uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uwb_msgs, msg, Range)();
  if (!uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_message_type_support_handle.typesupport_identifier) {
    uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &uwb_msgs__msg__RangeArray__rosidl_typesupport_introspection_c__RangeArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
