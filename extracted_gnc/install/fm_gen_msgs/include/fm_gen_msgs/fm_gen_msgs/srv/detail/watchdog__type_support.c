// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fm_gen_msgs:srv/Watchdog.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fm_gen_msgs/srv/detail/watchdog__rosidl_typesupport_introspection_c.h"
#include "fm_gen_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fm_gen_msgs/srv/detail/watchdog__functions.h"
#include "fm_gen_msgs/srv/detail/watchdog__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void fm_gen_msgs__srv__Watchdog_Request__rosidl_typesupport_introspection_c__Watchdog_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fm_gen_msgs__srv__Watchdog_Request__init(message_memory);
}

void fm_gen_msgs__srv__Watchdog_Request__rosidl_typesupport_introspection_c__Watchdog_Request_fini_function(void * message_memory)
{
  fm_gen_msgs__srv__Watchdog_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fm_gen_msgs__srv__Watchdog_Request__rosidl_typesupport_introspection_c__Watchdog_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__srv__Watchdog_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fm_gen_msgs__srv__Watchdog_Request__rosidl_typesupport_introspection_c__Watchdog_Request_message_members = {
  "fm_gen_msgs__srv",  // message namespace
  "Watchdog_Request",  // message name
  1,  // number of fields
  sizeof(fm_gen_msgs__srv__Watchdog_Request),
  fm_gen_msgs__srv__Watchdog_Request__rosidl_typesupport_introspection_c__Watchdog_Request_message_member_array,  // message members
  fm_gen_msgs__srv__Watchdog_Request__rosidl_typesupport_introspection_c__Watchdog_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  fm_gen_msgs__srv__Watchdog_Request__rosidl_typesupport_introspection_c__Watchdog_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fm_gen_msgs__srv__Watchdog_Request__rosidl_typesupport_introspection_c__Watchdog_Request_message_type_support_handle = {
  0,
  &fm_gen_msgs__srv__Watchdog_Request__rosidl_typesupport_introspection_c__Watchdog_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fm_gen_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, srv, Watchdog_Request)() {
  if (!fm_gen_msgs__srv__Watchdog_Request__rosidl_typesupport_introspection_c__Watchdog_Request_message_type_support_handle.typesupport_identifier) {
    fm_gen_msgs__srv__Watchdog_Request__rosidl_typesupport_introspection_c__Watchdog_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fm_gen_msgs__srv__Watchdog_Request__rosidl_typesupport_introspection_c__Watchdog_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "fm_gen_msgs/srv/detail/watchdog__rosidl_typesupport_introspection_c.h"
// already included above
// #include "fm_gen_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "fm_gen_msgs/srv/detail/watchdog__functions.h"
// already included above
// #include "fm_gen_msgs/srv/detail/watchdog__struct.h"


// Include directives for member types
// Member `diagnostic_status`
#include "fm_gen_msgs/msg/diagnostic_array.h"
// Member `diagnostic_status`
#include "fm_gen_msgs/msg/detail/diagnostic_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fm_gen_msgs__srv__Watchdog_Response__rosidl_typesupport_introspection_c__Watchdog_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fm_gen_msgs__srv__Watchdog_Response__init(message_memory);
}

void fm_gen_msgs__srv__Watchdog_Response__rosidl_typesupport_introspection_c__Watchdog_Response_fini_function(void * message_memory)
{
  fm_gen_msgs__srv__Watchdog_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fm_gen_msgs__srv__Watchdog_Response__rosidl_typesupport_introspection_c__Watchdog_Response_message_member_array[1] = {
  {
    "diagnostic_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fm_gen_msgs__srv__Watchdog_Response, diagnostic_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fm_gen_msgs__srv__Watchdog_Response__rosidl_typesupport_introspection_c__Watchdog_Response_message_members = {
  "fm_gen_msgs__srv",  // message namespace
  "Watchdog_Response",  // message name
  1,  // number of fields
  sizeof(fm_gen_msgs__srv__Watchdog_Response),
  fm_gen_msgs__srv__Watchdog_Response__rosidl_typesupport_introspection_c__Watchdog_Response_message_member_array,  // message members
  fm_gen_msgs__srv__Watchdog_Response__rosidl_typesupport_introspection_c__Watchdog_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  fm_gen_msgs__srv__Watchdog_Response__rosidl_typesupport_introspection_c__Watchdog_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fm_gen_msgs__srv__Watchdog_Response__rosidl_typesupport_introspection_c__Watchdog_Response_message_type_support_handle = {
  0,
  &fm_gen_msgs__srv__Watchdog_Response__rosidl_typesupport_introspection_c__Watchdog_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fm_gen_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, srv, Watchdog_Response)() {
  fm_gen_msgs__srv__Watchdog_Response__rosidl_typesupport_introspection_c__Watchdog_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, msg, DiagnosticArray)();
  if (!fm_gen_msgs__srv__Watchdog_Response__rosidl_typesupport_introspection_c__Watchdog_Response_message_type_support_handle.typesupport_identifier) {
    fm_gen_msgs__srv__Watchdog_Response__rosidl_typesupport_introspection_c__Watchdog_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fm_gen_msgs__srv__Watchdog_Response__rosidl_typesupport_introspection_c__Watchdog_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "fm_gen_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "fm_gen_msgs/srv/detail/watchdog__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers fm_gen_msgs__srv__detail__watchdog__rosidl_typesupport_introspection_c__Watchdog_service_members = {
  "fm_gen_msgs__srv",  // service namespace
  "Watchdog",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // fm_gen_msgs__srv__detail__watchdog__rosidl_typesupport_introspection_c__Watchdog_Request_message_type_support_handle,
  NULL  // response message
  // fm_gen_msgs__srv__detail__watchdog__rosidl_typesupport_introspection_c__Watchdog_Response_message_type_support_handle
};

static rosidl_service_type_support_t fm_gen_msgs__srv__detail__watchdog__rosidl_typesupport_introspection_c__Watchdog_service_type_support_handle = {
  0,
  &fm_gen_msgs__srv__detail__watchdog__rosidl_typesupport_introspection_c__Watchdog_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, srv, Watchdog_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, srv, Watchdog_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fm_gen_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, srv, Watchdog)() {
  if (!fm_gen_msgs__srv__detail__watchdog__rosidl_typesupport_introspection_c__Watchdog_service_type_support_handle.typesupport_identifier) {
    fm_gen_msgs__srv__detail__watchdog__rosidl_typesupport_introspection_c__Watchdog_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)fm_gen_msgs__srv__detail__watchdog__rosidl_typesupport_introspection_c__Watchdog_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, srv, Watchdog_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fm_gen_msgs, srv, Watchdog_Response)()->data;
  }

  return &fm_gen_msgs__srv__detail__watchdog__rosidl_typesupport_introspection_c__Watchdog_service_type_support_handle;
}
