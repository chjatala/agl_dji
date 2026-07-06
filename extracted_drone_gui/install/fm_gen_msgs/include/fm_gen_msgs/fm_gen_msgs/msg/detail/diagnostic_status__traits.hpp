// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fm_gen_msgs:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__TRAITS_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fm_gen_msgs/msg/detail/diagnostic_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'values'
#include "fm_gen_msgs/msg/detail/key_value__traits.hpp"

namespace fm_gen_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DiagnosticStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << ", ";
  }

  // member: diagnoiser_name
  {
    out << "diagnoiser_name: ";
    rosidl_generator_traits::value_to_yaml(msg.diagnoiser_name, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: component_id
  {
    out << "component_id: ";
    rosidl_generator_traits::value_to_yaml(msg.component_id, out);
    out << ", ";
  }

  // member: num_status
  {
    out << "num_status: ";
    rosidl_generator_traits::value_to_yaml(msg.num_status, out);
    out << ", ";
  }

  // member: values
  {
    if (msg.values.size() == 0) {
      out << "values: []";
    } else {
      out << "values: [";
      size_t pending_items = msg.values.size();
      for (auto item : msg.values) {
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
  const DiagnosticStatus & msg,
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

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }

  // member: diagnoiser_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diagnoiser_name: ";
    rosidl_generator_traits::value_to_yaml(msg.diagnoiser_name, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: component_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "component_id: ";
    rosidl_generator_traits::value_to_yaml(msg.component_id, out);
    out << "\n";
  }

  // member: num_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_status: ";
    rosidl_generator_traits::value_to_yaml(msg.num_status, out);
    out << "\n";
  }

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DiagnosticStatus & msg, bool use_flow_style = false)
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
  const fm_gen_msgs::msg::DiagnosticStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  fm_gen_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fm_gen_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fm_gen_msgs::msg::DiagnosticStatus & msg)
{
  return fm_gen_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fm_gen_msgs::msg::DiagnosticStatus>()
{
  return "fm_gen_msgs::msg::DiagnosticStatus";
}

template<>
inline const char * name<fm_gen_msgs::msg::DiagnosticStatus>()
{
  return "fm_gen_msgs/msg/DiagnosticStatus";
}

template<>
struct has_fixed_size<fm_gen_msgs::msg::DiagnosticStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fm_gen_msgs::msg::DiagnosticStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fm_gen_msgs::msg::DiagnosticStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__TRAITS_HPP_
