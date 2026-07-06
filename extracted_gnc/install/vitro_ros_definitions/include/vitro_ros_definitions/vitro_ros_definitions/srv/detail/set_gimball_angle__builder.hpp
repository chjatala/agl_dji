// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vitro_ros_definitions:srv/SetGimballAngle.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_GIMBALL_ANGLE__BUILDER_HPP_
#define VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_GIMBALL_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vitro_ros_definitions/srv/detail/set_gimball_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vitro_ros_definitions
{

namespace srv
{

namespace builder
{

class Init_SetGimballAngle_Request_speed
{
public:
  explicit Init_SetGimballAngle_Request_speed(::vitro_ros_definitions::srv::SetGimballAngle_Request & msg)
  : msg_(msg)
  {}
  ::vitro_ros_definitions::srv::SetGimballAngle_Request speed(::vitro_ros_definitions::srv::SetGimballAngle_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vitro_ros_definitions::srv::SetGimballAngle_Request msg_;
};

class Init_SetGimballAngle_Request_pitch
{
public:
  Init_SetGimballAngle_Request_pitch()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGimballAngle_Request_speed pitch(::vitro_ros_definitions::srv::SetGimballAngle_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SetGimballAngle_Request_speed(msg_);
  }

private:
  ::vitro_ros_definitions::srv::SetGimballAngle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vitro_ros_definitions::srv::SetGimballAngle_Request>()
{
  return vitro_ros_definitions::srv::builder::Init_SetGimballAngle_Request_pitch();
}

}  // namespace vitro_ros_definitions


namespace vitro_ros_definitions
{

namespace srv
{

namespace builder
{

class Init_SetGimballAngle_Response_status
{
public:
  Init_SetGimballAngle_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vitro_ros_definitions::srv::SetGimballAngle_Response status(::vitro_ros_definitions::srv::SetGimballAngle_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vitro_ros_definitions::srv::SetGimballAngle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vitro_ros_definitions::srv::SetGimballAngle_Response>()
{
  return vitro_ros_definitions::srv::builder::Init_SetGimballAngle_Response_status();
}

}  // namespace vitro_ros_definitions

#endif  // VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_GIMBALL_ANGLE__BUILDER_HPP_
