// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vitro_ros_definitions:msg/FMSResult.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULT__TRAITS_HPP_
#define VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vitro_ros_definitions/msg/detail/fms_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'img'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace vitro_ros_definitions
{

namespace msg
{

inline void to_flow_style_yaml(
  const FMSResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: id_confidence
  {
    out << "id_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.id_confidence, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: img
  {
    out << "img: ";
    to_flow_style_yaml(msg.img, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FMSResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: id_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.id_confidence, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: img
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "img:\n";
    to_block_style_yaml(msg.img, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FMSResult & msg, bool use_flow_style = false)
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

}  // namespace vitro_ros_definitions

namespace rosidl_generator_traits
{

[[deprecated("use vitro_ros_definitions::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vitro_ros_definitions::msg::FMSResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  vitro_ros_definitions::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vitro_ros_definitions::msg::to_yaml() instead")]]
inline std::string to_yaml(const vitro_ros_definitions::msg::FMSResult & msg)
{
  return vitro_ros_definitions::msg::to_yaml(msg);
}

template<>
inline const char * data_type<vitro_ros_definitions::msg::FMSResult>()
{
  return "vitro_ros_definitions::msg::FMSResult";
}

template<>
inline const char * name<vitro_ros_definitions::msg::FMSResult>()
{
  return "vitro_ros_definitions/msg/FMSResult";
}

template<>
struct has_fixed_size<vitro_ros_definitions::msg::FMSResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vitro_ros_definitions::msg::FMSResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vitro_ros_definitions::msg::FMSResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULT__TRAITS_HPP_
