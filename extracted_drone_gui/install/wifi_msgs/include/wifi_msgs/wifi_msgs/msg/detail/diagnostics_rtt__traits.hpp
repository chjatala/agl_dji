// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from wifi_msgs:msg/DiagnosticsRTT.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__TRAITS_HPP_
#define WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "wifi_msgs/msg/detail/diagnostics_rtt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace wifi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DiagnosticsRTT & msg,
  std::ostream & out)
{
  out << "{";
  // member: rssi
  {
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << ", ";
  }

  // member: rssi_spread
  {
    out << "rssi_spread: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi_spread, out);
    out << ", ";
  }

  // member: num_bursts
  {
    out << "num_bursts: ";
    rosidl_generator_traits::value_to_yaml(msg.num_bursts, out);
    out << ", ";
  }

  // member: burst_duration
  {
    out << "burst_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.burst_duration, out);
    out << ", ";
  }

  // member: ftms_per_burst
  {
    out << "ftms_per_burst: ";
    rosidl_generator_traits::value_to_yaml(msg.ftms_per_burst, out);
    out << ", ";
  }

  // member: rtt_avg
  {
    out << "rtt_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.rtt_avg, out);
    out << ", ";
  }

  // member: rtt_spread
  {
    out << "rtt_spread: ";
    rosidl_generator_traits::value_to_yaml(msg.rtt_spread, out);
    out << ", ";
  }

  // member: rtt_variance
  {
    out << "rtt_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.rtt_variance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DiagnosticsRTT & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: rssi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << "\n";
  }

  // member: rssi_spread
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi_spread: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi_spread, out);
    out << "\n";
  }

  // member: num_bursts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_bursts: ";
    rosidl_generator_traits::value_to_yaml(msg.num_bursts, out);
    out << "\n";
  }

  // member: burst_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "burst_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.burst_duration, out);
    out << "\n";
  }

  // member: ftms_per_burst
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ftms_per_burst: ";
    rosidl_generator_traits::value_to_yaml(msg.ftms_per_burst, out);
    out << "\n";
  }

  // member: rtt_avg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtt_avg: ";
    rosidl_generator_traits::value_to_yaml(msg.rtt_avg, out);
    out << "\n";
  }

  // member: rtt_spread
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtt_spread: ";
    rosidl_generator_traits::value_to_yaml(msg.rtt_spread, out);
    out << "\n";
  }

  // member: rtt_variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtt_variance: ";
    rosidl_generator_traits::value_to_yaml(msg.rtt_variance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DiagnosticsRTT & msg, bool use_flow_style = false)
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

}  // namespace wifi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use wifi_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const wifi_msgs::msg::DiagnosticsRTT & msg,
  std::ostream & out, size_t indentation = 0)
{
  wifi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use wifi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const wifi_msgs::msg::DiagnosticsRTT & msg)
{
  return wifi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<wifi_msgs::msg::DiagnosticsRTT>()
{
  return "wifi_msgs::msg::DiagnosticsRTT";
}

template<>
inline const char * name<wifi_msgs::msg::DiagnosticsRTT>()
{
  return "wifi_msgs/msg/DiagnosticsRTT";
}

template<>
struct has_fixed_size<wifi_msgs::msg::DiagnosticsRTT>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<wifi_msgs::msg::DiagnosticsRTT>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<wifi_msgs::msg::DiagnosticsRTT>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__TRAITS_HPP_
