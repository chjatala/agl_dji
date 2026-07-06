// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:msg/VelYawCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__VEL_YAW_CMD__TRAITS_HPP_
#define DRONE_MSGS__MSG__DETAIL__VEL_YAW_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/msg/detail/vel_yaw_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace drone_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelYawCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelYawCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelYawCmd & msg, bool use_flow_style = false)
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
  const drone_msgs::msg::VelYawCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::msg::VelYawCmd & msg)
{
  return drone_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::msg::VelYawCmd>()
{
  return "drone_msgs::msg::VelYawCmd";
}

template<>
inline const char * name<drone_msgs::msg::VelYawCmd>()
{
  return "drone_msgs/msg/VelYawCmd";
}

template<>
struct has_fixed_size<drone_msgs::msg::VelYawCmd>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<drone_msgs::msg::VelYawCmd>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<drone_msgs::msg::VelYawCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_MSGS__MSG__DETAIL__VEL_YAW_CMD__TRAITS_HPP_
