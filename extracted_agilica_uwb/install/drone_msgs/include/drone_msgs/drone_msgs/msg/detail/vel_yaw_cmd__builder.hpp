// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/VelYawCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__VEL_YAW_CMD__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__VEL_YAW_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/vel_yaw_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_VelYawCmd_yaw
{
public:
  explicit Init_VelYawCmd_yaw(::drone_msgs::msg::VelYawCmd & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::VelYawCmd yaw(::drone_msgs::msg::VelYawCmd::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::VelYawCmd msg_;
};

class Init_VelYawCmd_velocity
{
public:
  Init_VelYawCmd_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelYawCmd_yaw velocity(::drone_msgs::msg::VelYawCmd::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_VelYawCmd_yaw(msg_);
  }

private:
  ::drone_msgs::msg::VelYawCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::VelYawCmd>()
{
  return drone_msgs::msg::builder::Init_VelYawCmd_velocity();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__VEL_YAW_CMD__BUILDER_HPP_
