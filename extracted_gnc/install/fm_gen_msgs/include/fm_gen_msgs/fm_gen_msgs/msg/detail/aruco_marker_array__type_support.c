// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fm_gen_msgs:msg/ArucoMarkerArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fm_gen_msgs/msg/detail/aruco_marker_array__rosidl_typesupport_introspection_c.h"
#include "fm_gen_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fm_gen_msgs/msg/detail/aruco_marker_array__functions.h"
#include "fm_gen_msgs/msg/detail/aruco_marker_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `camera_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `marker`
#include "fm_gen_msgs/msg/aruco_marker.h"
// Member `marker`
#include "fm_gen_msgs/msg/detail/aruco_marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fm_gen_msgs__msg__ArucoMarkerArray__init(message_memory);
}

void fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_fini_function(void * message_memory)
{
  fm_gen_msgs__msg__ArucoMarkerArray__fini(message_memory);
}

size_t fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__size_function__ArucoMarkerArray__marker(
  const void * untyped_member)
{
  const fm_gen_msgs__msg__ArucoMarker__Sequence * member =
    (const fm_gen_msgs__msg__ArucoMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkerArray__marker(
  const void * untyped_member, size_t index)
{
  const fm_gen_msgs__msg__ArucoMarker__Sequence * member =
    (const fm_gen_msgs__msg__ArucoMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__get_function__ArucoMarkerArray__marker(
  void * untyped_member, size_t index)
{
  fm_gen_msgs__msg__ArucoMarker__Sequence * member =
    (fm_gen_msgs__msg__ArucoMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkerArray__marker(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const fm_gen_msgs__msg__ArucoMarker * item =
    ((const fm_gen_msgs__msg__ArucoMarker *)
    fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkerArray__marker(untyped_member, index));
  fm_gen_msgs__msg__ArucoMarker * value =
    (fm_gen_msgs__msg__ArucoMarker *)(untyped_value);
  *value = *item;
}

void fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__assign_function__ArucoMarkerArray__marker(
  void * untyped_member, size_t index, const void * untyped_value)
{
  fm_gen_msgs__msg__ArucoMarker * item =
    ((fm_gen_msgs__msg__ArucoMarker *)
    fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__get_function__ArucoMarkerArray__marker(untyped_member, index));
  const fm_gen_msgs__msg__ArucoMarker * value =
    (const fm_gen_msgs__msg__ArucoMarker *)(untyped_value);
  *item = *value;
}

bool fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__resize_function__ArucoMarkerArray__marker(
  void * untyped_member, size_t size)
{
  fm_gen_msgs__msg__ArucoMarker__Sequence * member =
    (fm_gen_msgs__msg__ArucoMarker__Sequence *)(untyped_member);
  fm_gen_msgs__msg__ArucoMarker__Sequence__fini(member);
  return fm_gen_msgs__msg__ArucoMarker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__ArucoMarkerArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_marker",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__ArucoMarkerArray, num_marker),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__ArucoMarkerArray, camera_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_captured",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__ArucoMarkerArray, time_captured),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "marker",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__ArucoMarkerArray, marker),  // bytes offset in struct
    NULL,  // default value
    fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__size_function__ArucoMarkerArray__marker,  // size() function pointer
    fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__get_const_function__ArucoMarkerArray__marker,  // get_const(index) function pointer
    fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__get_function__ArucoMarkerArray__marker,  // get(index) function pointer
    fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__fetch_function__ArucoMarkerArray__marker,  // fetch(index, &value) function pointer
    fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__assign_function__ArucoMarkerArray__marker,  // assign(index, value) function pointer
    fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__resize_function__ArucoMarkerArray__marker  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_message_members = {
  "fm_gen_msgs__msg",  // message namespace
  "ArucoMarkerArray",  // message name
  5,  // number of fields
  sizeof(fm_gen_msgs__msg__ArucoMarkerArray),
  fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_message_member_array,  // message members
  fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_init_function,  // function to initialize message memory (memory has to be allocated)
  fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_message_type_support_handle = {
  0,
  &fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fm_gen_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, msg, ArucoMarkerArray)() {
  fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, msg, ArucoMarker)();
  if (!fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_message_type_support_handle.typesupport_identifier) {
    fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fm_gen_msgs__msg__ArucoMarkerArray__rosidl_typesupport_introspection_c__ArucoMarkerArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
