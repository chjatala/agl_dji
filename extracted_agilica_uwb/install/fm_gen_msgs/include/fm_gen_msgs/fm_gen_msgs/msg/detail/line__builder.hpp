// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fm_gen_msgs:msg/Line.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__LINE__BUILDER_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fm_gen_msgs/msg/detail/line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fm_gen_msgs
{

namespace msg
{

namespace builder
{

class Init_Line_line_c
{
public:
  explicit Init_Line_line_c(::fm_gen_msgs::msg::Line & msg)
  : msg_(msg)
  {}
  ::fm_gen_msgs::msg::Line line_c(::fm_gen_msgs::msg::Line::_line_c_type arg)
  {
    msg_.line_c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fm_gen_msgs::msg::Line msg_;
};

class Init_Line_line_2
{
public:
  explicit Init_Line_line_2(::fm_gen_msgs::msg::Line & msg)
  : msg_(msg)
  {}
  Init_Line_line_c line_2(::fm_gen_msgs::msg::Line::_line_2_type arg)
  {
    msg_.line_2 = std::move(arg);
    return Init_Line_line_c(msg_);
  }

private:
  ::fm_gen_msgs::msg::Line msg_;
};

class Init_Line_line_1
{
public:
  explicit Init_Line_line_1(::fm_gen_msgs::msg::Line & msg)
  : msg_(msg)
  {}
  Init_Line_line_2 line_1(::fm_gen_msgs::msg::Line::_line_1_type arg)
  {
    msg_.line_1 = std::move(arg);
    return Init_Line_line_2(msg_);
  }

private:
  ::fm_gen_msgs::msg::Line msg_;
};

class Init_Line_certainty
{
public:
  explicit Init_Line_certainty(::fm_gen_msgs::msg::Line & msg)
  : msg_(msg)
  {}
  Init_Line_line_1 certainty(::fm_gen_msgs::msg::Line::_certainty_type arg)
  {
    msg_.certainty = std::move(arg);
    return Init_Line_line_1(msg_);
  }

private:
  ::fm_gen_msgs::msg::Line msg_;
};

class Init_Line_line_type
{
public:
  Init_Line_line_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Line_certainty line_type(::fm_gen_msgs::msg::Line::_line_type_type arg)
  {
    msg_.line_type = std::move(arg);
    return Init_Line_certainty(msg_);
  }

private:
  ::fm_gen_msgs::msg::Line msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::msg::Line>()
{
  return fm_gen_msgs::msg::builder::Init_Line_line_type();
}

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__LINE__BUILDER_HPP_
