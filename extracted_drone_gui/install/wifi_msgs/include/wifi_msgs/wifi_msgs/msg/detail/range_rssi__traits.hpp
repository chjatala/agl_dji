// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wifi_msgs:msg/RangeRSSI.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__RANGE_RSSI__TRAITS_HPP_
#define WIFI_MSGS__MSG__DETAIL__RANGE_RSSI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wifi_msgs/msg/detail/range_rssi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'ap_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'diagnostics'
#include "wifi_msgs/msg/detail/diagnostics_rssi__traits.hpp"

namespace wifi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RangeRSSI & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: ap_mac
  {
    out << "ap_mac: ";
    rosidl_generator_traits::value_to_yaml(msg.ap_mac, out);
    out << ", ";
  }

  // member: valid_ap_position
  {
    out << "valid_ap_position: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_ap_position, out);
    out << ", ";
  }

  // member: ap_position
  {
    out << "ap_position: ";
    to_flow_style_yaml(msg.ap_position, out);
    out << ", ";
  }

  // member: valid_range
  {
    out << "valid_range: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_range, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: diagnostics
  {
    out << "diagnostics: ";
    to_flow_style_yaml(msg.diagnostics, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RangeRSSI & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: ap_mac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ap_mac: ";
    rosidl_generator_traits::value_to_yaml(msg.ap_mac, out);
    out << "\n";
  }

  // member: valid_ap_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_ap_position: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_ap_position, out);
    out << "\n";
  }

  // member: ap_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ap_position:\n";
    to_block_style_yaml(msg.ap_position, out, indentation + 2);
  }

  // member: valid_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_range: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_range, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: diagnostics
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diagnostics:\n";
    to_block_style_yaml(msg.diagnostics, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RangeRSSI & msg, bool use_flow_style = false)
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
  const wifi_msgs::msg::RangeRSSI & msg,
  std::ostream & out, size_t indentation = 0)
{
  wifi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wifi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wifi_msgs::msg::RangeRSSI & msg)
{
  return wifi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wifi_msgs::msg::RangeRSSI>()
{
  return "wifi_msgs::msg::RangeRSSI";
}

template<>
inline const char * name<wifi_msgs::msg::RangeRSSI>()
{
  return "wifi_msgs/msg/RangeRSSI";
}

template<>
struct has_fixed_size<wifi_msgs::msg::RangeRSSI>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wifi_msgs::msg::RangeRSSI>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wifi_msgs::msg::RangeRSSI>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WIFI_MSGS__MSG__DETAIL__RANGE_RSSI__TRAITS_HPP_
