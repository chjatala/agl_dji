// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_Waypoint_param
{
public:
  explicit Init_Waypoint_param(::drone_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::Waypoint param(::drone_msgs::msg::Waypoint::_param_type arg)
  {
    msg_.param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_type
{
public:
  explicit Init_Waypoint_type(::drone_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_param type(::drone_msgs::msg::Waypoint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Waypoint_param(msg_);
  }

private:
  ::drone_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_max_yaw_rate
{
public:
  explicit Init_Waypoint_max_yaw_rate(::drone_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_type max_yaw_rate(::drone_msgs::msg::Waypoint::_max_yaw_rate_type arg)
  {
    msg_.max_yaw_rate = std::move(arg);
    return Init_Waypoint_type(msg_);
  }

private:
  ::drone_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_max_vel
{
public:
  explicit Init_Waypoint_max_vel(::drone_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_max_yaw_rate max_vel(::drone_msgs::msg::Waypoint::_max_vel_type arg)
  {
    msg_.max_vel = std::move(arg);
    return Init_Waypoint_max_yaw_rate(msg_);
  }

private:
  ::drone_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_yaw
{
public:
  explicit Init_Waypoint_yaw(::drone_msgs::msg::Waypoint & msg)
  : msg_(msg)
  {}
  Init_Waypoint_max_vel yaw(::drone_msgs::msg::Waypoint::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Waypoint_max_vel(msg_);
  }

private:
  ::drone_msgs::msg::Waypoint msg_;
};

class Init_Waypoint_position
{
public:
  Init_Waypoint_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoint_yaw position(::drone_msgs::msg::Waypoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Waypoint_yaw(msg_);
  }

private:
  ::drone_msgs::msg::Waypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::Waypoint>()
{
  return drone_msgs::msg::builder::Init_Waypoint_position();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__WAYPOINT__BUILDER_HPP_
