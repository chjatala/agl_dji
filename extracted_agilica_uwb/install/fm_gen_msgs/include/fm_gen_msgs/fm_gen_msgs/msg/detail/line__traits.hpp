// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fm_gen_msgs:msg/Line.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__LINE__TRAITS_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__LINE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fm_gen_msgs/msg/detail/line__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fm_gen_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Line & msg,
  std::ostream & out)
{
  out << "{";
  // member: line_type
  {
    out << "line_type: ";
    rosidl_generator_traits::value_to_yaml(msg.line_type, out);
    out << ", ";
  }

  // member: certainty
  {
    out << "certainty: ";
    rosidl_generator_traits::value_to_yaml(msg.certainty, out);
    out << ", ";
  }

  // member: line_1
  {
    if (msg.line_1.size() == 0) {
      out << "line_1: []";
    } else {
      out << "line_1: [";
      size_t pending_items = msg.line_1.size();
      for (auto item : msg.line_1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: line_2
  {
    if (msg.line_2.size() == 0) {
      out << "line_2: []";
    } else {
      out << "line_2: [";
      size_t pending_items = msg.line_2.size();
      for (auto item : msg.line_2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: line_c
  {
    if (msg.line_c.size() == 0) {
      out << "line_c: []";
    } else {
      out << "line_c: [";
      size_t pending_items = msg.line_c.size();
      for (auto item : msg.line_c) {
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
  const Line & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: line_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "line_type: ";
    rosidl_generator_traits::value_to_yaml(msg.line_type, out);
    out << "\n";
  }

  // member: certainty
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "certainty: ";
    rosidl_generator_traits::value_to_yaml(msg.certainty, out);
    out << "\n";
  }

  // member: line_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.line_1.size() == 0) {
      out << "line_1: []\n";
    } else {
      out << "line_1:\n";
      for (auto item : msg.line_1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: line_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.line_2.size() == 0) {
      out << "line_2: []\n";
    } else {
      out << "line_2:\n";
      for (auto item : msg.line_2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: line_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.line_c.size() == 0) {
      out << "line_c: []\n";
    } else {
      out << "line_c:\n";
      for (auto item : msg.line_c) {
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

inline std::string to_yaml(const Line & msg, bool use_flow_style = false)
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
  const fm_gen_msgs::msg::Line & msg,
  std::ostream & out, size_t indentation = 0)
{
  fm_gen_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fm_gen_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fm_gen_msgs::msg::Line & msg)
{
  return fm_gen_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fm_gen_msgs::msg::Line>()
{
  return "fm_gen_msgs::msg::Line";
}

template<>
inline const char * name<fm_gen_msgs::msg::Line>()
{
  return "fm_gen_msgs/msg/Line";
}

template<>
struct has_fixed_size<fm_gen_msgs::msg::Line>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fm_gen_msgs::msg::Line>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fm_gen_msgs::msg::Line>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FM_GEN_MSGS__MSG__DETAIL__LINE__TRAITS_HPP_
