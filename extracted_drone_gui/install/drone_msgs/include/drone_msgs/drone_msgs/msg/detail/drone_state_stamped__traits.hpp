// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:msg/DroneStateStamped.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_STATE_STAMPED__TRAITS_HPP_
#define DRONE_MSGS__MSG__DETAIL__DRONE_STATE_STAMPED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/msg/detail/drone_state_stamped__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace drone_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DroneStateStamped & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: drone_id
  {
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << ", ";
  }

  // member: flight_state
  {
    out << "flight_state: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_state, out);
    out << ", ";
  }

  // member: ctrl_mode
  {
    out << "ctrl_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl_mode, out);
    out << ", ";
  }

  // member: cam_state
  {
    out << "cam_state: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_state, out);
    out << ", ";
  }

  // member: nav_state
  {
    out << "nav_state: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state, out);
    out << ", ";
  }

  // member: mission_state
  {
    out << "mission_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_state, out);
    out << ", ";
  }

  // member: pil_state
  {
    out << "pil_state: ";
    rosidl_generator_traits::value_to_yaml(msg.pil_state, out);
    out << ", ";
  }

  // member: armed
  {
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << ", ";
  }

  // member: battery_remain
  {
    out << "battery_remain: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_remain, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DroneStateStamped & msg,
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

  // member: drone_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drone_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drone_id, out);
    out << "\n";
  }

  // member: flight_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flight_state: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_state, out);
    out << "\n";
  }

  // member: ctrl_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ctrl_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl_mode, out);
    out << "\n";
  }

  // member: cam_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_state: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_state, out);
    out << "\n";
  }

  // member: nav_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_state: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_state, out);
    out << "\n";
  }

  // member: mission_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_state, out);
    out << "\n";
  }

  // member: pil_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pil_state: ";
    rosidl_generator_traits::value_to_yaml(msg.pil_state, out);
    out << "\n";
  }

  // member: armed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armed: ";
    rosidl_generator_traits::value_to_yaml(msg.armed, out);
    out << "\n";
  }

  // member: battery_remain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_remain: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_remain, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DroneStateStamped & msg, bool use_flow_style = false)
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
  const drone_msgs::msg::DroneStateStamped & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::msg::DroneStateStamped & msg)
{
  return drone_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::msg::DroneStateStamped>()
{
  return "drone_msgs::msg::DroneStateStamped";
}

template<>
inline const char * name<drone_msgs::msg::DroneStateStamped>()
{
  return "drone_msgs/msg/DroneStateStamped";
}

template<>
struct has_fixed_size<drone_msgs::msg::DroneStateStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_msgs::msg::DroneStateStamped>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_msgs::msg::DroneStateStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_STATE_STAMPED__TRAITS_HPP_
