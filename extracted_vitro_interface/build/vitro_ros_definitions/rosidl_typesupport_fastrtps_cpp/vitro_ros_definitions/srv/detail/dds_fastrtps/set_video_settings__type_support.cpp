// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from vitro_ros_definitions:srv/SetVideoSettings.idl
// generated code does not contain a copyright notice
#include "vitro_ros_definitions/srv/detail/set_video_settings__rosidl_typesupport_fastrtps_cpp.hpp"
#include "vitro_ros_definitions/srv/detail/set_video_settings__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace vitro_ros_definitions
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
cdr_serialize(
  const vitro_ros_definitions::srv::SetVideoSettings_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: camera_video_stream_source_type
  cdr << ros_message.camera_video_stream_source_type;
  // Member: multi_spectral_fusion_type
  cdr << ros_message.multi_spectral_fusion_type;
  // Member: multi_spectral_display_mode
  cdr << ros_message.multi_spectral_display_mode;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vitro_ros_definitions::srv::SetVideoSettings_Request & ros_message)
{
  // Member: camera_video_stream_source_type
  cdr >> ros_message.camera_video_stream_source_type;

  // Member: multi_spectral_fusion_type
  cdr >> ros_message.multi_spectral_fusion_type;

  // Member: multi_spectral_display_mode
  cdr >> ros_message.multi_spectral_display_mode;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
get_serialized_size(
  const vitro_ros_definitions::srv::SetVideoSettings_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: camera_video_stream_source_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.camera_video_stream_source_type.size() + 1);
  // Member: multi_spectral_fusion_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.multi_spectral_fusion_type.size() + 1);
  // Member: multi_spectral_display_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.multi_spectral_display_mode.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
max_serialized_size_SetVideoSettings_Request(
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


  // Member: camera_video_stream_source_type
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

  // Member: multi_spectral_fusion_type
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

  // Member: multi_spectral_display_mode
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
    using DataType = vitro_ros_definitions::srv::SetVideoSettings_Request;
    is_plain =
      (
      offsetof(DataType, multi_spectral_display_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetVideoSettings_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const vitro_ros_definitions::srv::SetVideoSettings_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetVideoSettings_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<vitro_ros_definitions::srv::SetVideoSettings_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetVideoSettings_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const vitro_ros_definitions::srv::SetVideoSettings_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetVideoSettings_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetVideoSettings_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetVideoSettings_Request__callbacks = {
  "vitro_ros_definitions::srv",
  "SetVideoSettings_Request",
  _SetVideoSettings_Request__cdr_serialize,
  _SetVideoSettings_Request__cdr_deserialize,
  _SetVideoSettings_Request__get_serialized_size,
  _SetVideoSettings_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetVideoSettings_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetVideoSettings_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace vitro_ros_definitions

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_vitro_ros_definitions
const rosidl_message_type_support_t *
get_message_type_support_handle<vitro_ros_definitions::srv::SetVideoSettings_Request>()
{
  return &vitro_ros_definitions::srv::typesupport_fastrtps_cpp::_SetVideoSettings_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vitro_ros_definitions, srv, SetVideoSettings_Request)() {
  return &vitro_ros_definitions::srv::typesupport_fastrtps_cpp::_SetVideoSettings_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace vitro_ros_definitions
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
cdr_serialize(
  const vitro_ros_definitions::srv::SetVideoSettings_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << ros_message.status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  vitro_ros_definitions::srv::SetVideoSettings_Response & ros_message)
{
  // Member: status
  cdr >> ros_message.status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
get_serialized_size(
  const vitro_ros_definitions::srv::SetVideoSettings_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.status.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_vitro_ros_definitions
max_serialized_size_SetVideoSettings_Response(
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


  // Member: status
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
    using DataType = vitro_ros_definitions::srv::SetVideoSettings_Response;
    is_plain =
      (
      offsetof(DataType, status) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetVideoSettings_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const vitro_ros_definitions::srv::SetVideoSettings_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetVideoSettings_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<vitro_ros_definitions::srv::SetVideoSettings_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetVideoSettings_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const vitro_ros_definitions::srv::SetVideoSettings_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetVideoSettings_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetVideoSettings_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetVideoSettings_Response__callbacks = {
  "vitro_ros_definitions::srv",
  "SetVideoSettings_Response",
  _SetVideoSettings_Response__cdr_serialize,
  _SetVideoSettings_Response__cdr_deserialize,
  _SetVideoSettings_Response__get_serialized_size,
  _SetVideoSettings_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetVideoSettings_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetVideoSettings_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace vitro_ros_definitions

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_vitro_ros_definitions
const rosidl_message_type_support_t *
get_message_type_support_handle<vitro_ros_definitions::srv::SetVideoSettings_Response>()
{
  return &vitro_ros_definitions::srv::typesupport_fastrtps_cpp::_SetVideoSettings_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vitro_ros_definitions, srv, SetVideoSettings_Response)() {
  return &vitro_ros_definitions::srv::typesupport_fastrtps_cpp::_SetVideoSettings_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace vitro_ros_definitions
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetVideoSettings__callbacks = {
  "vitro_ros_definitions::srv",
  "SetVideoSettings",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vitro_ros_definitions, srv, SetVideoSettings_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vitro_ros_definitions, srv, SetVideoSettings_Response)(),
};

static rosidl_service_type_support_t _SetVideoSettings__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetVideoSettings__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace vitro_ros_definitions

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_vitro_ros_definitions
const rosidl_service_type_support_t *
get_service_type_support_handle<vitro_ros_definitions::srv::SetVideoSettings>()
{
  return &vitro_ros_definitions::srv::typesupport_fastrtps_cpp::_SetVideoSettings__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, vitro_ros_definitions, srv, SetVideoSettings)() {
  return &vitro_ros_definitions::srv::typesupport_fastrtps_cpp::_SetVideoSettings__handle;
}

#ifdef __cplusplus
}
#endif
