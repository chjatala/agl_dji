// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uwb_msgs:msg/RangeArray.idl
// generated code does not contain a copyright notice

#ifndef UWB_MSGS__MSG__DETAIL__RANGE_ARRAY__BUILDER_HPP_
#define UWB_MSGS__MSG__DETAIL__RANGE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "uwb_msgs/msg/detail/range_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace uwb_msgs
{

namespace msg
{

namespace builder
{

class Init_RangeArray_ranges
{
public:
  explicit Init_RangeArray_ranges(::uwb_msgs::msg::RangeArray & msg)
  : msg_(msg)
  {}
  ::uwb_msgs::msg::RangeArray ranges(::uwb_msgs::msg::RangeArray::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uwb_msgs::msg::RangeArray msg_;
};

class Init_RangeArray_tag_position
{
public:
  explicit Init_RangeArray_tag_position(::uwb_msgs::msg::RangeArray & msg)
  : msg_(msg)
  {}
  Init_RangeArray_ranges tag_position(::uwb_msgs::msg::RangeArray::_tag_position_type arg)
  {
    msg_.tag_position = std::move(arg);
    return Init_RangeArray_ranges(msg_);
  }

private:
  ::uwb_msgs::msg::RangeArray msg_;
};

class Init_RangeArray_tagid
{
public:
  explicit Init_RangeArray_tagid(::uwb_msgs::msg::RangeArray & msg)
  : msg_(msg)
  {}
  Init_RangeArray_tag_position tagid(::uwb_msgs::msg::RangeArray::_tagid_type arg)
  {
    msg_.tagid = std::move(arg);
    return Init_RangeArray_tag_position(msg_);
  }

private:
  ::uwb_msgs::msg::RangeArray msg_;
};

class Init_RangeArray_header
{
public:
  Init_RangeArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RangeArray_tagid header(::uwb_msgs::msg::RangeArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RangeArray_tagid(msg_);
  }

private:
  ::uwb_msgs::msg::RangeArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uwb_msgs::msg::RangeArray>()
{
  return uwb_msgs::msg::builder::Init_RangeArray_header();
}

}  // namespace uwb_msgs

#endif  // UWB_MSGS__MSG__DETAIL__RANGE_ARRAY__BUILDER_HPP_
