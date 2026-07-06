// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wifi_msgs:msg/RangeArrayRSSI.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__RANGE_ARRAY_RSSI__TRAITS_HPP_
#define WIFI_MSGS__MSG__DETAIL__RANGE_ARRAY_RSSI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wifi_msgs/msg/detail/range_array_rssi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'tag_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'ranges'
#include "wifi_msgs/msg/detail/range_rssi__traits.hpp"

namespace wifi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RangeArrayRSSI & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tag_mac
  {
    out << "tag_mac: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_mac, out);
    out << ", ";
  }

  // member: tag_position
  {
    out << "tag_position: ";
    to_flow_style_yaml(msg.tag_position, out);
    out << ", ";
  }

  // member: ranges
  {
    if (msg.ranges.size() == 0) {
      out << "ranges: []";
    } else {
      out << "ranges: [";
      size_t pending_items = msg.ranges.size();
      for (auto item : msg.ranges) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RangeArrayRSSI & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: tag_mac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag_mac: ";
    rosidl_generator_traits::value_to_yaml(msg.tag_mac, out);
    out << "\n";
  }

  // member: tag_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tag_position:\n";
    to_block_style_yaml(msg.tag_position, out, indentation + 2);
  }

  // member: ranges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ranges.size() == 0) {
      out << "ranges: []\n";
    } else {
      out << "ranges:\n";
      for (auto item : msg.ranges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RangeArrayRSSI & msg, bool use_flow_style = false)
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
  const wifi_msgs::msg::RangeArrayRSSI & msg,
  std::ostream & out, size_t indentation = 0)
{
  wifi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wifi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wifi_msgs::msg::RangeArrayRSSI & msg)
{
  return wifi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wifi_msgs::msg::RangeArrayRSSI>()
{
  return "wifi_msgs::msg::RangeArrayRSSI";
}

template<>
inline const char * name<wifi_msgs::msg::RangeArrayRSSI>()
{
  return "wifi_msgs/msg/RangeArrayRSSI";
}

template<>
struct has_fixed_size<wifi_msgs::msg::RangeArrayRSSI>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<wifi_msgs::msg::RangeArrayRSSI>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<wifi_msgs::msg::RangeArrayRSSI>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WIFI_MSGS__MSG__DETAIL__RANGE_ARRAY_RSSI__TRAITS_HPP_
