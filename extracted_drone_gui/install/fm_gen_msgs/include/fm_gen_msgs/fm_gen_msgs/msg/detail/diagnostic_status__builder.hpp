// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fm_gen_msgs:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__BUILDER_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fm_gen_msgs/msg/detail/diagnostic_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fm_gen_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticStatus_values
{
public:
  explicit Init_DiagnosticStatus_values(::fm_gen_msgs::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  ::fm_gen_msgs::msg::DiagnosticStatus values(::fm_gen_msgs::msg::DiagnosticStatus::_values_type arg)
  {
    msg_.values = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fm_gen_msgs::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_num_status
{
public:
  explicit Init_DiagnosticStatus_num_status(::fm_gen_msgs::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_DiagnosticStatus_values num_status(::fm_gen_msgs::msg::DiagnosticStatus::_num_status_type arg)
  {
    msg_.num_status = std::move(arg);
    return Init_DiagnosticStatus_values(msg_);
  }

private:
  ::fm_gen_msgs::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_component_id
{
public:
  explicit Init_DiagnosticStatus_component_id(::fm_gen_msgs::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_DiagnosticStatus_num_status component_id(::fm_gen_msgs::msg::DiagnosticStatus::_component_id_type arg)
  {
    msg_.component_id = std::move(arg);
    return Init_DiagnosticStatus_num_status(msg_);
  }

private:
  ::fm_gen_msgs::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_message
{
public:
  explicit Init_DiagnosticStatus_message(::fm_gen_msgs::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_DiagnosticStatus_component_id message(::fm_gen_msgs::msg::DiagnosticStatus::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_DiagnosticStatus_component_id(msg_);
  }

private:
  ::fm_gen_msgs::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_diagnoiser_name
{
public:
  explicit Init_DiagnosticStatus_diagnoiser_name(::fm_gen_msgs::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_DiagnosticStatus_message diagnoiser_name(::fm_gen_msgs::msg::DiagnosticStatus::_diagnoiser_name_type arg)
  {
    msg_.diagnoiser_name = std::move(arg);
    return Init_DiagnosticStatus_message(msg_);
  }

private:
  ::fm_gen_msgs::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_level
{
public:
  explicit Init_DiagnosticStatus_level(::fm_gen_msgs::msg::DiagnosticStatus & msg)
  : msg_(msg)
  {}
  Init_DiagnosticStatus_diagnoiser_name level(::fm_gen_msgs::msg::DiagnosticStatus::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_DiagnosticStatus_diagnoiser_name(msg_);
  }

private:
  ::fm_gen_msgs::msg::DiagnosticStatus msg_;
};

class Init_DiagnosticStatus_header
{
public:
  Init_DiagnosticStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticStatus_level header(::fm_gen_msgs::msg::DiagnosticStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DiagnosticStatus_level(msg_);
  }

private:
  ::fm_gen_msgs::msg::DiagnosticStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::msg::DiagnosticStatus>()
{
  return fm_gen_msgs::msg::builder::Init_DiagnosticStatus_header();
}

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__BUILDER_HPP_
