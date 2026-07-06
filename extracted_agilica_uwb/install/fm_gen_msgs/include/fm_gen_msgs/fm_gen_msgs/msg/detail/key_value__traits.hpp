// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fm_gen_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__KEY_VALUE__TRAITS_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__KEY_VALUE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fm_gen_msgs/msg/detail/key_value__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fm_gen_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const KeyValue & msg,
  std::ostream & out)
{
  out << "{";
  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: data_type
  {
    out << "data_type: ";
    rosidl_generator_traits::value_to_yaml(msg.data_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const KeyValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: data_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_type: ";
    rosidl_generator_traits::value_to_yaml(msg.data_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const KeyValue & msg, bool use_flow_style = false)
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
  const fm_gen_msgs::msg::KeyValue & msg,
  std::ostream & out, size_t indentation = 0)
{
  fm_gen_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fm_gen_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fm_gen_msgs::msg::KeyValue & msg)
{
  return fm_gen_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fm_gen_msgs::msg::KeyValue>()
{
  return "fm_gen_msgs::msg::KeyValue";
}

template<>
inline const char * name<fm_gen_msgs::msg::KeyValue>()
{
  return "fm_gen_msgs/msg/KeyValue";
}

template<>
struct has_fixed_size<fm_gen_msgs::msg::KeyValue>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fm_gen_msgs::msg::KeyValue>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fm_gen_msgs::msg::KeyValue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FM_GEN_MSGS__MSG__DETAIL__KEY_VALUE__TRAITS_HPP_
