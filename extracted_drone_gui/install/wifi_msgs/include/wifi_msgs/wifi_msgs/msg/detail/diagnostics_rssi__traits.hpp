// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wifi_msgs:msg/DiagnosticsRSSI.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RSSI__TRAITS_HPP_
#define WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RSSI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wifi_msgs/msg/detail/diagnostics_rssi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wifi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DiagnosticsRSSI & msg,
  std::ostream & out)
{
  out << "{";
  // member: rssi
  {
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << ", ";
  }

  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: n
  {
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DiagnosticsRSSI & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rssi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << "\n";
  }

  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n: ";
    rosidl_generator_traits::value_to_yaml(msg.n, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DiagnosticsRSSI & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace wifi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wifi_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wifi_msgs::msg::DiagnosticsRSSI & msg,
  std::ostream & out, size_t indentation = 0)
{
  wifi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wifi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wifi_msgs::msg::DiagnosticsRSSI & msg)
{
  return wifi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wifi_msgs::msg::DiagnosticsRSSI>()
{
  return "wifi_msgs::msg::DiagnosticsRSSI";
}

template<>
inline const char * name<wifi_msgs::msg::DiagnosticsRSSI>()
{
  return "wifi_msgs/msg/DiagnosticsRSSI";
}

template<>
struct has_fixed_size<wifi_msgs::msg::DiagnosticsRSSI>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wifi_msgs::msg::DiagnosticsRSSI>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wifi_msgs::msg::DiagnosticsRSSI>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RSSI__TRAITS_HPP_
