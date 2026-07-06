// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:action/ApproachObj.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__ACTION__DETAIL__APPROACH_OBJ__TRAITS_HPP_
#define DRONE_MSGS__ACTION__DETAIL__APPROACH_OBJ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/action/detail/approach_obj__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ApproachObj_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: max_vel
  {
    out << "max_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.max_vel, out);
    out << ", ";
  }

  // member: max_yaw_rate
  {
    out << "max_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_yaw_rate, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: distance_tolerance
  {
    out << "distance_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_tolerance, out);
    out << ", ";
  }

  // member: object_pos_x
  {
    out << "object_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.object_pos_x, out);
    out << ", ";
  }

  // member: object_pos_y
  {
    out << "object_pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.object_pos_y, out);
    out << ", ";
  }

  // member: object_pos_z
  {
    out << "object_pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.object_pos_z, out);
    out << ", ";
  }

  // member: approach_type
  {
    out << "approach_type: ";
    rosidl_generator_traits::value_to_yaml(msg.approach_type, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApproachObj_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: max_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_vel: ";
    rosidl_generator_traits::value_to_yaml(msg.max_vel, out);
    out << "\n";
  }

  // member: max_yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_yaw_rate, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: distance_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_tolerance, out);
    out << "\n";
  }

  // member: object_pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.object_pos_x, out);
    out << "\n";
  }

  // member: object_pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.object_pos_y, out);
    out << "\n";
  }

  // member: object_pos_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_pos_z: ";
    rosidl_generator_traits::value_to_yaml(msg.object_pos_z, out);
    out << "\n";
  }

  // member: approach_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "approach_type: ";
    rosidl_generator_traits::value_to_yaml(msg.approach_type, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApproachObj_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drone_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_msgs::action::ApproachObj_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::ApproachObj_Goal & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::ApproachObj_Goal>()
{
  return "drone_msgs::action::ApproachObj_Goal";
}

template<>
inline const char * name<drone_msgs::action::ApproachObj_Goal>()
{
  return "drone_msgs/action/ApproachObj_Goal";
}

template<>
struct has_fixed_size<drone_msgs::action::ApproachObj_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_msgs::action::ApproachObj_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_msgs::action::ApproachObj_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'init_pos'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ApproachObj_Result & msg,
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

  // member: init_pos
  {
    out << "init_pos: ";
    to_flow_style_yaml(msg.init_pos, out);
    out << ", ";
  }

  // member: init_yaw
  {
    out << "init_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.init_yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApproachObj_Result & msg,
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

  // member: init_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_pos:\n";
    to_block_style_yaml(msg.init_pos, out, indentation + 2);
  }

  // member: init_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.init_yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApproachObj_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drone_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_msgs::action::ApproachObj_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::ApproachObj_Result & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::ApproachObj_Result>()
{
  return "drone_msgs::action::ApproachObj_Result";
}

template<>
inline const char * name<drone_msgs::action::ApproachObj_Result>()
{
  return "drone_msgs/action/ApproachObj_Result";
}

template<>
struct has_fixed_size<drone_msgs::action::ApproachObj_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_msgs::action::ApproachObj_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_msgs::action::ApproachObj_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'target_pos'
// already included above
// #include "geometry_msgs/msg/detail/point__traits.hpp"

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ApproachObj_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: dist_to_go
  {
    out << "dist_to_go: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_go, out);
    out << ", ";
  }

  // member: target_pos
  {
    out << "target_pos: ";
    to_flow_style_yaml(msg.target_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApproachObj_Feedback & msg,
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

  // member: dist_to_go
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_to_go: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_go, out);
    out << "\n";
  }

  // member: target_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pos:\n";
    to_block_style_yaml(msg.target_pos, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApproachObj_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drone_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_msgs::action::ApproachObj_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::ApproachObj_Feedback & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::ApproachObj_Feedback>()
{
  return "drone_msgs::action::ApproachObj_Feedback";
}

template<>
inline const char * name<drone_msgs::action::ApproachObj_Feedback>()
{
  return "drone_msgs/action/ApproachObj_Feedback";
}

template<>
struct has_fixed_size<drone_msgs::action::ApproachObj_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_msgs::action::ApproachObj_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_msgs::action::ApproachObj_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "drone_msgs/action/detail/approach_obj__traits.hpp"

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ApproachObj_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApproachObj_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApproachObj_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drone_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_msgs::action::ApproachObj_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::ApproachObj_SendGoal_Request & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::ApproachObj_SendGoal_Request>()
{
  return "drone_msgs::action::ApproachObj_SendGoal_Request";
}

template<>
inline const char * name<drone_msgs::action::ApproachObj_SendGoal_Request>()
{
  return "drone_msgs/action/ApproachObj_SendGoal_Request";
}

template<>
struct has_fixed_size<drone_msgs::action::ApproachObj_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<drone_msgs::action::ApproachObj_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<drone_msgs::action::ApproachObj_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<drone_msgs::action::ApproachObj_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<drone_msgs::action::ApproachObj_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ApproachObj_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApproachObj_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApproachObj_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drone_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_msgs::action::ApproachObj_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::ApproachObj_SendGoal_Response & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::ApproachObj_SendGoal_Response>()
{
  return "drone_msgs::action::ApproachObj_SendGoal_Response";
}

template<>
inline const char * name<drone_msgs::action::ApproachObj_SendGoal_Response>()
{
  return "drone_msgs/action/ApproachObj_SendGoal_Response";
}

template<>
struct has_fixed_size<drone_msgs::action::ApproachObj_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<drone_msgs::action::ApproachObj_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<drone_msgs::action::ApproachObj_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<drone_msgs::action::ApproachObj_SendGoal>()
{
  return "drone_msgs::action::ApproachObj_SendGoal";
}

template<>
inline const char * name<drone_msgs::action::ApproachObj_SendGoal>()
{
  return "drone_msgs/action/ApproachObj_SendGoal";
}

template<>
struct has_fixed_size<drone_msgs::action::ApproachObj_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<drone_msgs::action::ApproachObj_SendGoal_Request>::value &&
    has_fixed_size<drone_msgs::action::ApproachObj_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<drone_msgs::action::ApproachObj_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<drone_msgs::action::ApproachObj_SendGoal_Request>::value &&
    has_bounded_size<drone_msgs::action::ApproachObj_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<drone_msgs::action::ApproachObj_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<drone_msgs::action::ApproachObj_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<drone_msgs::action::ApproachObj_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ApproachObj_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApproachObj_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApproachObj_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drone_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_msgs::action::ApproachObj_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::ApproachObj_GetResult_Request & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::ApproachObj_GetResult_Request>()
{
  return "drone_msgs::action::ApproachObj_GetResult_Request";
}

template<>
inline const char * name<drone_msgs::action::ApproachObj_GetResult_Request>()
{
  return "drone_msgs/action/ApproachObj_GetResult_Request";
}

template<>
struct has_fixed_size<drone_msgs::action::ApproachObj_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<drone_msgs::action::ApproachObj_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<drone_msgs::action::ApproachObj_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "drone_msgs/action/detail/approach_obj__traits.hpp"

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ApproachObj_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApproachObj_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApproachObj_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drone_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_msgs::action::ApproachObj_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::ApproachObj_GetResult_Response & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::ApproachObj_GetResult_Response>()
{
  return "drone_msgs::action::ApproachObj_GetResult_Response";
}

template<>
inline const char * name<drone_msgs::action::ApproachObj_GetResult_Response>()
{
  return "drone_msgs/action/ApproachObj_GetResult_Response";
}

template<>
struct has_fixed_size<drone_msgs::action::ApproachObj_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<drone_msgs::action::ApproachObj_Result>::value> {};

template<>
struct has_bounded_size<drone_msgs::action::ApproachObj_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<drone_msgs::action::ApproachObj_Result>::value> {};

template<>
struct is_message<drone_msgs::action::ApproachObj_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<drone_msgs::action::ApproachObj_GetResult>()
{
  return "drone_msgs::action::ApproachObj_GetResult";
}

template<>
inline const char * name<drone_msgs::action::ApproachObj_GetResult>()
{
  return "drone_msgs/action/ApproachObj_GetResult";
}

template<>
struct has_fixed_size<drone_msgs::action::ApproachObj_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<drone_msgs::action::ApproachObj_GetResult_Request>::value &&
    has_fixed_size<drone_msgs::action::ApproachObj_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<drone_msgs::action::ApproachObj_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<drone_msgs::action::ApproachObj_GetResult_Request>::value &&
    has_bounded_size<drone_msgs::action::ApproachObj_GetResult_Response>::value
  >
{
};

template<>
struct is_service<drone_msgs::action::ApproachObj_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<drone_msgs::action::ApproachObj_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<drone_msgs::action::ApproachObj_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "drone_msgs/action/detail/approach_obj__traits.hpp"

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const ApproachObj_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApproachObj_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApproachObj_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace drone_msgs

namespace rosidl_generator_traits
{

[[deprecated("use drone_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const drone_msgs::action::ApproachObj_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::ApproachObj_FeedbackMessage & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::ApproachObj_FeedbackMessage>()
{
  return "drone_msgs::action::ApproachObj_FeedbackMessage";
}

template<>
inline const char * name<drone_msgs::action::ApproachObj_FeedbackMessage>()
{
  return "drone_msgs/action/ApproachObj_FeedbackMessage";
}

template<>
struct has_fixed_size<drone_msgs::action::ApproachObj_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<drone_msgs::action::ApproachObj_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<drone_msgs::action::ApproachObj_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<drone_msgs::action::ApproachObj_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<drone_msgs::action::ApproachObj_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<drone_msgs::action::ApproachObj>
  : std::true_type
{
};

template<>
struct is_action_goal<drone_msgs::action::ApproachObj_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<drone_msgs::action::ApproachObj_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<drone_msgs::action::ApproachObj_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DRONE_MSGS__ACTION__DETAIL__APPROACH_OBJ__TRAITS_HPP_
