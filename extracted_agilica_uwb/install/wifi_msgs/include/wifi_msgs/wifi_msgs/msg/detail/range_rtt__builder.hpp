// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wifi_msgs:msg/RangeRTT.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__RANGE_RTT__BUILDER_HPP_
#define WIFI_MSGS__MSG__DETAIL__RANGE_RTT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wifi_msgs/msg/detail/range_rtt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wifi_msgs
{

namespace msg
{

namespace builder
{

class Init_RangeRTT_diagnostics
{
public:
  explicit Init_RangeRTT_diagnostics(::wifi_msgs::msg::RangeRTT & msg)
  : msg_(msg)
  {}
  ::wifi_msgs::msg::RangeRTT diagnostics(::wifi_msgs::msg::RangeRTT::_diagnostics_type arg)
  {
    msg_.diagnostics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wifi_msgs::msg::RangeRTT msg_;
};

class Init_RangeRTT_distance
{
public:
  explicit Init_RangeRTT_distance(::wifi_msgs::msg::RangeRTT & msg)
  : msg_(msg)
  {}
  Init_RangeRTT_diagnostics distance(::wifi_msgs::msg::RangeRTT::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_RangeRTT_diagnostics(msg_);
  }

private:
  ::wifi_msgs::msg::RangeRTT msg_;
};

class Init_RangeRTT_valid_range
{
public:
  explicit Init_RangeRTT_valid_range(::wifi_msgs::msg::RangeRTT & msg)
  : msg_(msg)
  {}
  Init_RangeRTT_distance valid_range(::wifi_msgs::msg::RangeRTT::_valid_range_type arg)
  {
    msg_.valid_range = std::move(arg);
    return Init_RangeRTT_distance(msg_);
  }

private:
  ::wifi_msgs::msg::RangeRTT msg_;
};

class Init_RangeRTT_ap_position
{
public:
  explicit Init_RangeRTT_ap_position(::wifi_msgs::msg::RangeRTT & msg)
  : msg_(msg)
  {}
  Init_RangeRTT_valid_range ap_position(::wifi_msgs::msg::RangeRTT::_ap_position_type arg)
  {
    msg_.ap_position = std::move(arg);
    return Init_RangeRTT_valid_range(msg_);
  }

private:
  ::wifi_msgs::msg::RangeRTT msg_;
};

class Init_RangeRTT_valid_ap_position
{
public:
  explicit Init_RangeRTT_valid_ap_position(::wifi_msgs::msg::RangeRTT & msg)
  : msg_(msg)
  {}
  Init_RangeRTT_ap_position valid_ap_position(::wifi_msgs::msg::RangeRTT::_valid_ap_position_type arg)
  {
    msg_.valid_ap_position = std::move(arg);
    return Init_RangeRTT_ap_position(msg_);
  }

private:
  ::wifi_msgs::msg::RangeRTT msg_;
};

class Init_RangeRTT_ap_mac
{
public:
  explicit Init_RangeRTT_ap_mac(::wifi_msgs::msg::RangeRTT & msg)
  : msg_(msg)
  {}
  Init_RangeRTT_valid_ap_position ap_mac(::wifi_msgs::msg::RangeRTT::_ap_mac_type arg)
  {
    msg_.ap_mac = std::move(arg);
    return Init_RangeRTT_valid_ap_position(msg_);
  }

private:
  ::wifi_msgs::msg::RangeRTT msg_;
};

class Init_RangeRTT_stamp
{
public:
  Init_RangeRTT_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RangeRTT_ap_mac stamp(::wifi_msgs::msg::RangeRTT::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RangeRTT_ap_mac(msg_);
  }

private:
  ::wifi_msgs::msg::RangeRTT msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wifi_msgs::msg::RangeRTT>()
{
  return wifi_msgs::msg::builder::Init_RangeRTT_stamp();
}

}  // namespace wifi_msgs

#endif  // WIFI_MSGS__MSG__DETAIL__RANGE_RTT__BUILDER_HPP_
