// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fm_gen_msgs:msg/PoseInCorridor.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__POSE_IN_CORRIDOR__BUILDER_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__POSE_IN_CORRIDOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fm_gen_msgs/msg/detail/pose_in_corridor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fm_gen_msgs
{

namespace msg
{

namespace builder
{

class Init_PoseInCorridor_yaw
{
public:
  explicit Init_PoseInCorridor_yaw(::fm_gen_msgs::msg::PoseInCorridor & msg)
  : msg_(msg)
  {}
  ::fm_gen_msgs::msg::PoseInCorridor yaw(::fm_gen_msgs::msg::PoseInCorridor::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fm_gen_msgs::msg::PoseInCorridor msg_;
};

class Init_PoseInCorridor_y
{
public:
  explicit Init_PoseInCorridor_y(::fm_gen_msgs::msg::PoseInCorridor & msg)
  : msg_(msg)
  {}
  Init_PoseInCorridor_yaw y(::fm_gen_msgs::msg::PoseInCorridor::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PoseInCorridor_yaw(msg_);
  }

private:
  ::fm_gen_msgs::msg::PoseInCorridor msg_;
};

class Init_PoseInCorridor_header
{
public:
  Init_PoseInCorridor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseInCorridor_y header(::fm_gen_msgs::msg::PoseInCorridor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PoseInCorridor_y(msg_);
  }

private:
  ::fm_gen_msgs::msg::PoseInCorridor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::msg::PoseInCorridor>()
{
  return fm_gen_msgs::msg::builder::Init_PoseInCorridor_header();
}

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__POSE_IN_CORRIDOR__BUILDER_HPP_
