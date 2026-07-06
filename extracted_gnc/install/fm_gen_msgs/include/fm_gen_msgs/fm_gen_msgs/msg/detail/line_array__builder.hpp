// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fm_gen_msgs:msg/LineArray.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__LINE_ARRAY__BUILDER_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__LINE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fm_gen_msgs/msg/detail/line_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fm_gen_msgs
{

namespace msg
{

namespace builder
{

class Init_LineArray_lines
{
public:
  explicit Init_LineArray_lines(::fm_gen_msgs::msg::LineArray & msg)
  : msg_(msg)
  {}
  ::fm_gen_msgs::msg::LineArray lines(::fm_gen_msgs::msg::LineArray::_lines_type arg)
  {
    msg_.lines = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fm_gen_msgs::msg::LineArray msg_;
};

class Init_LineArray_time_captured
{
public:
  explicit Init_LineArray_time_captured(::fm_gen_msgs::msg::LineArray & msg)
  : msg_(msg)
  {}
  Init_LineArray_lines time_captured(::fm_gen_msgs::msg::LineArray::_time_captured_type arg)
  {
    msg_.time_captured = std::move(arg);
    return Init_LineArray_lines(msg_);
  }

private:
  ::fm_gen_msgs::msg::LineArray msg_;
};

class Init_LineArray_camera_id
{
public:
  explicit Init_LineArray_camera_id(::fm_gen_msgs::msg::LineArray & msg)
  : msg_(msg)
  {}
  Init_LineArray_time_captured camera_id(::fm_gen_msgs::msg::LineArray::_camera_id_type arg)
  {
    msg_.camera_id = std::move(arg);
    return Init_LineArray_time_captured(msg_);
  }

private:
  ::fm_gen_msgs::msg::LineArray msg_;
};

class Init_LineArray_num_detection
{
public:
  explicit Init_LineArray_num_detection(::fm_gen_msgs::msg::LineArray & msg)
  : msg_(msg)
  {}
  Init_LineArray_camera_id num_detection(::fm_gen_msgs::msg::LineArray::_num_detection_type arg)
  {
    msg_.num_detection = std::move(arg);
    return Init_LineArray_camera_id(msg_);
  }

private:
  ::fm_gen_msgs::msg::LineArray msg_;
};

class Init_LineArray_header
{
public:
  Init_LineArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LineArray_num_detection header(::fm_gen_msgs::msg::LineArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LineArray_num_detection(msg_);
  }

private:
  ::fm_gen_msgs::msg::LineArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::msg::LineArray>()
{
  return fm_gen_msgs::msg::builder::Init_LineArray_header();
}

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__LINE_ARRAY__BUILDER_HPP_
