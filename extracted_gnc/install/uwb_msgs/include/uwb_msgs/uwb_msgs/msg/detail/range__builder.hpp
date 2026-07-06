// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uwb_msgs:msg/Range.idl
// generated code does not contain a copyright notice

#ifndef UWB_MSGS__MSG__DETAIL__RANGE__BUILDER_HPP_
#define UWB_MSGS__MSG__DETAIL__RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "uwb_msgs/msg/detail/range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace uwb_msgs
{

namespace msg
{

namespace builder
{

class Init_Range_diagnostics
{
public:
  explicit Init_Range_diagnostics(::uwb_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  ::uwb_msgs::msg::Range diagnostics(::uwb_msgs::msg::Range::_diagnostics_type arg)
  {
    msg_.diagnostics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uwb_msgs::msg::Range msg_;
};

class Init_Range_distance
{
public:
  explicit Init_Range_distance(::uwb_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  Init_Range_diagnostics distance(::uwb_msgs::msg::Range::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Range_diagnostics(msg_);
  }

private:
  ::uwb_msgs::msg::Range msg_;
};

class Init_Range_valid_range
{
public:
  explicit Init_Range_valid_range(::uwb_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  Init_Range_distance valid_range(::uwb_msgs::msg::Range::_valid_range_type arg)
  {
    msg_.valid_range = std::move(arg);
    return Init_Range_distance(msg_);
  }

private:
  ::uwb_msgs::msg::Range msg_;
};

class Init_Range_anchor_position
{
public:
  explicit Init_Range_anchor_position(::uwb_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  Init_Range_valid_range anchor_position(::uwb_msgs::msg::Range::_anchor_position_type arg)
  {
    msg_.anchor_position = std::move(arg);
    return Init_Range_valid_range(msg_);
  }

private:
  ::uwb_msgs::msg::Range msg_;
};

class Init_Range_listenerid
{
public:
  explicit Init_Range_listenerid(::uwb_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  Init_Range_anchor_position listenerid(::uwb_msgs::msg::Range::_listenerid_type arg)
  {
    msg_.listenerid = std::move(arg);
    return Init_Range_anchor_position(msg_);
  }

private:
  ::uwb_msgs::msg::Range msg_;
};

class Init_Range_anchorid
{
public:
  explicit Init_Range_anchorid(::uwb_msgs::msg::Range & msg)
  : msg_(msg)
  {}
  Init_Range_listenerid anchorid(::uwb_msgs::msg::Range::_anchorid_type arg)
  {
    msg_.anchorid = std::move(arg);
    return Init_Range_listenerid(msg_);
  }

private:
  ::uwb_msgs::msg::Range msg_;
};

class Init_Range_stamp
{
public:
  Init_Range_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Range_anchorid stamp(::uwb_msgs::msg::Range::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Range_anchorid(msg_);
  }

private:
  ::uwb_msgs::msg::Range msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uwb_msgs::msg::Range>()
{
  return uwb_msgs::msg::builder::Init_Range_stamp();
}

}  // namespace uwb_msgs

#endif  // UWB_MSGS__MSG__DETAIL__RANGE__BUILDER_HPP_
