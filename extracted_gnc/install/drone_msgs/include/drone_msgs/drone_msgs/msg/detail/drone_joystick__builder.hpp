// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/DroneJoystick.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_JOYSTICK__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__DRONE_JOYSTICK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/drone_joystick__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_DroneJoystick_yaw
{
public:
  explicit Init_DroneJoystick_yaw(::drone_msgs::msg::DroneJoystick & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::DroneJoystick yaw(::drone_msgs::msg::DroneJoystick::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::DroneJoystick msg_;
};

class Init_DroneJoystick_z
{
public:
  explicit Init_DroneJoystick_z(::drone_msgs::msg::DroneJoystick & msg)
  : msg_(msg)
  {}
  Init_DroneJoystick_yaw z(::drone_msgs::msg::DroneJoystick::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_DroneJoystick_yaw(msg_);
  }

private:
  ::drone_msgs::msg::DroneJoystick msg_;
};

class Init_DroneJoystick_y
{
public:
  explicit Init_DroneJoystick_y(::drone_msgs::msg::DroneJoystick & msg)
  : msg_(msg)
  {}
  Init_DroneJoystick_z y(::drone_msgs::msg::DroneJoystick::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_DroneJoystick_z(msg_);
  }

private:
  ::drone_msgs::msg::DroneJoystick msg_;
};

class Init_DroneJoystick_x
{
public:
  explicit Init_DroneJoystick_x(::drone_msgs::msg::DroneJoystick & msg)
  : msg_(msg)
  {}
  Init_DroneJoystick_y x(::drone_msgs::msg::DroneJoystick::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DroneJoystick_y(msg_);
  }

private:
  ::drone_msgs::msg::DroneJoystick msg_;
};

class Init_DroneJoystick_header
{
public:
  Init_DroneJoystick_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneJoystick_x header(::drone_msgs::msg::DroneJoystick::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DroneJoystick_x(msg_);
  }

private:
  ::drone_msgs::msg::DroneJoystick msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::DroneJoystick>()
{
  return drone_msgs::msg::builder::Init_DroneJoystick_header();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_JOYSTICK__BUILDER_HPP_
