// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fm_gen_msgs:msg/TopicStatus.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS__BUILDER_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fm_gen_msgs/msg/detail/topic_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fm_gen_msgs
{

namespace msg
{

namespace builder
{

class Init_TopicStatus_error_value
{
public:
  explicit Init_TopicStatus_error_value(::fm_gen_msgs::msg::TopicStatus & msg)
  : msg_(msg)
  {}
  ::fm_gen_msgs::msg::TopicStatus error_value(::fm_gen_msgs::msg::TopicStatus::_error_value_type arg)
  {
    msg_.error_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fm_gen_msgs::msg::TopicStatus msg_;
};

class Init_TopicStatus_error_code
{
public:
  explicit Init_TopicStatus_error_code(::fm_gen_msgs::msg::TopicStatus & msg)
  : msg_(msg)
  {}
  Init_TopicStatus_error_value error_code(::fm_gen_msgs::msg::TopicStatus::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_TopicStatus_error_value(msg_);
  }

private:
  ::fm_gen_msgs::msg::TopicStatus msg_;
};

class Init_TopicStatus_error_message
{
public:
  explicit Init_TopicStatus_error_message(::fm_gen_msgs::msg::TopicStatus & msg)
  : msg_(msg)
  {}
  Init_TopicStatus_error_code error_message(::fm_gen_msgs::msg::TopicStatus::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_TopicStatus_error_code(msg_);
  }

private:
  ::fm_gen_msgs::msg::TopicStatus msg_;
};

class Init_TopicStatus_topic_is_ok
{
public:
  explicit Init_TopicStatus_topic_is_ok(::fm_gen_msgs::msg::TopicStatus & msg)
  : msg_(msg)
  {}
  Init_TopicStatus_error_message topic_is_ok(::fm_gen_msgs::msg::TopicStatus::_topic_is_ok_type arg)
  {
    msg_.topic_is_ok = std::move(arg);
    return Init_TopicStatus_error_message(msg_);
  }

private:
  ::fm_gen_msgs::msg::TopicStatus msg_;
};

class Init_TopicStatus_topic_name
{
public:
  Init_TopicStatus_topic_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TopicStatus_topic_is_ok topic_name(::fm_gen_msgs::msg::TopicStatus::_topic_name_type arg)
  {
    msg_.topic_name = std::move(arg);
    return Init_TopicStatus_topic_is_ok(msg_);
  }

private:
  ::fm_gen_msgs::msg::TopicStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::msg::TopicStatus>()
{
  return fm_gen_msgs::msg::builder::Init_TopicStatus_topic_name();
}

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS__BUILDER_HPP_
