// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drone_msgs:srv/DroneCmd.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drone_msgs/srv/detail/drone_cmd__rosidl_typesupport_introspection_c.h"
#include "drone_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drone_msgs/srv/detail/drone_cmd__functions.h"
#include "drone_msgs/srv/detail/drone_cmd__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `cmd`
// Member `note`
// Member `cmder`
// Member `tgt`
#include "rosidl_runtime_c/string_functions.h"
// Member `param`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__DroneCmd_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_msgs__srv__DroneCmd_Request__init(message_memory);
}

void drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__DroneCmd_Request_fini_function(void * message_memory)
{
  drone_msgs__srv__DroneCmd_Request__fini(message_memory);
}

size_t drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__size_function__DroneCmd_Request__param(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__get_const_function__DroneCmd_Request__param(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__get_function__DroneCmd_Request__param(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__fetch_function__DroneCmd_Request__param(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__get_const_function__DroneCmd_Request__param(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__assign_function__DroneCmd_Request__param(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__get_function__DroneCmd_Request__param(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__resize_function__DroneCmd_Request__param(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__DroneCmd_Request_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__DroneCmd_Request, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__DroneCmd_Request, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "param",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__DroneCmd_Request, param),  // bytes offset in struct
    NULL,  // default value
    drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__size_function__DroneCmd_Request__param,  // size() function pointer
    drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__get_const_function__DroneCmd_Request__param,  // get_const(index) function pointer
    drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__get_function__DroneCmd_Request__param,  // get(index) function pointer
    drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__fetch_function__DroneCmd_Request__param,  // fetch(index, &value) function pointer
    drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__assign_function__DroneCmd_Request__param,  // assign(index, value) function pointer
    drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__resize_function__DroneCmd_Request__param  // resize(index) function pointer
  },
  {
    "note",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__DroneCmd_Request, note),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmder",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__DroneCmd_Request, cmder),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tgt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__DroneCmd_Request, tgt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__DroneCmd_Request_message_members = {
  "drone_msgs__srv",  // message namespace
  "DroneCmd_Request",  // message name
  6,  // number of fields
  sizeof(drone_msgs__srv__DroneCmd_Request),
  drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__DroneCmd_Request_message_member_array,  // message members
  drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__DroneCmd_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__DroneCmd_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__DroneCmd_Request_message_type_support_handle = {
  0,
  &drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__DroneCmd_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, DroneCmd_Request)() {
  drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__DroneCmd_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__DroneCmd_Request_message_type_support_handle.typesupport_identifier) {
    drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__DroneCmd_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_msgs__srv__DroneCmd_Request__rosidl_typesupport_introspection_c__DroneCmd_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "drone_msgs/srv/detail/drone_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "drone_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "drone_msgs/srv/detail/drone_cmd__functions.h"
// already included above
// #include "drone_msgs/srv/detail/drone_cmd__struct.h"


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_msgs__srv__DroneCmd_Response__rosidl_typesupport_introspection_c__DroneCmd_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_msgs__srv__DroneCmd_Response__init(message_memory);
}

void drone_msgs__srv__DroneCmd_Response__rosidl_typesupport_introspection_c__DroneCmd_Response_fini_function(void * message_memory)
{
  drone_msgs__srv__DroneCmd_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drone_msgs__srv__DroneCmd_Response__rosidl_typesupport_introspection_c__DroneCmd_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__DroneCmd_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__DroneCmd_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_msgs__srv__DroneCmd_Response__rosidl_typesupport_introspection_c__DroneCmd_Response_message_members = {
  "drone_msgs__srv",  // message namespace
  "DroneCmd_Response",  // message name
  2,  // number of fields
  sizeof(drone_msgs__srv__DroneCmd_Response),
  drone_msgs__srv__DroneCmd_Response__rosidl_typesupport_introspection_c__DroneCmd_Response_message_member_array,  // message members
  drone_msgs__srv__DroneCmd_Response__rosidl_typesupport_introspection_c__DroneCmd_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_msgs__srv__DroneCmd_Response__rosidl_typesupport_introspection_c__DroneCmd_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_msgs__srv__DroneCmd_Response__rosidl_typesupport_introspection_c__DroneCmd_Response_message_type_support_handle = {
  0,
  &drone_msgs__srv__DroneCmd_Response__rosidl_typesupport_introspection_c__DroneCmd_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, DroneCmd_Response)() {
  if (!drone_msgs__srv__DroneCmd_Response__rosidl_typesupport_introspection_c__DroneCmd_Response_message_type_support_handle.typesupport_identifier) {
    drone_msgs__srv__DroneCmd_Response__rosidl_typesupport_introspection_c__DroneCmd_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_msgs__srv__DroneCmd_Response__rosidl_typesupport_introspection_c__DroneCmd_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "drone_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "drone_msgs/srv/detail/drone_cmd__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers drone_msgs__srv__detail__drone_cmd__rosidl_typesupport_introspection_c__DroneCmd_service_members = {
  "drone_msgs__srv",  // service namespace
  "DroneCmd",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // drone_msgs__srv__detail__drone_cmd__rosidl_typesupport_introspection_c__DroneCmd_Request_message_type_support_handle,
  NULL  // response message
  // drone_msgs__srv__detail__drone_cmd__rosidl_typesupport_introspection_c__DroneCmd_Response_message_type_support_handle
};

static rosidl_service_type_support_t drone_msgs__srv__detail__drone_cmd__rosidl_typesupport_introspection_c__DroneCmd_service_type_support_handle = {
  0,
  &drone_msgs__srv__detail__drone_cmd__rosidl_typesupport_introspection_c__DroneCmd_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, DroneCmd_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, DroneCmd_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, DroneCmd)() {
  if (!drone_msgs__srv__detail__drone_cmd__rosidl_typesupport_introspection_c__DroneCmd_service_type_support_handle.typesupport_identifier) {
    drone_msgs__srv__detail__drone_cmd__rosidl_typesupport_introspection_c__DroneCmd_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)drone_msgs__srv__detail__drone_cmd__rosidl_typesupport_introspection_c__DroneCmd_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, DroneCmd_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, DroneCmd_Response)()->data;
  }

  return &drone_msgs__srv__detail__drone_cmd__rosidl_typesupport_introspection_c__DroneCmd_service_type_support_handle;
}
