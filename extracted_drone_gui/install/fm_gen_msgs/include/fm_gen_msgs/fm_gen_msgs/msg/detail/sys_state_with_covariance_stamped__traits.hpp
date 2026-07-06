// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fm_gen_msgs:msg/SysStateWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_WITH_COVARIANCE_STAMPED__TRAITS_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_WITH_COVARIANCE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fm_gen_msgs/msg/detail/sys_state_with_covariance_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace fm_gen_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SysStateWithCovarianceStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: dim
  {
    out << "dim: ";
    rosidl_generator_traits::value_to_yaml(msg.dim, out);
    out << ", ";
  }

  // member: state_name
  {
    if (msg.state_name.size() == 0) {
      out << "state_name: []";
    } else {
      out << "state_name: [";
      size_t pending_items = msg.state_name.size();
      for (auto item : msg.state_name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: state
  {
    if (msg.state.size() == 0) {
      out << "state: []";
    } else {
      out << "state: [";
      size_t pending_items = msg.state.size();
      for (auto item : msg.state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: covariance
  {
    if (msg.covariance.size() == 0) {
      out << "covariance: []";
    } else {
      out << "covariance: [";
      size_t pending_items = msg.covariance.size();
      for (auto item : msg.covariance) {
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
  const SysStateWithCovarianceStamped & msg,
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

  // member: dim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dim: ";
    rosidl_generator_traits::value_to_yaml(msg.dim, out);
    out << "\n";
  }

  // member: state_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state_name.size() == 0) {
      out << "state_name: []\n";
    } else {
      out << "state_name:\n";
      for (auto item : msg.state_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.state.size() == 0) {
      out << "state: []\n";
    } else {
      out << "state:\n";
      for (auto item : msg.state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.covariance.size() == 0) {
      out << "covariance: []\n";
    } else {
      out << "covariance:\n";
      for (auto item : msg.covariance) {
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

inline std::string to_yaml(const SysStateWithCovarianceStamped & msg, bool use_flow_style = false)
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
  const fm_gen_msgs::msg::SysStateWithCovarianceStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  fm_gen_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fm_gen_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fm_gen_msgs::msg::SysStateWithCovarianceStamped & msg)
{
  return fm_gen_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fm_gen_msgs::msg::SysStateWithCovarianceStamped>()
{
  return "fm_gen_msgs::msg::SysStateWithCovarianceStamped";
}

template<>
inline const char * name<fm_gen_msgs::msg::SysStateWithCovarianceStamped>()
{
  return "fm_gen_msgs/msg/SysStateWithCovarianceStamped";
}

template<>
struct has_fixed_size<fm_gen_msgs::msg::SysStateWithCovarianceStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fm_gen_msgs::msg::SysStateWithCovarianceStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fm_gen_msgs::msg::SysStateWithCovarianceStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_WITH_COVARIANCE_STAMPED__TRAITS_HPP_
