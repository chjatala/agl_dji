// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
#define DRONE_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace drone_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Waypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: max_vel
  {
    out << "max_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.max_vel, out);
    out << ", ";
  }

  // member: max_yaw_rate
  {
    out << "max_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_yaw_rate, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: param
  {
    if (msg.param.size() == 0) {
      out << "param: []";
    } else {
      out << "param: [";
      size_t pending_items = msg.param.size();
      for (auto item : msg.param) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: max_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.max_vel, out);
    out << "\n";
  }

  // member: max_yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_yaw_rate, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: param
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.param.size() == 0) {
      out << "param: []\n";
    } else {
      out << "param:\n";
      for (auto item : msg.param) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Waypoint & msg, bool use_flow_style = false)
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
  const drone_msgs::msg::Waypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::msg::Waypoint & msg)
{
  return drone_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::msg::Waypoint>()
{
  return "drone_msgs::msg::Waypoint";
}

template<>
inline const char * name<drone_msgs::msg::Waypoint>()
{
  return "drone_msgs/msg/Waypoint";
}

template<>
struct has_fixed_size<drone_msgs::msg::Waypoint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<drone_msgs::msg::Waypoint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<drone_msgs::msg::Waypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_MSGS__MSG__DETAIL__WAYPOINT__TRAITS_HPP_
