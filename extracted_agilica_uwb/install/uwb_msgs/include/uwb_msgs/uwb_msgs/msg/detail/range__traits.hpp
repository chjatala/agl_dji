// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uwb_msgs:msg/Range.idl
// generated code does not contain a copyright notice

#ifndef UWB_MSGS__MSG__DETAIL__RANGE__TRAITS_HPP_
#define UWB_MSGS__MSG__DETAIL__RANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uwb_msgs/msg/detail/range__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'anchor_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'diagnostics'
#include "uwb_msgs/msg/detail/diagnostics__traits.hpp"

namespace uwb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Range & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: anchorid
  {
    out << "anchorid: ";
    rosidl_generator_traits::value_to_yaml(msg.anchorid, out);
    out << ", ";
  }

  // member: listenerid
  {
    out << "listenerid: ";
    rosidl_generator_traits::value_to_yaml(msg.listenerid, out);
    out << ", ";
  }

  // member: anchor_position
  {
    out << "anchor_position: ";
    to_flow_style_yaml(msg.anchor_position, out);
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
  const Range & msg,
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

  // member: anchorid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anchorid: ";
    rosidl_generator_traits::value_to_yaml(msg.anchorid, out);
    out << "\n";
  }

  // member: listenerid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "listenerid: ";
    rosidl_generator_traits::value_to_yaml(msg.listenerid, out);
    out << "\n";
  }

  // member: anchor_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anchor_position:\n";
    to_block_style_yaml(msg.anchor_position, out, indentation + 2);
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

inline std::string to_yaml(const Range & msg, bool use_flow_style = false)
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

}  // namespace uwb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uwb_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uwb_msgs::msg::Range & msg,
  std::ostream & out, size_t indentation = 0)
{
  uwb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uwb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const uwb_msgs::msg::Range & msg)
{
  return uwb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<uwb_msgs::msg::Range>()
{
  return "uwb_msgs::msg::Range";
}

template<>
inline const char * name<uwb_msgs::msg::Range>()
{
  return "uwb_msgs/msg/Range";
}

template<>
struct has_fixed_size<uwb_msgs::msg::Range>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uwb_msgs::msg::Range>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uwb_msgs::msg::Range>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UWB_MSGS__MSG__DETAIL__RANGE__TRAITS_HPP_
