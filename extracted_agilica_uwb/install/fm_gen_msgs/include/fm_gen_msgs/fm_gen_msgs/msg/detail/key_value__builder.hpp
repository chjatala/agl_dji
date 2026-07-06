// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fm_gen_msgs:msg/KeyValue.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fm_gen_msgs/msg/detail/key_value__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fm_gen_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyValue_data_type
{
public:
  explicit Init_KeyValue_data_type(::fm_gen_msgs::msg::KeyValue & msg)
  : msg_(msg)
  {}
  ::fm_gen_msgs::msg::KeyValue data_type(::fm_gen_msgs::msg::KeyValue::_data_type_type arg)
  {
    msg_.data_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fm_gen_msgs::msg::KeyValue msg_;
};

class Init_KeyValue_value
{
public:
  explicit Init_KeyValue_value(::fm_gen_msgs::msg::KeyValue & msg)
  : msg_(msg)
  {}
  Init_KeyValue_data_type value(::fm_gen_msgs::msg::KeyValue::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_KeyValue_data_type(msg_);
  }

private:
  ::fm_gen_msgs::msg::KeyValue msg_;
};

class Init_KeyValue_key
{
public:
  Init_KeyValue_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyValue_value key(::fm_gen_msgs::msg::KeyValue::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyValue_value(msg_);
  }

private:
  ::fm_gen_msgs::msg::KeyValue msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::msg::KeyValue>()
{
  return fm_gen_msgs::msg::builder::Init_KeyValue_key();
}

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__KEY_VALUE__BUILDER_HPP_
