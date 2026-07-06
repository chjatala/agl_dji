// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from vitro_ros_definitions:msg/FMSResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "vitro_ros_definitions/msg/detail/fms_result__rosidl_typesupport_introspection_c.h"
#include "vitro_ros_definitions/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "vitro_ros_definitions/msg/detail/fms_result__functions.h"
#include "vitro_ros_definitions/msg/detail/fms_result__struct.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `img`
#include "sensor_msgs/msg/image.h"
// Member `img`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  vitro_ros_definitions__msg__FMSResult__init(message_memory);
}

void vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_fini_function(void * message_memory)
{
  vitro_ros_definitions__msg__FMSResult__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_message_member_array[4] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vitro_ros_definitions__msg__FMSResult, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vitro_ros_definitions__msg__FMSResult, id_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vitro_ros_definitions__msg__FMSResult, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "img",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vitro_ros_definitions__msg__FMSResult, img),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_message_members = {
  "vitro_ros_definitions__msg",  // message namespace
  "FMSResult",  // message name
  4,  // number of fields
  sizeof(vitro_ros_definitions__msg__FMSResult),
  vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_message_member_array,  // message members
  vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_init_function,  // function to initialize message memory (memory has to be allocated)
  vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_message_type_support_handle = {
  0,
  &vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_vitro_ros_definitions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vitro_ros_definitions, msg, FMSResult)() {
  vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_message_type_support_handle.typesupport_identifier) {
    vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &vitro_ros_definitions__msg__FMSResult__rosidl_typesupport_introspection_c__FMSResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
