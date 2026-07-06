// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vitro_ros_definitions:srv/GetInspectionObject.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_INSPECTION_OBJECT__TRAITS_HPP_
#define VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_INSPECTION_OBJECT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "vitro_ros_definitions/srv/detail/get_inspection_object__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace vitro_ros_definitions
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetInspectionObject_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetInspectionObject_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetInspectionObject_Request & msg, bool use_flow_style = false)
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

}  // namespace vitro_ros_definitions

namespace rosidl_generator_traits
{

[[deprecated("use vitro_ros_definitions::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vitro_ros_definitions::srv::GetInspectionObject_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  vitro_ros_definitions::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vitro_ros_definitions::srv::to_yaml() instead")]]
inline std::string to_yaml(const vitro_ros_definitions::srv::GetInspectionObject_Request & msg)
{
  return vitro_ros_definitions::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vitro_ros_definitions::srv::GetInspectionObject_Request>()
{
  return "vitro_ros_definitions::srv::GetInspectionObject_Request";
}

template<>
inline const char * name<vitro_ros_definitions::srv::GetInspectionObject_Request>()
{
  return "vitro_ros_definitions/srv/GetInspectionObject_Request";
}

template<>
struct has_fixed_size<vitro_ros_definitions::srv::GetInspectionObject_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vitro_ros_definitions::srv::GetInspectionObject_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vitro_ros_definitions::srv::GetInspectionObject_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace vitro_ros_definitions
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetInspectionObject_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetInspectionObject_Response & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetInspectionObject_Response & msg, bool use_flow_style = false)
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

}  // namespace vitro_ros_definitions

namespace rosidl_generator_traits
{

[[deprecated("use vitro_ros_definitions::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const vitro_ros_definitions::srv::GetInspectionObject_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  vitro_ros_definitions::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use vitro_ros_definitions::srv::to_yaml() instead")]]
inline std::string to_yaml(const vitro_ros_definitions::srv::GetInspectionObject_Response & msg)
{
  return vitro_ros_definitions::srv::to_yaml(msg);
}

template<>
inline const char * data_type<vitro_ros_definitions::srv::GetInspectionObject_Response>()
{
  return "vitro_ros_definitions::srv::GetInspectionObject_Response";
}

template<>
inline const char * name<vitro_ros_definitions::srv::GetInspectionObject_Response>()
{
  return "vitro_ros_definitions/srv/GetInspectionObject_Response";
}

template<>
struct has_fixed_size<vitro_ros_definitions::srv::GetInspectionObject_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vitro_ros_definitions::srv::GetInspectionObject_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vitro_ros_definitions::srv::GetInspectionObject_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vitro_ros_definitions::srv::GetInspectionObject>()
{
  return "vitro_ros_definitions::srv::GetInspectionObject";
}

template<>
inline const char * name<vitro_ros_definitions::srv::GetInspectionObject>()
{
  return "vitro_ros_definitions/srv/GetInspectionObject";
}

template<>
struct has_fixed_size<vitro_ros_definitions::srv::GetInspectionObject>
  : std::integral_constant<
    bool,
    has_fixed_size<vitro_ros_definitions::srv::GetInspectionObject_Request>::value &&
    has_fixed_size<vitro_ros_definitions::srv::GetInspectionObject_Response>::value
  >
{
};

template<>
struct has_bounded_size<vitro_ros_definitions::srv::GetInspectionObject>
  : std::integral_constant<
    bool,
    has_bounded_size<vitro_ros_definitions::srv::GetInspectionObject_Request>::value &&
    has_bounded_size<vitro_ros_definitions::srv::GetInspectionObject_Response>::value
  >
{
};

template<>
struct is_service<vitro_ros_definitions::srv::GetInspectionObject>
  : std::true_type
{
};

template<>
struct is_service_request<vitro_ros_definitions::srv::GetInspectionObject_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vitro_ros_definitions::srv::GetInspectionObject_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_INSPECTION_OBJECT__TRAITS_HPP_
