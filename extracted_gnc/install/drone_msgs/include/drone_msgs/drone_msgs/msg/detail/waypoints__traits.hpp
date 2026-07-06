// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:msg/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__WAYPOINTS__TRAITS_HPP_
#define DRONE_MSGS__MSG__DETAIL__WAYPOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/msg/detail/waypoints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'current_wp'
// Member 'previous_wp'
#include "drone_msgs/msg/detail/waypoint__traits.hpp"

namespace drone_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Waypoints & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_wp
  {
    out << "current_wp: ";
    to_flow_style_yaml(msg.current_wp, out);
    out << ", ";
  }

  // member: previous_wp
  {
    out << "previous_wp: ";
    to_flow_style_yaml(msg.previous_wp, out);
    out << ", ";
  }

  // member: last_wp_reached
  {
    out << "last_wp_reached: ";
    rosidl_generator_traits::value_to_yaml(msg.last_wp_reached, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Waypoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_wp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_wp:\n";
    to_block_style_yaml(msg.current_wp, out, indentation + 2);
  }

  // member: previous_wp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "previous_wp:\n";
    to_block_style_yaml(msg.previous_wp, out, indentation + 2);
  }

  // member: last_wp_reached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_wp_reached: ";
    rosidl_generator_traits::value_to_yaml(msg.last_wp_reached, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Waypoints & msg, bool use_flow_style = false)
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

}  // namespace drone_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drone_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_msgs::msg::Waypoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::msg::Waypoints & msg)
{
  return drone_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::msg::Waypoints>()
{
  return "drone_msgs::msg::Waypoints";
}

template<>
inline const char * name<drone_msgs::msg::Waypoints>()
{
  return "drone_msgs/msg/Waypoints";
}

template<>
struct has_fixed_size<drone_msgs::msg::Waypoints>
  : std::integral_constant<bool, has_fixed_size<drone_msgs::msg::Waypoint>::value> {};

template<>
struct has_bounded_size<drone_msgs::msg::Waypoints>
  : std::integral_constant<bool, has_bounded_size<drone_msgs::msg::Waypoint>::value> {};

template<>
struct is_message<drone_msgs::msg::Waypoints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_MSGS__MSG__DETAIL__WAYPOINTS__TRAITS_HPP_
