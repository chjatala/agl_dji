// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from drone_msgs:action/PrecisionLanding.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__ACTION__DETAIL__PRECISION_LANDING__TRAITS_HPP_
#define DRONE_MSGS__ACTION__DETAIL__PRECISION_LANDING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "drone_msgs/action/detail/precision_landing__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PrecisionLanding_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrecisionLanding_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrecisionLanding_Goal & msg, bool use_flow_style = false)
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
  const drone_msgs::action::PrecisionLanding_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::PrecisionLanding_Goal & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::PrecisionLanding_Goal>()
{
  return "drone_msgs::action::PrecisionLanding_Goal";
}

template<>
inline const char * name<drone_msgs::action::PrecisionLanding_Goal>()
{
  return "drone_msgs/action/PrecisionLanding_Goal";
}

template<>
struct has_fixed_size<drone_msgs::action::PrecisionLanding_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<drone_msgs::action::PrecisionLanding_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<drone_msgs::action::PrecisionLanding_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PrecisionLanding_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrecisionLanding_Result & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrecisionLanding_Result & msg, bool use_flow_style = false)
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
  const drone_msgs::action::PrecisionLanding_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::PrecisionLanding_Result & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::PrecisionLanding_Result>()
{
  return "drone_msgs::action::PrecisionLanding_Result";
}

template<>
inline const char * name<drone_msgs::action::PrecisionLanding_Result>()
{
  return "drone_msgs/action/PrecisionLanding_Result";
}

template<>
struct has_fixed_size<drone_msgs::action::PrecisionLanding_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_msgs::action::PrecisionLanding_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_msgs::action::PrecisionLanding_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PrecisionLanding_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: dist_to_go
  {
    out << "dist_to_go: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_go, out);
    out << ", ";
  }

  // member: eta
  {
    out << "eta: ";
    rosidl_generator_traits::value_to_yaml(msg.eta, out);
    out << ", ";
  }

  // member: err_bar
  {
    out << "err_bar: ";
    rosidl_generator_traits::value_to_yaml(msg.err_bar, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrecisionLanding_Feedback & msg,
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

  // member: dist_to_go
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dist_to_go: ";
    rosidl_generator_traits::value_to_yaml(msg.dist_to_go, out);
    out << "\n";
  }

  // member: eta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eta: ";
    rosidl_generator_traits::value_to_yaml(msg.eta, out);
    out << "\n";
  }

  // member: err_bar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_bar: ";
    rosidl_generator_traits::value_to_yaml(msg.err_bar, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrecisionLanding_Feedback & msg, bool use_flow_style = false)
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
  const drone_msgs::action::PrecisionLanding_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::PrecisionLanding_Feedback & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::PrecisionLanding_Feedback>()
{
  return "drone_msgs::action::PrecisionLanding_Feedback";
}

template<>
inline const char * name<drone_msgs::action::PrecisionLanding_Feedback>()
{
  return "drone_msgs/action/PrecisionLanding_Feedback";
}

template<>
struct has_fixed_size<drone_msgs::action::PrecisionLanding_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<drone_msgs::action::PrecisionLanding_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<drone_msgs::action::PrecisionLanding_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "drone_msgs/action/detail/precision_landing__traits.hpp"

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PrecisionLanding_SendGoal_Request & msg,
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
  const PrecisionLanding_SendGoal_Request & msg,
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

inline std::string to_yaml(const PrecisionLanding_SendGoal_Request & msg, bool use_flow_style = false)
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
  const drone_msgs::action::PrecisionLanding_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::PrecisionLanding_SendGoal_Request & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::PrecisionLanding_SendGoal_Request>()
{
  return "drone_msgs::action::PrecisionLanding_SendGoal_Request";
}

template<>
inline const char * name<drone_msgs::action::PrecisionLanding_SendGoal_Request>()
{
  return "drone_msgs/action/PrecisionLanding_SendGoal_Request";
}

template<>
struct has_fixed_size<drone_msgs::action::PrecisionLanding_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<drone_msgs::action::PrecisionLanding_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<drone_msgs::action::PrecisionLanding_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<drone_msgs::action::PrecisionLanding_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<drone_msgs::action::PrecisionLanding_SendGoal_Request>
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
  const PrecisionLanding_SendGoal_Response & msg,
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
  const PrecisionLanding_SendGoal_Response & msg,
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

inline std::string to_yaml(const PrecisionLanding_SendGoal_Response & msg, bool use_flow_style = false)
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
  const drone_msgs::action::PrecisionLanding_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::PrecisionLanding_SendGoal_Response & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::PrecisionLanding_SendGoal_Response>()
{
  return "drone_msgs::action::PrecisionLanding_SendGoal_Response";
}

template<>
inline const char * name<drone_msgs::action::PrecisionLanding_SendGoal_Response>()
{
  return "drone_msgs/action/PrecisionLanding_SendGoal_Response";
}

template<>
struct has_fixed_size<drone_msgs::action::PrecisionLanding_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<drone_msgs::action::PrecisionLanding_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<drone_msgs::action::PrecisionLanding_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<drone_msgs::action::PrecisionLanding_SendGoal>()
{
  return "drone_msgs::action::PrecisionLanding_SendGoal";
}

