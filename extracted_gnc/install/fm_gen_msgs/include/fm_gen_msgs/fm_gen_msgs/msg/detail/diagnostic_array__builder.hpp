// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fm_gen_msgs:msg/DiagnosticArray.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__BUILDER_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fm_gen_msgs/msg/detail/diagnostic_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fm_gen_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticArray_status
{
public:
  explicit Init_DiagnosticArray_status(::fm_gen_msgs::msg::DiagnosticArray & msg)
  : msg_(msg)
  {}
  ::fm_gen_msgs::msg::DiagnosticArray status(::fm_gen_msgs::msg::DiagnosticArray::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fm_gen_msgs::msg::DiagnosticArray msg_;
};

class Init_DiagnosticArray_header
{
public:
  Init_DiagnosticArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticArray_status header(::fm_gen_msgs::msg::DiagnosticArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DiagnosticArray_status(msg_);
  }

private:
  ::fm_gen_msgs::msg::DiagnosticArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::msg::DiagnosticArray>()
{
  return fm_gen_msgs::msg::builder::Init_DiagnosticArray_header();
}

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_ARRAY__BUILDER_HPP_
