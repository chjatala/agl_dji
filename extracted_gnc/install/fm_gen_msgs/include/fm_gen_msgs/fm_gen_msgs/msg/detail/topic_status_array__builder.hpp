// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fm_gen_msgs:msg/TopicStatusArray.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS_ARRAY__BUILDER_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fm_gen_msgs/msg/detail/topic_status_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fm_gen_msgs
{

namespace msg
{

namespace builder
{

class Init_TopicStatusArray_topic_array
{
public:
  explicit Init_TopicStatusArray_topic_array(::fm_gen_msgs::msg::TopicStatusArray & msg)
  : msg_(msg)
  {}
  ::fm_gen_msgs::msg::TopicStatusArray topic_array(::fm_gen_msgs::msg::TopicStatusArray::_topic_array_type arg)
  {
    msg_.topic_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fm_gen_msgs::msg::TopicStatusArray msg_;
};

class Init_TopicStatusArray_status_sum
{
public:
  explicit Init_TopicStatusArray_status_sum(::fm_gen_msgs::msg::TopicStatusArray & msg)
  : msg_(msg)
  {}
  Init_TopicStatusArray_topic_array status_sum(::fm_gen_msgs::msg::TopicStatusArray::_status_sum_type arg)
  {
    msg_.status_sum = std::move(arg);
    return Init_TopicStatusArray_topic_array(msg_);
  }

private:
  ::fm_gen_msgs::msg::TopicStatusArray msg_;
};

class Init_TopicStatusArray_general_status
{
public:
  explicit Init_TopicStatusArray_general_status(::fm_gen_msgs::msg::TopicStatusArray & msg)
  : msg_(msg)
  {}
  Init_TopicStatusArray_status_sum general_status(::fm_gen_msgs::msg::TopicStatusArray::_general_status_type arg)
  {
    msg_.general_status = std::move(arg);
    return Init_TopicStatusArray_status_sum(msg_);
  }

private:
  ::fm_gen_msgs::msg::TopicStatusArray msg_;
};

class Init_TopicStatusArray_header
{
public:
  Init_TopicStatusArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TopicStatusArray_general_status header(::fm_gen_msgs::msg::TopicStatusArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TopicStatusArray_general_status(msg_);
  }

private:
  ::fm_gen_msgs::msg::TopicStatusArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::msg::TopicStatusArray>()
{
  return fm_gen_msgs::msg::builder::Init_TopicStatusArray_header();
}

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS_ARRAY__BUILDER_HPP_
