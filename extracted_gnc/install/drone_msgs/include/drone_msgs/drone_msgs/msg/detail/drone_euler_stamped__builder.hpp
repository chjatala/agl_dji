// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/DroneEulerStamped.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_EULER_STAMPED__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__DRONE_EULER_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/drone_euler_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_DroneEulerStamped_roll
{
public:
  explicit Init_DroneEulerStamped_roll(::drone_msgs::msg::DroneEulerStamped & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::DroneEulerStamped roll(::drone_msgs::msg::DroneEulerStamped::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::DroneEulerStamped msg_;
};

class Init_DroneEulerStamped_pitch
{
public:
  explicit Init_DroneEulerStamped_pitch(::drone_msgs::msg::DroneEulerStamped & msg)
  : msg_(msg)
  {}
  Init_DroneEulerStamped_roll pitch(::drone_msgs::msg::DroneEulerStamped::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_DroneEulerStamped_roll(msg_);
  }

private:
  ::drone_msgs::msg::DroneEulerStamped msg_;
};

class Init_DroneEulerStamped_yaw
{
public:
  explicit Init_DroneEulerStamped_yaw(::drone_msgs::msg::DroneEulerStamped & msg)
  : msg_(msg)
  {}
  Init_DroneEulerStamped_pitch yaw(::drone_msgs::msg::DroneEulerStamped::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_DroneEulerStamped_pitch(msg_);
  }

private:
  ::drone_msgs::msg::DroneEulerStamped msg_;
};

class Init_DroneEulerStamped_header
{
public:
  Init_DroneEulerStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneEulerStamped_yaw header(::drone_msgs::msg::DroneEulerStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DroneEulerStamped_yaw(msg_);
  }

private:
  ::drone_msgs::msg::DroneEulerStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::DroneEulerStamped>()
{
  return drone_msgs::msg::builder::Init_DroneEulerStamped_header();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_EULER_STAMPED__BUILDER_HPP_
