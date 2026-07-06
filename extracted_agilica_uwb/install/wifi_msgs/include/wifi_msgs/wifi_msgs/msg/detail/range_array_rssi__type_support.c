// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wifi_msgs:msg/RangeArrayRSSI.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wifi_msgs/msg/detail/range_array_rssi__rosidl_typesupport_introspection_c.h"
#include "wifi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wifi_msgs/msg/detail/range_array_rssi__functions.h"
#include "wifi_msgs/msg/detail/range_array_rssi__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `tag_mac`
#include "rosidl_runtime_c/string_functions.h"
// Member `tag_position`
#include "geometry_msgs/msg/point.h"
// Member `tag_position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `ranges`
#include "wifi_msgs/msg/range_rssi.h"
// Member `ranges`
#include "wifi_msgs/msg/detail/range_rssi__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wifi_msgs__msg__RangeArrayRSSI__init(message_memory);
}

void wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_fini_function(void * message_memory)
{
  wifi_msgs__msg__RangeArrayRSSI__fini(message_memory);
}

size_t wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__size_function__RangeArrayRSSI__ranges(
  const void * untyped_member)
{
  const wifi_msgs__msg__RangeRSSI__Sequence * member =
    (const wifi_msgs__msg__RangeRSSI__Sequence *)(untyped_member);
  return member->size;
}

const void * wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__get_const_function__RangeArrayRSSI__ranges(
  const void * untyped_member, size_t index)
{
  const wifi_msgs__msg__RangeRSSI__Sequence * member =
    (const wifi_msgs__msg__RangeRSSI__Sequence *)(untyped_member);
  return &member->data[index];
}

void * wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__get_function__RangeArrayRSSI__ranges(
  void * untyped_member, size_t index)
{
  wifi_msgs__msg__RangeRSSI__Sequence * member =
    (wifi_msgs__msg__RangeRSSI__Sequence *)(untyped_member);
  return &member->data[index];
}

void wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__fetch_function__RangeArrayRSSI__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const wifi_msgs__msg__RangeRSSI * item =
    ((const wifi_msgs__msg__RangeRSSI *)
    wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__get_const_function__RangeArrayRSSI__ranges(untyped_member, index));
  wifi_msgs__msg__RangeRSSI * value =
    (wifi_msgs__msg__RangeRSSI *)(untyped_value);
  *value = *item;
}

void wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__assign_function__RangeArrayRSSI__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  wifi_msgs__msg__RangeRSSI * item =
    ((wifi_msgs__msg__RangeRSSI *)
    wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__get_function__RangeArrayRSSI__ranges(untyped_member, index));
  const wifi_msgs__msg__RangeRSSI * value =
    (const wifi_msgs__msg__RangeRSSI *)(untyped_value);
  *item = *value;
}

bool wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__resize_function__RangeArrayRSSI__ranges(
  void * untyped_member, size_t size)
{
  wifi_msgs__msg__RangeRSSI__Sequence * member =
    (wifi_msgs__msg__RangeRSSI__Sequence *)(untyped_member);
  wifi_msgs__msg__RangeRSSI__Sequence__fini(member);
  return wifi_msgs__msg__RangeRSSI__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wifi_msgs__msg__RangeArrayRSSI, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tag_mac",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wifi_msgs__msg__RangeArrayRSSI, tag_mac),  // bytes offset in struct
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
    offsetof(wifi_msgs__msg__RangeArrayRSSI, tag_position),  // bytes offset in struct
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
    offsetof(wifi_msgs__msg__RangeArrayRSSI, ranges),  // bytes offset in struct
    NULL,  // default value
    wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__size_function__RangeArrayRSSI__ranges,  // size() function pointer
    wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__get_const_function__RangeArrayRSSI__ranges,  // get_const(index) function pointer
    wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__get_function__RangeArrayRSSI__ranges,  // get(index) function pointer
    wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__fetch_function__RangeArrayRSSI__ranges,  // fetch(index, &value) function pointer
    wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__assign_function__RangeArrayRSSI__ranges,  // assign(index, value) function pointer
    wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__resize_function__RangeArrayRSSI__ranges  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_message_members = {
  "wifi_msgs__msg",  // message namespace
  "RangeArrayRSSI",  // message name
  4,  // number of fields
  sizeof(wifi_msgs__msg__RangeArrayRSSI),
  wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_message_member_array,  // message members
  wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_init_function,  // function to initialize message memory (memory has to be allocated)
  wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_message_type_support_handle = {
  0,
  &wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wifi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wifi_msgs, msg, RangeArrayRSSI)() {
  wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wifi_msgs, msg, RangeRSSI)();
  if (!wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_message_type_support_handle.typesupport_identifier) {
    wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wifi_msgs__msg__RangeArrayRSSI__rosidl_typesupport_introspection_c__RangeArrayRSSI_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