template<>
inline const char * name<drone_msgs::action::PrecisionLanding_SendGoal>()
{
  return "drone_msgs/action/PrecisionLanding_SendGoal";
}

template<>
struct has_fixed_size<drone_msgs::action::PrecisionLanding_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<drone_msgs::action::PrecisionLanding_SendGoal_Request>::value &&
    has_fixed_size<drone_msgs::action::PrecisionLanding_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<drone_msgs::action::PrecisionLanding_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<drone_msgs::action::PrecisionLanding_SendGoal_Request>::value &&
    has_bounded_size<drone_msgs::action::PrecisionLanding_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<drone_msgs::action::PrecisionLanding_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<drone_msgs::action::PrecisionLanding_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<drone_msgs::action::PrecisionLanding_SendGoal_Response>
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
  const PrecisionLanding_GetResult_Request & msg,
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
  const PrecisionLanding_GetResult_Request & msg,
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

inline std::string to_yaml(const PrecisionLanding_GetResult_Request & msg, bool use_flow_style = false)
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
  const drone_msgs::action::PrecisionLanding_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::PrecisionLanding_GetResult_Request & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::PrecisionLanding_GetResult_Request>()
{
  return "drone_msgs::action::PrecisionLanding_GetResult_Request";
}

template<>
inline const char * name<drone_msgs::action::PrecisionLanding_GetResult_Request>()
{
  return "drone_msgs/action/PrecisionLanding_GetResult_Request";
}

template<>
struct has_fixed_size<drone_msgs::action::PrecisionLanding_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<drone_msgs::action::PrecisionLanding_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<drone_msgs::action::PrecisionLanding_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "drone_msgs/action/detail/precision_landing__traits.hpp"

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PrecisionLanding_GetResult_Response & msg,
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
  const PrecisionLanding_GetResult_Response & msg,
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

inline std::string to_yaml(const PrecisionLanding_GetResult_Response & msg, bool use_flow_style = false)
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
  const drone_msgs::action::PrecisionLanding_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::PrecisionLanding_GetResult_Response & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::PrecisionLanding_GetResult_Response>()
{
  return "drone_msgs::action::PrecisionLanding_GetResult_Response";
}

template<>
inline const char * name<drone_msgs::action::PrecisionLanding_GetResult_Response>()
{
  return "drone_msgs/action/PrecisionLanding_GetResult_Response";
}

template<>
struct has_fixed_size<drone_msgs::action::PrecisionLanding_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<drone_msgs::action::PrecisionLanding_Result>::value> {};

template<>
struct has_bounded_size<drone_msgs::action::PrecisionLanding_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<drone_msgs::action::PrecisionLanding_Result>::value> {};

template<>
struct is_message<drone_msgs::action::PrecisionLanding_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<drone_msgs::action::PrecisionLanding_GetResult>()
{
  return "drone_msgs::action::PrecisionLanding_GetResult";
}

template<>
inline const char * name<drone_msgs::action::PrecisionLanding_GetResult>()
{
  return "drone_msgs/action/PrecisionLanding_GetResult";
}

template<>
struct has_fixed_size<drone_msgs::action::PrecisionLanding_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<drone_msgs::action::PrecisionLanding_GetResult_Request>::value &&
    has_fixed_size<drone_msgs::action::PrecisionLanding_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<drone_msgs::action::PrecisionLanding_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<drone_msgs::action::PrecisionLanding_GetResult_Request>::value &&
    has_bounded_size<drone_msgs::action::PrecisionLanding_GetResult_Response>::value
  >
{
};

template<>
struct is_service<drone_msgs::action::PrecisionLanding_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<drone_msgs::action::PrecisionLanding_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<drone_msgs::action::PrecisionLanding_GetResult_Response>
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
// #include "drone_msgs/action/detail/precision_landing__traits.hpp"

namespace drone_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PrecisionLanding_FeedbackMessage & msg,
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
  const PrecisionLanding_FeedbackMessage & msg,
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

inline std::string to_yaml(const PrecisionLanding_FeedbackMessage & msg, bool use_flow_style = false)
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
  const drone_msgs::action::PrecisionLanding_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  drone_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use drone_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const drone_msgs::action::PrecisionLanding_FeedbackMessage & msg)
{
  return drone_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<drone_msgs::action::PrecisionLanding_FeedbackMessage>()
{
  return "drone_msgs::action::PrecisionLanding_FeedbackMessage";
}

template<>
inline const char * name<drone_msgs::action::PrecisionLanding_FeedbackMessage>()
{
  return "drone_msgs/action/PrecisionLanding_FeedbackMessage";
}

template<>
struct has_fixed_size<drone_msgs::action::PrecisionLanding_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<drone_msgs::action::PrecisionLanding_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<drone_msgs::action::PrecisionLanding_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<drone_msgs::action::PrecisionLanding_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<drone_msgs::action::PrecisionLanding_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<drone_msgs::action::PrecisionLanding>
  : std::true_type
{
};

template<>
struct is_action_goal<drone_msgs::action::PrecisionLanding_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<drone_msgs::action::PrecisionLanding_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<drone_msgs::action::PrecisionLanding_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DRONE_MSGS__ACTION__DETAIL__PRECISION_LANDING__TRAITS_HPP_
