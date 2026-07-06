// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fm_gen_msgs:msg/PoseInCorridor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fm_gen_msgs/msg/detail/pose_in_corridor__rosidl_typesupport_introspection_c.h"
#include "fm_gen_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fm_gen_msgs/msg/detail/pose_in_corridor__functions.h"
#include "fm_gen_msgs/msg/detail/pose_in_corridor__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fm_gen_msgs__msg__PoseInCorridor__rosidl_typesupport_introspection_c__PoseInCorridor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fm_gen_msgs__msg__PoseInCorridor__init(message_memory);
}

void fm_gen_msgs__msg__PoseInCorridor__rosidl_typesupport_introspection_c__PoseInCorridor_fini_function(void * message_memory)
{
  fm_gen_msgs__msg__PoseInCorridor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fm_gen_msgs__msg__PoseInCorridor__rosidl_typesupport_introspection_c__PoseInCorridor_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__PoseInCorridor, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__PoseInCorridor, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__msg__PoseInCorridor, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fm_gen_msgs__msg__PoseInCorridor__rosidl_typesupport_introspection_c__PoseInCorridor_message_members = {
  "fm_gen_msgs__msg",  // message namespace
  "PoseInCorridor",  // message name
  3,  // number of fields
  sizeof(fm_gen_msgs__msg__PoseInCorridor),
  fm_gen_msgs__msg__PoseInCorridor__rosidl_typesupport_introspection_c__PoseInCorridor_message_member_array,  // message members
  fm_gen_msgs__msg__PoseInCorridor__rosidl_typesupport_introspection_c__PoseInCorridor_init_function,  // function to initialize message memory (memory has to be allocated)
  fm_gen_msgs__msg__PoseInCorridor__rosidl_typesupport_introspection_c__PoseInCorridor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fm_gen_msgs__msg__PoseInCorridor__rosidl_typesupport_introspection_c__PoseInCorridor_message_type_support_handle = {
  0,
  &fm_gen_msgs__msg__PoseInCorridor__rosidl_typesupport_introspection_c__PoseInCorridor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fm_gen_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, msg, PoseInCorridor)() {
  fm_gen_msgs__msg__PoseInCorridor__rosidl_typesupport_introspection_c__PoseInCorridor_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!fm_gen_msgs__msg__PoseInCorridor__rosidl_typesupport_introspection_c__PoseInCorridor_message_type_support_handle.typesupport_identifier) {
    fm_gen_msgs__msg__PoseInCorridor__rosidl_typesupport_introspection_c__PoseInCorridor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fm_gen_msgs__msg__PoseInCorridor__rosidl_typesupport_introspection_c__PoseInCorridor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
