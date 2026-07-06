// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fm_gen_msgs:msg/ArucoMarker.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER__TRAITS_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fm_gen_msgs/msg/detail/aruco_marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fm_gen_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArucoMarker & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: corner
  {
    if (msg.corner.size() == 0) {
      out << "corner: []";
    } else {
      out << "corner: [";
      size_t pending_items = msg.corner.size();
      for (auto item : msg.corner) {
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
  const ArucoMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: corner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corner.size() == 0) {
      out << "corner: []\n";
    } else {
      out << "corner:\n";
      for (auto item : msg.corner) {
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

inline std::string to_yaml(const ArucoMarker & msg, bool use_flow_style = false)
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
  const fm_gen_msgs::msg::ArucoMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  fm_gen_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fm_gen_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fm_gen_msgs::msg::ArucoMarker & msg)
{
  return fm_gen_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fm_gen_msgs::msg::ArucoMarker>()
{
  return "fm_gen_msgs::msg::ArucoMarker";
}

template<>
inline const char * name<fm_gen_msgs::msg::ArucoMarker>()
{
  return "fm_gen_msgs/msg/ArucoMarker";
}

template<>
struct has_fixed_size<fm_gen_msgs::msg::ArucoMarker>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fm_gen_msgs::msg::ArucoMarker>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fm_gen_msgs::msg::ArucoMarker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER__TRAITS_HPP_
