// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vision_msgs:msg/VisionResultArray.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__VISION_RESULT_ARRAY__TRAITS_HPP_
#define VISION_MSGS__MSG__DETAIL__VISION_RESULT_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vision_msgs/msg/detail/vision_result_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'results'
#include "vision_msgs/msg/detail/vision_result__traits.hpp"
// Member 'visualization_image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace vision_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VisionResultArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

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
    out << ", ";
  }

  // member: visualization_image
  {
    out << "visualization_image: ";
    to_flow_style_yaml(msg.visualization_image, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VisionResultArray & msg,
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

  // member: visualization_image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visualization_image:\n";
    to_block_style_yaml(msg.visualization_image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VisionResultArray & msg, bool use_flow_style = false)
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

}  // namespace vision_msgs

namespace rosidl_generator_traits
{

[[deprecated("use vision_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vision_msgs::msg::VisionResultArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  vision_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vision_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const vision_msgs::msg::VisionResultArray & msg)
{
  return vision_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<vision_msgs::msg::VisionResultArray>()
{
  return "vision_msgs::msg::VisionResultArray";
}

template<>
inline const char * name<vision_msgs::msg::VisionResultArray>()
{
  return "vision_msgs/msg/VisionResultArray";
}

template<>
struct has_fixed_size<vision_msgs::msg::VisionResultArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vision_msgs::msg::VisionResultArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vision_msgs::msg::VisionResultArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VISION_MSGS__MSG__DETAIL__VISION_RESULT_ARRAY__TRAITS_HPP_
