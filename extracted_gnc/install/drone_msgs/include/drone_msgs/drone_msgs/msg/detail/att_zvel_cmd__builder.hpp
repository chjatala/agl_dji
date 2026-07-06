// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/AttZvelCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__ATT_ZVEL_CMD__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__ATT_ZVEL_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/att_zvel_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_AttZvelCmd_z_vel
{
public:
  explicit Init_AttZvelCmd_z_vel(::drone_msgs::msg::AttZvelCmd & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::AttZvelCmd z_vel(::drone_msgs::msg::AttZvelCmd::_z_vel_type arg)
  {
    msg_.z_vel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::AttZvelCmd msg_;
};

class Init_AttZvelCmd_yaw
{
public:
  explicit Init_AttZvelCmd_yaw(::drone_msgs::msg::AttZvelCmd & msg)
  : msg_(msg)
  {}
  Init_AttZvelCmd_z_vel yaw(::drone_msgs::msg::AttZvelCmd::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_AttZvelCmd_z_vel(msg_);
  }

private:
  ::drone_msgs::msg::AttZvelCmd msg_;
};

class Init_AttZvelCmd_pitch
{
public:
  explicit Init_AttZvelCmd_pitch(::drone_msgs::msg::AttZvelCmd & msg)
  : msg_(msg)
  {}
  Init_AttZvelCmd_yaw pitch(::drone_msgs::msg::AttZvelCmd::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_AttZvelCmd_yaw(msg_);
  }

private:
  ::drone_msgs::msg::AttZvelCmd msg_;
};

class Init_AttZvelCmd_roll
{
public:
  Init_AttZvelCmd_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttZvelCmd_pitch roll(::drone_msgs::msg::AttZvelCmd::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_AttZvelCmd_pitch(msg_);
  }

private:
  ::drone_msgs::msg::AttZvelCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::AttZvelCmd>()
{
  return drone_msgs::msg::builder::Init_AttZvelCmd_roll();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__ATT_ZVEL_CMD__BUILDER_HPP_
