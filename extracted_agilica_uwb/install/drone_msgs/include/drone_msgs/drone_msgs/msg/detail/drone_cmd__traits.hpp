// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:msg/DroneCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_CMD__TRAITS_HPP_
#define DRONE_MSGS__MSG__DETAIL__DRONE_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/msg/detail/drone_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace drone_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DroneCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: cmd
  {
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
    out << ", ";
  }

  // member: param
  {
    if (msg.param.size() == 0) {
      out << "param: []";
    } else {
      out << "param: [";
      size_t pending_items = msg.param.size();
      for (auto item : msg.param) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: note
  {
    out << "note: ";
    rosidl_generator_traits::value_to_yaml(msg.note, out);
    out << ", ";
  }

  // member: cmder
  {
    out << "cmder: ";
    rosidl_generator_traits::value_to_yaml(msg.cmder, out);
    out << ", ";
  }

  // member: tgt
  {
    out << "tgt: ";
    rosidl_generator_traits::value_to_yaml(msg.tgt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DroneCmd & msg,
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

  // member: cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.cmd, out);
    out << "\n";
  }

  // member: param
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.param.size() == 0) {
      out << "param: []\n";
    } else {
      out << "param:\n";
      for (auto item : msg.param) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: note
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "note: ";
    rosidl_generator_traits::value_to_yaml(msg.note, out);
    out << "\n";
  }

  // member: cmder
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cmder: ";
    rosidl_generator_traits::value_to_yaml(msg.cmder, out);
    out << "\n";
  }

  // member: tgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tgt: ";
    rosidl_generator_traits::value_to_yaml(msg.tgt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DroneCmd & msg, bool use_flow_style = false)
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

}  // namespace drone_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drone_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_msgs::msg::DroneCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::msg::DroneCmd & msg)
{
  return drone_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::msg::DroneCmd>()
{
  return "drone_msgs::msg::DroneCmd";
}

template<>
inline const char * name<drone_msgs::msg::DroneCmd>()
{
  return "drone_msgs/msg/DroneCmd";
}

template<>
struct has_fixed_size<drone_msgs::msg::DroneCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_msgs::msg::DroneCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_msgs::msg::DroneCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_CMD__TRAITS_HPP_
