// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:msg/GenLineFollowCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__GEN_LINE_FOLLOW_CMD__TRAITS_HPP_
#define DRONE_MSGS__MSG__DETAIL__GEN_LINE_FOLLOW_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/msg/detail/gen_line_follow_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace drone_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GenLineFollowCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: x_tgt
  {
    out << "x_tgt: ";
    rosidl_generator_traits::value_to_yaml(msg.x_tgt, out);
    out << ", ";
  }

  // member: x_type
  {
    out << "x_type: ";
    rosidl_generator_traits::value_to_yaml(msg.x_type, out);
    out << ", ";
  }

  // member: y_tgt
  {
    out << "y_tgt: ";
    rosidl_generator_traits::value_to_yaml(msg.y_tgt, out);
    out << ", ";
  }

  // member: y_type
  {
    out << "y_type: ";
    rosidl_generator_traits::value_to_yaml(msg.y_type, out);
    out << ", ";
  }

  // member: z_tgt
  {
    out << "z_tgt: ";
    rosidl_generator_traits::value_to_yaml(msg.z_tgt, out);
    out << ", ";
  }

  // member: z_type
  {
    out << "z_type: ";
    rosidl_generator_traits::value_to_yaml(msg.z_type, out);
    out << ", ";
  }

  // member: yaw_tgt
  {
    out << "yaw_tgt: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_tgt, out);
    out << ", ";
  }

  // member: yaw_type
  {
    out << "yaw_type: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_type, out);
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GenLineFollowCmd & msg,
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

  // member: x_tgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_tgt: ";
    rosidl_generator_traits::value_to_yaml(msg.x_tgt, out);
    out << "\n";
  }

  // member: x_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_type: ";
    rosidl_generator_traits::value_to_yaml(msg.x_type, out);
    out << "\n";
  }

  // member: y_tgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_tgt: ";
    rosidl_generator_traits::value_to_yaml(msg.y_tgt, out);
    out << "\n";
  }

  // member: y_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_type: ";
    rosidl_generator_traits::value_to_yaml(msg.y_type, out);
    out << "\n";
  }

  // member: z_tgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_tgt: ";
    rosidl_generator_traits::value_to_yaml(msg.z_tgt, out);
    out << "\n";
  }

  // member: z_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_type: ";
    rosidl_generator_traits::value_to_yaml(msg.z_type, out);
    out << "\n";
  }

  // member: yaw_tgt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_tgt: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_tgt, out);
    out << "\n";
  }

  // member: yaw_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_type: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_type, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GenLineFollowCmd & msg, bool use_flow_style = false)
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
  const drone_msgs::msg::GenLineFollowCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::msg::GenLineFollowCmd & msg)
{
  return drone_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::msg::GenLineFollowCmd>()
{
  return "drone_msgs::msg::GenLineFollowCmd";
}

template<>
inline const char * name<drone_msgs::msg::GenLineFollowCmd>()
{
  return "drone_msgs/msg/GenLineFollowCmd";
}

template<>
struct has_fixed_size<drone_msgs::msg::GenLineFollowCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_msgs::msg::GenLineFollowCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_msgs::msg::GenLineFollowCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_MSGS__MSG__DETAIL__GEN_LINE_FOLLOW_CMD__TRAITS_HPP_
