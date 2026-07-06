// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/GenLineFollowCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__GEN_LINE_FOLLOW_CMD__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__GEN_LINE_FOLLOW_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/gen_line_follow_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_GenLineFollowCmd_param
{
public:
  explicit Init_GenLineFollowCmd_param(::drone_msgs::msg::GenLineFollowCmd & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::GenLineFollowCmd param(::drone_msgs::msg::GenLineFollowCmd::_param_type arg)
  {
    msg_.param = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::GenLineFollowCmd msg_;
};

class Init_GenLineFollowCmd_yaw_type
{
public:
  explicit Init_GenLineFollowCmd_yaw_type(::drone_msgs::msg::GenLineFollowCmd & msg)
  : msg_(msg)
  {}
  Init_GenLineFollowCmd_param yaw_type(::drone_msgs::msg::GenLineFollowCmd::_yaw_type_type arg)
  {
    msg_.yaw_type = std::move(arg);
    return Init_GenLineFollowCmd_param(msg_);
  }

private:
  ::drone_msgs::msg::GenLineFollowCmd msg_;
};

class Init_GenLineFollowCmd_yaw_tgt
{
public:
  explicit Init_GenLineFollowCmd_yaw_tgt(::drone_msgs::msg::GenLineFollowCmd & msg)
  : msg_(msg)
  {}
  Init_GenLineFollowCmd_yaw_type yaw_tgt(::drone_msgs::msg::GenLineFollowCmd::_yaw_tgt_type arg)
  {
    msg_.yaw_tgt = std::move(arg);
    return Init_GenLineFollowCmd_yaw_type(msg_);
  }

private:
  ::drone_msgs::msg::GenLineFollowCmd msg_;
};

class Init_GenLineFollowCmd_z_type
{
public:
  explicit Init_GenLineFollowCmd_z_type(::drone_msgs::msg::GenLineFollowCmd & msg)
  : msg_(msg)
  {}
  Init_GenLineFollowCmd_yaw_tgt z_type(::drone_msgs::msg::GenLineFollowCmd::_z_type_type arg)
  {
    msg_.z_type = std::move(arg);
    return Init_GenLineFollowCmd_yaw_tgt(msg_);
  }

private:
  ::drone_msgs::msg::GenLineFollowCmd msg_;
};

class Init_GenLineFollowCmd_z_tgt
{
public:
  explicit Init_GenLineFollowCmd_z_tgt(::drone_msgs::msg::GenLineFollowCmd & msg)
  : msg_(msg)
  {}
  Init_GenLineFollowCmd_z_type z_tgt(::drone_msgs::msg::GenLineFollowCmd::_z_tgt_type arg)
  {
    msg_.z_tgt = std::move(arg);
    return Init_GenLineFollowCmd_z_type(msg_);
  }

private:
  ::drone_msgs::msg::GenLineFollowCmd msg_;
};

class Init_GenLineFollowCmd_y_type
{
public:
  explicit Init_GenLineFollowCmd_y_type(::drone_msgs::msg::GenLineFollowCmd & msg)
  : msg_(msg)
  {}
  Init_GenLineFollowCmd_z_tgt y_type(::drone_msgs::msg::GenLineFollowCmd::_y_type_type arg)
  {
    msg_.y_type = std::move(arg);
    return Init_GenLineFollowCmd_z_tgt(msg_);
  }

private:
  ::drone_msgs::msg::GenLineFollowCmd msg_;
};

class Init_GenLineFollowCmd_y_tgt
{
public:
  explicit Init_GenLineFollowCmd_y_tgt(::drone_msgs::msg::GenLineFollowCmd & msg)
  : msg_(msg)
  {}
  Init_GenLineFollowCmd_y_type y_tgt(::drone_msgs::msg::GenLineFollowCmd::_y_tgt_type arg)
  {
    msg_.y_tgt = std::move(arg);
    return Init_GenLineFollowCmd_y_type(msg_);
  }

private:
  ::drone_msgs::msg::GenLineFollowCmd msg_;
};

class Init_GenLineFollowCmd_x_type
{
public:
  explicit Init_GenLineFollowCmd_x_type(::drone_msgs::msg::GenLineFollowCmd & msg)
  : msg_(msg)
  {}
  Init_GenLineFollowCmd_y_tgt x_type(::drone_msgs::msg::GenLineFollowCmd::_x_type_type arg)
  {
    msg_.x_type = std::move(arg);
    return Init_GenLineFollowCmd_y_tgt(msg_);
  }

private:
  ::drone_msgs::msg::GenLineFollowCmd msg_;
};

class Init_GenLineFollowCmd_x_tgt
{
public:
  explicit Init_GenLineFollowCmd_x_tgt(::drone_msgs::msg::GenLineFollowCmd & msg)
  : msg_(msg)
  {}
  Init_GenLineFollowCmd_x_type x_tgt(::drone_msgs::msg::GenLineFollowCmd::_x_tgt_type arg)
  {
    msg_.x_tgt = std::move(arg);
    return Init_GenLineFollowCmd_x_type(msg_);
  }

private:
  ::drone_msgs::msg::GenLineFollowCmd msg_;
};

class Init_GenLineFollowCmd_header
{
public:
  Init_GenLineFollowCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenLineFollowCmd_x_tgt header(::drone_msgs::msg::GenLineFollowCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GenLineFollowCmd_x_tgt(msg_);
  }

private:
  ::drone_msgs::msg::GenLineFollowCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::GenLineFollowCmd>()
{
  return drone_msgs::msg::builder::Init_GenLineFollowCmd_header();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__GEN_LINE_FOLLOW_CMD__BUILDER_HPP_
