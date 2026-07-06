// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from wifi_msgs:msg/DiagnosticsRSSI.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RSSI__BUILDER_HPP_
#define WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RSSI__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "wifi_msgs/msg/detail/diagnostics_rssi__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace wifi_msgs
{

namespace msg
{

namespace builder
{

class Init_DiagnosticsRSSI_n
{
public:
  explicit Init_DiagnosticsRSSI_n(::wifi_msgs::msg::DiagnosticsRSSI & msg)
  : msg_(msg)
  {}
  ::wifi_msgs::msg::DiagnosticsRSSI n(::wifi_msgs::msg::DiagnosticsRSSI::_n_type arg)
  {
    msg_.n = std::move(arg);
    return std::move(msg_);
  }

private:
  ::wifi_msgs::msg::DiagnosticsRSSI msg_;
};

class Init_DiagnosticsRSSI_a
{
public:
  explicit Init_DiagnosticsRSSI_a(::wifi_msgs::msg::DiagnosticsRSSI & msg)
  : msg_(msg)
  {}
  Init_DiagnosticsRSSI_n a(::wifi_msgs::msg::DiagnosticsRSSI::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_DiagnosticsRSSI_n(msg_);
  }

private:
  ::wifi_msgs::msg::DiagnosticsRSSI msg_;
};

class Init_DiagnosticsRSSI_rssi
{
public:
  Init_DiagnosticsRSSI_rssi()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticsRSSI_a rssi(::wifi_msgs::msg::DiagnosticsRSSI::_rssi_type arg)
  {
    msg_.rssi = std::move(arg);
    return Init_DiagnosticsRSSI_a(msg_);
  }

private:
  ::wifi_msgs::msg::DiagnosticsRSSI msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::wifi_msgs::msg::DiagnosticsRSSI>()
{
  return wifi_msgs::msg::builder::Init_DiagnosticsRSSI_rssi();
}

}  // namespace wifi_msgs

#endif  // WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RSSI__BUILDER_HPP_
