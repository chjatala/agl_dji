// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/GimbalAngleDegStamped.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__GIMBAL_ANGLE_DEG_STAMPED__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__GIMBAL_ANGLE_DEG_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/gimbal_angle_deg_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_GimbalAngleDegStamped_roll
{
public:
  explicit Init_GimbalAngleDegStamped_roll(::drone_msgs::msg::GimbalAngleDegStamped & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::GimbalAngleDegStamped roll(::drone_msgs::msg::GimbalAngleDegStamped::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::GimbalAngleDegStamped msg_;
};

class Init_GimbalAngleDegStamped_pitch
{
public:
  explicit Init_GimbalAngleDegStamped_pitch(::drone_msgs::msg::GimbalAngleDegStamped & msg)
  : msg_(msg)
  {}
  Init_GimbalAngleDegStamped_roll pitch(::drone_msgs::msg::GimbalAngleDegStamped::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_GimbalAngleDegStamped_roll(msg_);
  }

private:
  ::drone_msgs::msg::GimbalAngleDegStamped msg_;
};

class Init_GimbalAngleDegStamped_yaw
{
public:
  explicit Init_GimbalAngleDegStamped_yaw(::drone_msgs::msg::GimbalAngleDegStamped & msg)
  : msg_(msg)
  {}
  Init_GimbalAngleDegStamped_pitch yaw(::drone_msgs::msg::GimbalAngleDegStamped::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_GimbalAngleDegStamped_pitch(msg_);
  }

private:
  ::drone_msgs::msg::GimbalAngleDegStamped msg_;
};

class Init_GimbalAngleDegStamped_header
{
public:
  Init_GimbalAngleDegStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalAngleDegStamped_yaw header(::drone_msgs::msg::GimbalAngleDegStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GimbalAngleDegStamped_yaw(msg_);
  }

private:
  ::drone_msgs::msg::GimbalAngleDegStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::GimbalAngleDegStamped>()
{
  return drone_msgs::msg::builder::Init_GimbalAngleDegStamped_header();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__GIMBAL_ANGLE_DEG_STAMPED__BUILDER_HPP_
