// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:srv/ImageCtrl.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__SRV__DETAIL__IMAGE_CTRL__TRAITS_HPP_
#define DRONE_MSGS__SRV__DETAIL__IMAGE_CTRL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/srv/detail/image_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drone_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ImageCtrl_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: enable
  {
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: next_picture_distance
  {
    out << "next_picture_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.next_picture_distance, out);
    out << ", ";
  }

  // member: overlap
  {
    out << "overlap: ";
    rosidl_generator_traits::value_to_yaml(msg.overlap, out);
    out << ", ";
  }

  // member: fov
  {
    out << "fov: ";
    rosidl_generator_traits::value_to_yaml(msg.fov, out);
    out << ", ";
  }

  // member: picture_plane_distance
  {
    out << "picture_plane_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.picture_plane_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageCtrl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enable: ";
    rosidl_generator_traits::value_to_yaml(msg.enable, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: next_picture_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next_picture_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.next_picture_distance, out);
    out << "\n";
  }

  // member: overlap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "overlap: ";
    rosidl_generator_traits::value_to_yaml(msg.overlap, out);
    out << "\n";
  }

  // member: fov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fov: ";
    rosidl_generator_traits::value_to_yaml(msg.fov, out);
    out << "\n";
  }

  // member: picture_plane_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "picture_plane_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.picture_plane_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageCtrl_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace drone_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drone_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_msgs::srv::ImageCtrl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::srv::ImageCtrl_Request & msg)
{
  return drone_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::srv::ImageCtrl_Request>()
{
  return "drone_msgs::srv::ImageCtrl_Request";
}

template<>
inline const char * name<drone_msgs::srv::ImageCtrl_Request>()
{
  return "drone_msgs/srv/ImageCtrl_Request";
}

template<>
struct has_fixed_size<drone_msgs::srv::ImageCtrl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_msgs::srv::ImageCtrl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_msgs::srv::ImageCtrl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace drone_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ImageCtrl_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImageCtrl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImageCtrl_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace drone_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drone_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_msgs::srv::ImageCtrl_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::srv::ImageCtrl_Response & msg)
{
  return drone_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::srv::ImageCtrl_Response>()
{
  return "drone_msgs::srv::ImageCtrl_Response";
}

template<>
inline const char * name<drone_msgs::srv::ImageCtrl_Response>()
{
  return "drone_msgs/srv/ImageCtrl_Response";
}

template<>
struct has_fixed_size<drone_msgs::srv::ImageCtrl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<drone_msgs::srv::ImageCtrl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<drone_msgs::srv::ImageCtrl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<drone_msgs::srv::ImageCtrl>()
{
  return "drone_msgs::srv::ImageCtrl";
}

template<>
inline const char * name<drone_msgs::srv::ImageCtrl>()
{
  return "drone_msgs/srv/ImageCtrl";
}

template<>
struct has_fixed_size<drone_msgs::srv::ImageCtrl>
  : std::integral_constant<
    bool,
    has_fixed_size<drone_msgs::srv::ImageCtrl_Request>::value &&
    has_fixed_size<drone_msgs::srv::ImageCtrl_Response>::value
  >
{
};

template<>
struct has_bounded_size<drone_msgs::srv::ImageCtrl>
  : std::integral_constant<
    bool,
    has_bounded_size<drone_msgs::srv::ImageCtrl_Request>::value &&
    has_bounded_size<drone_msgs::srv::ImageCtrl_Response>::value
  >
{
};

template<>
struct is_service<drone_msgs::srv::ImageCtrl>
  : std::true_type
{
};

template<>
struct is_service_request<drone_msgs::srv::ImageCtrl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<drone_msgs::srv::ImageCtrl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DRONE_MSGS__SRV__DETAIL__IMAGE_CTRL__TRAITS_HPP_
