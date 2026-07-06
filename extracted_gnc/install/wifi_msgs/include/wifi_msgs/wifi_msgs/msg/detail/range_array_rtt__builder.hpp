// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wifi_msgs:msg/RangeArrayRTT.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__RANGE_ARRAY_RTT__BUILDER_HPP_
#define WIFI_MSGS__MSG__DETAIL__RANGE_ARRAY_RTT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wifi_msgs/msg/detail/range_array_rtt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wifi_msgs
{

namespace msg
{

namespace builder
{

class Init_RangeArrayRTT_ranges
{
public:
  explicit Init_RangeArrayRTT_ranges(::wifi_msgs::msg::RangeArrayRTT & msg)
  : msg_(msg)
  {}
  ::wifi_msgs::msg::RangeArrayRTT ranges(::wifi_msgs::msg::RangeArrayRTT::_ranges_type arg)
  {
    msg_.ranges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wifi_msgs::msg::RangeArrayRTT msg_;
};

class Init_RangeArrayRTT_tag_position
{
public:
  explicit Init_RangeArrayRTT_tag_position(::wifi_msgs::msg::RangeArrayRTT & msg)
  : msg_(msg)
  {}
  Init_RangeArrayRTT_ranges tag_position(::wifi_msgs::msg::RangeArrayRTT::_tag_position_type arg)
  {
    msg_.tag_position = std::move(arg);
    return Init_RangeArrayRTT_ranges(msg_);
  }

private:
  ::wifi_msgs::msg::RangeArrayRTT msg_;
};

class Init_RangeArrayRTT_tag_mac
{
public:
  explicit Init_RangeArrayRTT_tag_mac(::wifi_msgs::msg::RangeArrayRTT & msg)
  : msg_(msg)
  {}
  Init_RangeArrayRTT_tag_position tag_mac(::wifi_msgs::msg::RangeArrayRTT::_tag_mac_type arg)
  {
    msg_.tag_mac = std::move(arg);
    return Init_RangeArrayRTT_tag_position(msg_);
  }

private:
  ::wifi_msgs::msg::RangeArrayRTT msg_;
};

class Init_RangeArrayRTT_header
{
public:
  Init_RangeArrayRTT_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RangeArrayRTT_tag_mac header(::wifi_msgs::msg::RangeArrayRTT::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RangeArrayRTT_tag_mac(msg_);
  }

private:
  ::wifi_msgs::msg::RangeArrayRTT msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wifi_msgs::msg::RangeArrayRTT>()
{
  return wifi_msgs::msg::builder::Init_RangeArrayRTT_header();
}

}  // namespace wifi_msgs

#endif  // WIFI_MSGS__MSG__DETAIL__RANGE_ARRAY_RTT__BUILDER_HPP_
