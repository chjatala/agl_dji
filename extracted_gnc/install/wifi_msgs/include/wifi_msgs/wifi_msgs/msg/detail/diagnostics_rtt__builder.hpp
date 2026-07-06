// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wifi_msgs:msg/DiagnosticsRTT.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__BUILDER_HPP_
#define WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wifi_msgs/msg/detail/diagnostics_rtt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wifi_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticsRTT_rtt_variance
{
public:
  explicit Init_DiagnosticsRTT_rtt_variance(::wifi_msgs::msg::DiagnosticsRTT & msg)
  : msg_(msg)
  {}
  ::wifi_msgs::msg::DiagnosticsRTT rtt_variance(::wifi_msgs::msg::DiagnosticsRTT::_rtt_variance_type arg)
  {
    msg_.rtt_variance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wifi_msgs::msg::DiagnosticsRTT msg_;
};

class Init_DiagnosticsRTT_rtt_spread
{
public:
  explicit Init_DiagnosticsRTT_rtt_spread(::wifi_msgs::msg::DiagnosticsRTT & msg)
  : msg_(msg)
  {}
  Init_DiagnosticsRTT_rtt_variance rtt_spread(::wifi_msgs::msg::DiagnosticsRTT::_rtt_spread_type arg)
  {
    msg_.rtt_spread = std::move(arg);
    return Init_DiagnosticsRTT_rtt_variance(msg_);
  }

private:
  ::wifi_msgs::msg::DiagnosticsRTT msg_;
};

class Init_DiagnosticsRTT_rtt_avg
{
public:
  explicit Init_DiagnosticsRTT_rtt_avg(::wifi_msgs::msg::DiagnosticsRTT & msg)
  : msg_(msg)
  {}
  Init_DiagnosticsRTT_rtt_spread rtt_avg(::wifi_msgs::msg::DiagnosticsRTT::_rtt_avg_type arg)
  {
    msg_.rtt_avg = std::move(arg);
    return Init_DiagnosticsRTT_rtt_spread(msg_);
  }

private:
  ::wifi_msgs::msg::DiagnosticsRTT msg_;
};

class Init_DiagnosticsRTT_ftms_per_burst
{
public:
  explicit Init_DiagnosticsRTT_ftms_per_burst(::wifi_msgs::msg::DiagnosticsRTT & msg)
  : msg_(msg)
  {}
  Init_DiagnosticsRTT_rtt_avg ftms_per_burst(::wifi_msgs::msg::DiagnosticsRTT::_ftms_per_burst_type arg)
  {
    msg_.ftms_per_burst = std::move(arg);
    return Init_DiagnosticsRTT_rtt_avg(msg_);
  }

private:
  ::wifi_msgs::msg::DiagnosticsRTT msg_;
};

class Init_DiagnosticsRTT_burst_duration
{
public:
  explicit Init_DiagnosticsRTT_burst_duration(::wifi_msgs::msg::DiagnosticsRTT & msg)
  : msg_(msg)
  {}
  Init_DiagnosticsRTT_ftms_per_burst burst_duration(::wifi_msgs::msg::DiagnosticsRTT::_burst_duration_type arg)
  {
    msg_.burst_duration = std::move(arg);
    return Init_DiagnosticsRTT_ftms_per_burst(msg_);
  }

private:
  ::wifi_msgs::msg::DiagnosticsRTT msg_;
};

class Init_DiagnosticsRTT_num_bursts
{
public:
  explicit Init_DiagnosticsRTT_num_bursts(::wifi_msgs::msg::DiagnosticsRTT & msg)
  : msg_(msg)
  {}
  Init_DiagnosticsRTT_burst_duration num_bursts(::wifi_msgs::msg::DiagnosticsRTT::_num_bursts_type arg)
  {
    msg_.num_bursts = std::move(arg);
    return Init_DiagnosticsRTT_burst_duration(msg_);
  }

private:
  ::wifi_msgs::msg::DiagnosticsRTT msg_;
};

class Init_DiagnosticsRTT_rssi_spread
{
public:
  explicit Init_DiagnosticsRTT_rssi_spread(::wifi_msgs::msg::DiagnosticsRTT & msg)
  : msg_(msg)
  {}
  Init_DiagnosticsRTT_num_bursts rssi_spread(::wifi_msgs::msg::DiagnosticsRTT::_rssi_spread_type arg)
  {
    msg_.rssi_spread = std::move(arg);
    return Init_DiagnosticsRTT_num_bursts(msg_);
  }

private:
  ::wifi_msgs::msg::DiagnosticsRTT msg_;
};

class Init_DiagnosticsRTT_rssi
{
public:
  Init_DiagnosticsRTT_rssi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticsRTT_rssi_spread rssi(::wifi_msgs::msg::DiagnosticsRTT::_rssi_type arg)
  {
    msg_.rssi = std::move(arg);
    return Init_DiagnosticsRTT_rssi_spread(msg_);
  }

private:
  ::wifi_msgs::msg::DiagnosticsRTT msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wifi_msgs::msg::DiagnosticsRTT>()
{
  return wifi_msgs::msg::builder::Init_DiagnosticsRTT_rssi();
}

}  // namespace wifi_msgs

#endif  // WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__BUILDER_HPP_
