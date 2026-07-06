// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fm_gen_msgs:srv/Watchdog.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__SRV__DETAIL__WATCHDOG__BUILDER_HPP_
#define FM_GEN_MSGS__SRV__DETAIL__WATCHDOG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fm_gen_msgs/srv/detail/watchdog__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fm_gen_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::srv::Watchdog_Request>()
{
  return ::fm_gen_msgs::srv::Watchdog_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace fm_gen_msgs


namespace fm_gen_msgs
{

namespace srv
{

namespace builder
{

class Init_Watchdog_Response_diagnostic_status
{
public:
  Init_Watchdog_Response_diagnostic_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fm_gen_msgs::srv::Watchdog_Response diagnostic_status(::fm_gen_msgs::srv::Watchdog_Response::_diagnostic_status_type arg)
  {
    msg_.diagnostic_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fm_gen_msgs::srv::Watchdog_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::srv::Watchdog_Response>()
{
  return fm_gen_msgs::srv::builder::Init_Watchdog_Response_diagnostic_status();
}

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__SRV__DETAIL__WATCHDOG__BUILDER_HPP_
