// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/DroneCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_CMD__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__DRONE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/drone_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_DroneCmd_tgt
{
public:
  explicit Init_DroneCmd_tgt(::drone_msgs::msg::DroneCmd & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::DroneCmd tgt(::drone_msgs::msg::DroneCmd::_tgt_type arg)
  {
    msg_.tgt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::DroneCmd msg_;
};

class Init_DroneCmd_cmder
{
public:
  explicit Init_DroneCmd_cmder(::drone_msgs::msg::DroneCmd & msg)
  : msg_(msg)
  {}
  Init_DroneCmd_tgt cmder(::drone_msgs::msg::DroneCmd::_cmder_type arg)
  {
    msg_.cmder = std::move(arg);
    return Init_DroneCmd_tgt(msg_);
  }

private:
  ::drone_msgs::msg::DroneCmd msg_;
};

class Init_DroneCmd_note
{
public:
  explicit Init_DroneCmd_note(::drone_msgs::msg::DroneCmd & msg)
  : msg_(msg)
  {}
  Init_DroneCmd_cmder note(::drone_msgs::msg::DroneCmd::_note_type arg)
  {
    msg_.note = std::move(arg);
    return Init_DroneCmd_cmder(msg_);
  }

private:
  ::drone_msgs::msg::DroneCmd msg_;
};

class Init_DroneCmd_param
{
public:
  explicit Init_DroneCmd_param(::drone_msgs::msg::DroneCmd & msg)
  : msg_(msg)
  {}
  Init_DroneCmd_note param(::drone_msgs::msg::DroneCmd::_param_type arg)
  {
    msg_.param = std::move(arg);
    return Init_DroneCmd_note(msg_);
  }

private:
  ::drone_msgs::msg::DroneCmd msg_;
};

class Init_DroneCmd_cmd
{
public:
  explicit Init_DroneCmd_cmd(::drone_msgs::msg::DroneCmd & msg)
  : msg_(msg)
  {}
  Init_DroneCmd_param cmd(::drone_msgs::msg::DroneCmd::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_DroneCmd_param(msg_);
  }

private:
  ::drone_msgs::msg::DroneCmd msg_;
};

class Init_DroneCmd_header
{
public:
  Init_DroneCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneCmd_cmd header(::drone_msgs::msg::DroneCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DroneCmd_cmd(msg_);
  }

private:
  ::drone_msgs::msg::DroneCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::DroneCmd>()
{
  return drone_msgs::msg::builder::Init_DroneCmd_header();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_CMD__BUILDER_HPP_
