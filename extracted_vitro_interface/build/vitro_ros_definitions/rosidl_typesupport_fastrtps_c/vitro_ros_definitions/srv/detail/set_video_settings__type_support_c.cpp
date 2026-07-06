// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vitro_ros_definitions:srv/SetVideoSettings.idl
// generated code does not contain a copyright notice
#include "vitro_ros_definitions/srv/detail/set_video_settings__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vitro_ros_definitions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vitro_ros_definitions/srv/detail/set_video_settings__struct.h"
#include "vitro_ros_definitions/srv/detail/set_video_settings__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // camera_video_stream_source_type, multi_spectral_display_mode, multi_spectral_fusion_type
#include "rosidl_runtime_c/string_functions.h"  // camera_video_stream_source_type, multi_spectral_display_mode, multi_spectral_fusion_type

// forward declare type support functions


using _SetVideoSettings_Request__ros_msg_type = vitro_ros_definitions__srv__SetVideoSettings_Request;

static bool _SetVideoSettings_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetVideoSettings_Request__ros_msg_type * ros_message = static_cast<const _SetVideoSettings_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: camera_video_stream_source_type
  {
    const rosidl_runtime_c__String * str = &ros_message->camera_video_stream_source_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: multi_spectral_fusion_type
  {
    const rosidl_runtime_c__String * str = &ros_message->multi_spectral_fusion_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: multi_spectral_display_mode
  {
    const rosidl_runtime_c__String * str = &ros_message->multi_spectral_display_mode;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetVideoSettings_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetVideoSettings_Request__ros_msg_type * ros_message = static_cast<_SetVideoSettings_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: camera_video_stream_source_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->camera_video_stream_source_type.data) {
      rosidl_runtime_c__String__init(&ros_message->camera_video_stream_source_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->camera_video_stream_source_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'camera_video_stream_source_type'\n");
      return false;
    }
  }

  // Field name: multi_spectral_fusion_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->multi_spectral_fusion_type.data) {
      rosidl_runtime_c__String__init(&ros_message->multi_spectral_fusion_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->multi_spectral_fusion_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'multi_spectral_fusion_type'\n");
      return false;
    }
  }

  // Field name: multi_spectral_display_mode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->multi_spectral_display_mode.data) {
      rosidl_runtime_c__String__init(&ros_message->multi_spectral_display_mode);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->multi_spectral_display_mode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'multi_spectral_display_mode'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vitro_ros_definitions
size_t get_serialized_size_vitro_ros_definitions__srv__SetVideoSettings_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetVideoSettings_Request__ros_msg_type * ros_message = static_cast<const _SetVideoSettings_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name camera_video_stream_source_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->camera_video_stream_source_type.size + 1);
  // field.name multi_spectral_fusion_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->multi_spectral_fusion_type.size + 1);
  // field.name multi_spectral_display_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->multi_spectral_display_mode.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetVideoSettings_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vitro_ros_definitions__srv__SetVideoSettings_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vitro_ros_definitions
size_t max_serialized_size_vitro_ros_definitions__srv__SetVideoSettings_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: camera_video_stream_source_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: multi_spectral_fusion_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: multi_spectral_display_mode
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vitro_ros_definitions__srv__SetVideoSettings_Request;
    is_plain =
      (
      offsetof(DataType, multi_spectral_display_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetVideoSettings_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vitro_ros_definitions__srv__SetVideoSettings_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetVideoSettings_Request = {
  "vitro_ros_definitions::srv",
  "SetVideoSettings_Request",
  _SetVideoSettings_Request__cdr_serialize,
  _SetVideoSettings_Request__cdr_deserialize,
  _SetVideoSettings_Request__get_serialized_size,
  _SetVideoSettings_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetVideoSettings_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetVideoSettings_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vitro_ros_definitions, srv, SetVideoSettings_Request)() {
  return &_SetVideoSettings_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "vitro_ros_definitions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "vitro_ros_definitions/srv/detail/set_video_settings__struct.h"
// already included above
// #include "vitro_ros_definitions/srv/detail/set_video_settings__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // status
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // status

// forward declare type support functions


using _SetVideoSettings_Response__ros_msg_type = vitro_ros_definitions__srv__SetVideoSettings_Response;

static bool _SetVideoSettings_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetVideoSettings_Response__ros_msg_type * ros_message = static_cast<const _SetVideoSettings_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const rosidl_runtime_c__String * str = &ros_message->status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _SetVideoSettings_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetVideoSettings_Response__ros_msg_type * ros_message = static_cast<_SetVideoSettings_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status.data) {
      rosidl_runtime_c__String__init(&ros_message->status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vitro_ros_definitions
size_t get_serialized_size_vitro_ros_definitions__srv__SetVideoSettings_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetVideoSettings_Response__ros_msg_type * ros_message = static_cast<const _SetVideoSettings_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _SetVideoSettings_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vitro_ros_definitions__srv__SetVideoSettings_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vitro_ros_definitions
size_t max_serialized_size_vitro_ros_definitions__srv__SetVideoSettings_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = vitro_ros_definitions__srv__SetVideoSettings_Response;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SetVideoSettings_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_vitro_ros_definitions__srv__SetVideoSettings_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetVideoSettings_Response = {
  "vitro_ros_definitions::srv",
  "SetVideoSettings_Response",
  _SetVideoSettings_Response__cdr_serialize,
  _SetVideoSettings_Response__cdr_deserialize,
  _SetVideoSettings_Response__get_serialized_size,
  _SetVideoSettings_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetVideoSettings_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetVideoSettings_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vitro_ros_definitions, srv, SetVideoSettings_Response)() {
  return &_SetVideoSettings_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "vitro_ros_definitions/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vitro_ros_definitions/srv/set_video_settings.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetVideoSettings__callbacks = {
  "vitro_ros_definitions::srv",
  "SetVideoSettings",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vitro_ros_definitions, srv, SetVideoSettings_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vitro_ros_definitions, srv, SetVideoSettings_Response)(),
};

static rosidl_service_type_support_t SetVideoSettings__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetVideoSettings__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vitro_ros_definitions, srv, SetVideoSettings)() {
  return &SetVideoSettings__handle;
}

#if defined(__cplusplus)
}
#endif
