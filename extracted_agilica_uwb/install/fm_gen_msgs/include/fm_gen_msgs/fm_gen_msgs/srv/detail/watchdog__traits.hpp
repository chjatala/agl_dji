// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fm_gen_msgs:srv/Watchdog.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__SRV__DETAIL__WATCHDOG__TRAITS_HPP_
#define FM_GEN_MSGS__SRV__DETAIL__WATCHDOG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fm_gen_msgs/srv/detail/watchdog__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fm_gen_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Watchdog_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Watchdog_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Watchdog_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace fm_gen_msgs

namespace rosidl_generator_traits
{

[[deprecated("use fm_gen_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fm_gen_msgs::srv::Watchdog_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  fm_gen_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fm_gen_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const fm_gen_msgs::srv::Watchdog_Request & msg)
{
  return fm_gen_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fm_gen_msgs::srv::Watchdog_Request>()
{
  return "fm_gen_msgs::srv::Watchdog_Request";
}

template<>
inline const char * name<fm_gen_msgs::srv::Watchdog_Request>()
{
  return "fm_gen_msgs/srv/Watchdog_Request";
}

template<>
struct has_fixed_size<fm_gen_msgs::srv::Watchdog_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fm_gen_msgs::srv::Watchdog_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fm_gen_msgs::srv::Watchdog_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'diagnostic_status'
#include "fm_gen_msgs/msg/detail/diagnostic_array__traits.hpp"

namespace fm_gen_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Watchdog_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: diagnostic_status
  {
    out << "diagnostic_status: ";
    to_flow_style_yaml(msg.diagnostic_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Watchdog_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: diagnostic_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diagnostic_status:\n";
    to_block_style_yaml(msg.diagnostic_status, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Watchdog_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace fm_gen_msgs

namespace rosidl_generator_traits
{

[[deprecated("use fm_gen_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fm_gen_msgs::srv::Watchdog_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  fm_gen_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fm_gen_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const fm_gen_msgs::srv::Watchdog_Response & msg)
{
  return fm_gen_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<fm_gen_msgs::srv::Watchdog_Response>()
{
  return "fm_gen_msgs::srv::Watchdog_Response";
}

template<>
inline const char * name<fm_gen_msgs::srv::Watchdog_Response>()
{
  return "fm_gen_msgs/srv/Watchdog_Response";
}

template<>
struct has_fixed_size<fm_gen_msgs::srv::Watchdog_Response>
  : std::integral_constant<bool, has_fixed_size<fm_gen_msgs::msg::DiagnosticArray>::value> {};

template<>
struct has_bounded_size<fm_gen_msgs::srv::Watchdog_Response>
  : std::integral_constant<bool, has_bounded_size<fm_gen_msgs::msg::DiagnosticArray>::value> {};

template<>
struct is_message<fm_gen_msgs::srv::Watchdog_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<fm_gen_msgs::srv::Watchdog>()
{
  return "fm_gen_msgs::srv::Watchdog";
}

template<>
inline const char * name<fm_gen_msgs::srv::Watchdog>()
{
  return "fm_gen_msgs/srv/Watchdog";
}

template<>
struct has_fixed_size<fm_gen_msgs::srv::Watchdog>
  : std::integral_constant<
    bool,
    has_fixed_size<fm_gen_msgs::srv::Watchdog_Request>::value &&
    has_fixed_size<fm_gen_msgs::srv::Watchdog_Response>::value
  >
{
};

template<>
struct has_bounded_size<fm_gen_msgs::srv::Watchdog>
  : std::integral_constant<
    bool,
    has_bounded_size<fm_gen_msgs::srv::Watchdog_Request>::value &&
    has_bounded_size<fm_gen_msgs::srv::Watchdog_Response>::value
  >
{
};

template<>
struct is_service<fm_gen_msgs::srv::Watchdog>
  : std::true_type
{
};

template<>
struct is_service_request<fm_gen_msgs::srv::Watchdog_Request>
  : std::true_type
{
};

template<>
struct is_service_response<fm_gen_msgs::srv::Watchdog_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // FM_GEN_MSGS__SRV__DETAIL__WATCHDOG__TRAITS_HPP_
