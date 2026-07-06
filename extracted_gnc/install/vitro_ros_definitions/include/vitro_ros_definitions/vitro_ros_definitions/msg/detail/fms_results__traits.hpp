// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vitro_ros_definitions:msg/FMSResults.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULTS__TRAITS_HPP_
#define VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vitro_ros_definitions/msg/detail/fms_results__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'results'
#include "vitro_ros_definitions/msg/detail/fms_result__traits.hpp"

namespace vitro_ros_definitions
{

namespace msg
{

inline void to_flow_style_yaml(
  const FMSResults & msg,
  std::ostream & out)
{
  out << "{";
  // member: results
  {
    if (msg.results.size() == 0) {
      out << "results: []";
    } else {
      out << "results: [";
      size_t pending_items = msg.results.size();
      for (auto item : msg.results) {
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
  const FMSResults & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: results
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.results.size() == 0) {
      out << "results: []\n";
    } else {
      out << "results:\n";
      for (auto item : msg.results) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FMSResults & msg, bool use_flow_style = false)
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
  const vitro_ros_definitions::msg::FMSResults & msg,
  std::ostream & out, size_t indentation = 0)
{
  vitro_ros_definitions::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vitro_ros_definitions::msg::to_yaml() instead")]]
inline std::string to_yaml(const vitro_ros_definitions::msg::FMSResults & msg)
{
  return vitro_ros_definitions::msg::to_yaml(msg);
}

template<>
inline const char * data_type<vitro_ros_definitions::msg::FMSResults>()
{
  return "vitro_ros_definitions::msg::FMSResults";
}

template<>
inline const char * name<vitro_ros_definitions::msg::FMSResults>()
{
  return "vitro_ros_definitions/msg/FMSResults";
}

template<>
struct has_fixed_size<vitro_ros_definitions::msg::FMSResults>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vitro_ros_definitions::msg::FMSResults>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vitro_ros_definitions::msg::FMSResults>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULTS__TRAITS_HPP_
