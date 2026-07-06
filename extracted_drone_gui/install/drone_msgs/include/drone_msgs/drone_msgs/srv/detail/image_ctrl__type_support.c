// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from drone_msgs:srv/ImageCtrl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "drone_msgs/srv/detail/image_ctrl__rosidl_typesupport_introspection_c.h"
#include "drone_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "drone_msgs/srv/detail/image_ctrl__functions.h"
#include "drone_msgs/srv/detail/image_ctrl__struct.h"


// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void drone_msgs__srv__ImageCtrl_Request__rosidl_typesupport_introspection_c__ImageCtrl_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_msgs__srv__ImageCtrl_Request__init(message_memory);
}

void drone_msgs__srv__ImageCtrl_Request__rosidl_typesupport_introspection_c__ImageCtrl_Request_fini_function(void * message_memory)
{
  drone_msgs__srv__ImageCtrl_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drone_msgs__srv__ImageCtrl_Request__rosidl_typesupport_introspection_c__ImageCtrl_Request_message_member_array[6] = {
  {
    "enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__ImageCtrl_Request, enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__ImageCtrl_Request, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "next_picture_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__ImageCtrl_Request, next_picture_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "overlap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__ImageCtrl_Request, overlap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__ImageCtrl_Request, fov),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "picture_plane_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__ImageCtrl_Request, picture_plane_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_msgs__srv__ImageCtrl_Request__rosidl_typesupport_introspection_c__ImageCtrl_Request_message_members = {
  "drone_msgs__srv",  // message namespace
  "ImageCtrl_Request",  // message name
  6,  // number of fields
  sizeof(drone_msgs__srv__ImageCtrl_Request),
  drone_msgs__srv__ImageCtrl_Request__rosidl_typesupport_introspection_c__ImageCtrl_Request_message_member_array,  // message members
  drone_msgs__srv__ImageCtrl_Request__rosidl_typesupport_introspection_c__ImageCtrl_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_msgs__srv__ImageCtrl_Request__rosidl_typesupport_introspection_c__ImageCtrl_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_msgs__srv__ImageCtrl_Request__rosidl_typesupport_introspection_c__ImageCtrl_Request_message_type_support_handle = {
  0,
  &drone_msgs__srv__ImageCtrl_Request__rosidl_typesupport_introspection_c__ImageCtrl_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, ImageCtrl_Request)() {
  if (!drone_msgs__srv__ImageCtrl_Request__rosidl_typesupport_introspection_c__ImageCtrl_Request_message_type_support_handle.typesupport_identifier) {
    drone_msgs__srv__ImageCtrl_Request__rosidl_typesupport_introspection_c__ImageCtrl_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_msgs__srv__ImageCtrl_Request__rosidl_typesupport_introspection_c__ImageCtrl_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "drone_msgs/srv/detail/image_ctrl__rosidl_typesupport_introspection_c.h"
// already included above
// #include "drone_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "drone_msgs/srv/detail/image_ctrl__functions.h"
// already included above
// #include "drone_msgs/srv/detail/image_ctrl__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void drone_msgs__srv__ImageCtrl_Response__rosidl_typesupport_introspection_c__ImageCtrl_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  drone_msgs__srv__ImageCtrl_Response__init(message_memory);
}

void drone_msgs__srv__ImageCtrl_Response__rosidl_typesupport_introspection_c__ImageCtrl_Response_fini_function(void * message_memory)
{
  drone_msgs__srv__ImageCtrl_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember drone_msgs__srv__ImageCtrl_Response__rosidl_typesupport_introspection_c__ImageCtrl_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(drone_msgs__srv__ImageCtrl_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers drone_msgs__srv__ImageCtrl_Response__rosidl_typesupport_introspection_c__ImageCtrl_Response_message_members = {
  "drone_msgs__srv",  // message namespace
  "ImageCtrl_Response",  // message name
  1,  // number of fields
  sizeof(drone_msgs__srv__ImageCtrl_Response),
  drone_msgs__srv__ImageCtrl_Response__rosidl_typesupport_introspection_c__ImageCtrl_Response_message_member_array,  // message members
  drone_msgs__srv__ImageCtrl_Response__rosidl_typesupport_introspection_c__ImageCtrl_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  drone_msgs__srv__ImageCtrl_Response__rosidl_typesupport_introspection_c__ImageCtrl_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t drone_msgs__srv__ImageCtrl_Response__rosidl_typesupport_introspection_c__ImageCtrl_Response_message_type_support_handle = {
  0,
  &drone_msgs__srv__ImageCtrl_Response__rosidl_typesupport_introspection_c__ImageCtrl_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, ImageCtrl_Response)() {
  if (!drone_msgs__srv__ImageCtrl_Response__rosidl_typesupport_introspection_c__ImageCtrl_Response_message_type_support_handle.typesupport_identifier) {
    drone_msgs__srv__ImageCtrl_Response__rosidl_typesupport_introspection_c__ImageCtrl_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &drone_msgs__srv__ImageCtrl_Response__rosidl_typesupport_introspection_c__ImageCtrl_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "drone_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "drone_msgs/srv/detail/image_ctrl__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers drone_msgs__srv__detail__image_ctrl__rosidl_typesupport_introspection_c__ImageCtrl_service_members = {
  "drone_msgs__srv",  // service namespace
  "ImageCtrl",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // drone_msgs__srv__detail__image_ctrl__rosidl_typesupport_introspection_c__ImageCtrl_Request_message_type_support_handle,
  NULL  // response message
  // drone_msgs__srv__detail__image_ctrl__rosidl_typesupport_introspection_c__ImageCtrl_Response_message_type_support_handle
};

static rosidl_service_type_support_t drone_msgs__srv__detail__image_ctrl__rosidl_typesupport_introspection_c__ImageCtrl_service_type_support_handle = {
  0,
  &drone_msgs__srv__detail__image_ctrl__rosidl_typesupport_introspection_c__ImageCtrl_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, ImageCtrl_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, ImageCtrl_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_drone_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, ImageCtrl)() {
  if (!drone_msgs__srv__detail__image_ctrl__rosidl_typesupport_introspection_c__ImageCtrl_service_type_support_handle.typesupport_identifier) {
    drone_msgs__srv__detail__image_ctrl__rosidl_typesupport_introspection_c__ImageCtrl_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)drone_msgs__srv__detail__image_ctrl__rosidl_typesupport_introspection_c__ImageCtrl_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, ImageCtrl_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, drone_msgs, srv, ImageCtrl_Response)()->data;
  }

  return &drone_msgs__srv__detail__image_ctrl__rosidl_typesupport_introspection_c__ImageCtrl_service_type_support_handle;
}
