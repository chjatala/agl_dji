// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fm_gen_msgs:msg/TopicStatus.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS__TRAITS_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fm_gen_msgs/msg/detail/topic_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fm_gen_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TopicStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: topic_name
  {
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << ", ";
  }

  // member: topic_is_ok
  {
    out << "topic_is_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_is_ok, out);
    out << ", ";
  }

  // member: error_message
  {
    if (msg.error_message.size() == 0) {
      out << "error_message: []";
    } else {
      out << "error_message: [";
      size_t pending_items = msg.error_message.size();
      for (auto item : msg.error_message) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: error_code
  {
    if (msg.error_code.size() == 0) {
      out << "error_code: []";
    } else {
      out << "error_code: [";
      size_t pending_items = msg.error_code.size();
      for (auto item : msg.error_code) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: error_value
  {
    if (msg.error_value.size() == 0) {
      out << "error_value: []";
    } else {
      out << "error_value: [";
      size_t pending_items = msg.error_value.size();
      for (auto item : msg.error_value) {
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
  const TopicStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: topic_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_name: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_name, out);
    out << "\n";
  }

  // member: topic_is_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic_is_ok: ";
    rosidl_generator_traits::value_to_yaml(msg.topic_is_ok, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_message.size() == 0) {
      out << "error_message: []\n";
    } else {
      out << "error_message:\n";
      for (auto item : msg.error_message) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_code.size() == 0) {
      out << "error_code: []\n";
    } else {
      out << "error_code:\n";
      for (auto item : msg.error_code) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: error_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_value.size() == 0) {
      out << "error_value: []\n";
    } else {
      out << "error_value:\n";
      for (auto item : msg.error_value) {
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

inline std::string to_yaml(const TopicStatus & msg, bool use_flow_style = false)
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
  const fm_gen_msgs::msg::TopicStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  fm_gen_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fm_gen_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fm_gen_msgs::msg::TopicStatus & msg)
{
  return fm_gen_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fm_gen_msgs::msg::TopicStatus>()
{
  return "fm_gen_msgs::msg::TopicStatus";
}

template<>
inline const char * name<fm_gen_msgs::msg::TopicStatus>()
{
  return "fm_gen_msgs/msg/TopicStatus";
}

template<>
struct has_fixed_size<fm_gen_msgs::msg::TopicStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fm_gen_msgs::msg::TopicStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fm_gen_msgs::msg::TopicStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS__TRAITS_HPP_
