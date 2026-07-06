// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fm_gen_msgs:msg/SysStateStamped.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_STAMPED__BUILDER_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fm_gen_msgs/msg/detail/sys_state_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fm_gen_msgs
{

namespace msg
{

namespace builder
{

class Init_SysStateStamped_state
{
public:
  explicit Init_SysStateStamped_state(::fm_gen_msgs::msg::SysStateStamped & msg)
  : msg_(msg)
  {}
  ::fm_gen_msgs::msg::SysStateStamped state(::fm_gen_msgs::msg::SysStateStamped::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fm_gen_msgs::msg::SysStateStamped msg_;
};

class Init_SysStateStamped_dim
{
public:
  explicit Init_SysStateStamped_dim(::fm_gen_msgs::msg::SysStateStamped & msg)
  : msg_(msg)
  {}
  Init_SysStateStamped_state dim(::fm_gen_msgs::msg::SysStateStamped::_dim_type arg)
  {
    msg_.dim = std::move(arg);
    return Init_SysStateStamped_state(msg_);
  }

private:
  ::fm_gen_msgs::msg::SysStateStamped msg_;
};

class Init_SysStateStamped_header
{
public:
  Init_SysStateStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SysStateStamped_dim header(::fm_gen_msgs::msg::SysStateStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SysStateStamped_dim(msg_);
  }

private:
  ::fm_gen_msgs::msg::SysStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::msg::SysStateStamped>()
{
  return fm_gen_msgs::msg::builder::Init_SysStateStamped_header();
}

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_STAMPED__BUILDER_HPP_
