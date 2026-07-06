// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fm_gen_msgs:msg/TopicStatusArray.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS_ARRAY__TRAITS_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fm_gen_msgs/msg/detail/topic_status_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'topic_array'
#include "fm_gen_msgs/msg/detail/topic_status__traits.hpp"

namespace fm_gen_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TopicStatusArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: general_status
  {
    out << "general_status: ";
    rosidl_generator_traits::value_to_yaml(msg.general_status, out);
    out << ", ";
  }

  // member: status_sum
  {
    out << "status_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.status_sum, out);
    out << ", ";
  }

  // member: topic_array
  {
    if (msg.topic_array.size() == 0) {
      out << "topic_array: []";
    } else {
      out << "topic_array: [";
      size_t pending_items = msg.topic_array.size();
      for (auto item : msg.topic_array) {
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
  const TopicStatusArray & msg,
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

  // member: general_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "general_status: ";
    rosidl_generator_traits::value_to_yaml(msg.general_status, out);
    out << "\n";
  }

  // member: status_sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_sum: ";
    rosidl_generator_traits::value_to_yaml(msg.status_sum, out);
    out << "\n";
  }

  // member: topic_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.topic_array.size() == 0) {
      out << "topic_array: []\n";
    } else {
      out << "topic_array:\n";
      for (auto item : msg.topic_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TopicStatusArray & msg, bool use_flow_style = false)
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
  const fm_gen_msgs::msg::TopicStatusArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  fm_gen_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fm_gen_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fm_gen_msgs::msg::TopicStatusArray & msg)
{
  return fm_gen_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fm_gen_msgs::msg::TopicStatusArray>()
{
  return "fm_gen_msgs::msg::TopicStatusArray";
}

template<>
inline const char * name<fm_gen_msgs::msg::TopicStatusArray>()
{
  return "fm_gen_msgs/msg/TopicStatusArray";
}

template<>
struct has_fixed_size<fm_gen_msgs::msg::TopicStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fm_gen_msgs::msg::TopicStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fm_gen_msgs::msg::TopicStatusArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS_ARRAY__TRAITS_HPP_
