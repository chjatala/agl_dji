// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fm_gen_msgs:msg/SysStateWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fm_gen_msgs/msg/detail/sys_state_with_covariance_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fm_gen_msgs
{

namespace msg
{

namespace builder
{

class Init_SysStateWithCovarianceStamped_covariance
{
public:
  explicit Init_SysStateWithCovarianceStamped_covariance(::fm_gen_msgs::msg::SysStateWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  ::fm_gen_msgs::msg::SysStateWithCovarianceStamped covariance(::fm_gen_msgs::msg::SysStateWithCovarianceStamped::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fm_gen_msgs::msg::SysStateWithCovarianceStamped msg_;
};

class Init_SysStateWithCovarianceStamped_state
{
public:
  explicit Init_SysStateWithCovarianceStamped_state(::fm_gen_msgs::msg::SysStateWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  Init_SysStateWithCovarianceStamped_covariance state(::fm_gen_msgs::msg::SysStateWithCovarianceStamped::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_SysStateWithCovarianceStamped_covariance(msg_);
  }

private:
  ::fm_gen_msgs::msg::SysStateWithCovarianceStamped msg_;
};

class Init_SysStateWithCovarianceStamped_state_name
{
public:
  explicit Init_SysStateWithCovarianceStamped_state_name(::fm_gen_msgs::msg::SysStateWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  Init_SysStateWithCovarianceStamped_state state_name(::fm_gen_msgs::msg::SysStateWithCovarianceStamped::_state_name_type arg)
  {
    msg_.state_name = std::move(arg);
    return Init_SysStateWithCovarianceStamped_state(msg_);
  }

private:
  ::fm_gen_msgs::msg::SysStateWithCovarianceStamped msg_;
};

class Init_SysStateWithCovarianceStamped_dim
{
public:
  explicit Init_SysStateWithCovarianceStamped_dim(::fm_gen_msgs::msg::SysStateWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  Init_SysStateWithCovarianceStamped_state_name dim(::fm_gen_msgs::msg::SysStateWithCovarianceStamped::_dim_type arg)
  {
    msg_.dim = std::move(arg);
    return Init_SysStateWithCovarianceStamped_state_name(msg_);
  }

private:
  ::fm_gen_msgs::msg::SysStateWithCovarianceStamped msg_;
};

class Init_SysStateWithCovarianceStamped_header
{
public:
  Init_SysStateWithCovarianceStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SysStateWithCovarianceStamped_dim header(::fm_gen_msgs::msg::SysStateWithCovarianceStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SysStateWithCovarianceStamped_dim(msg_);
  }

private:
  ::fm_gen_msgs::msg::SysStateWithCovarianceStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::msg::SysStateWithCovarianceStamped>()
{
  return fm_gen_msgs::msg::builder::Init_SysStateWithCovarianceStamped_header();
}

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
