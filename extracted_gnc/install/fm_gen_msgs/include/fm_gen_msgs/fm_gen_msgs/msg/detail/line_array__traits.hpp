// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fm_gen_msgs:msg/LineArray.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__LINE_ARRAY__TRAITS_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__LINE_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fm_gen_msgs/msg/detail/line_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'lines'
#include "fm_gen_msgs/msg/detail/line__traits.hpp"

namespace fm_gen_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LineArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: num_detection
  {
    out << "num_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.num_detection, out);
    out << ", ";
  }

  // member: camera_id
  {
    out << "camera_id: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_id, out);
    out << ", ";
  }

  // member: time_captured
  {
    out << "time_captured: ";
    rosidl_generator_traits::value_to_yaml(msg.time_captured, out);
    out << ", ";
  }

  // member: lines
  {
    if (msg.lines.size() == 0) {
      out << "lines: []";
    } else {
      out << "lines: [";
      size_t pending_items = msg.lines.size();
      for (auto item : msg.lines) {
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
  const LineArray & msg,
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

  // member: num_detection
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_detection: ";
    rosidl_generator_traits::value_to_yaml(msg.num_detection, out);
    out << "\n";
  }

  // member: camera_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_id: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_id, out);
    out << "\n";
  }

  // member: time_captured
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_captured: ";
    rosidl_generator_traits::value_to_yaml(msg.time_captured, out);
    out << "\n";
  }

  // member: lines
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lines.size() == 0) {
      out << "lines: []\n";
    } else {
      out << "lines:\n";
      for (auto item : msg.lines) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LineArray & msg, bool use_flow_style = false)
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

}  // namespace fm_gen_msgs

namespace rosidl_generator_traits
{

[[deprecated("use fm_gen_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fm_gen_msgs::msg::LineArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  fm_gen_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fm_gen_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fm_gen_msgs::msg::LineArray & msg)
{
  return fm_gen_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fm_gen_msgs::msg::LineArray>()
{
  return "fm_gen_msgs::msg::LineArray";
}

template<>
inline const char * name<fm_gen_msgs::msg::LineArray>()
{
  return "fm_gen_msgs/msg/LineArray";
}

template<>
struct has_fixed_size<fm_gen_msgs::msg::LineArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fm_gen_msgs::msg::LineArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fm_gen_msgs::msg::LineArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FM_GEN_MSGS__MSG__DETAIL__LINE_ARRAY__TRAITS_HPP_
