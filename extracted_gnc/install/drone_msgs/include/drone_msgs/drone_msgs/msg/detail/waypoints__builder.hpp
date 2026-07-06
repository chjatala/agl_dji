// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__WAYPOINTS__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__WAYPOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/waypoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_Waypoints_last_wp_reached
{
public:
  explicit Init_Waypoints_last_wp_reached(::drone_msgs::msg::Waypoints & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::Waypoints last_wp_reached(::drone_msgs::msg::Waypoints::_last_wp_reached_type arg)
  {
    msg_.last_wp_reached = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::Waypoints msg_;
};

class Init_Waypoints_previous_wp
{
public:
  explicit Init_Waypoints_previous_wp(::drone_msgs::msg::Waypoints & msg)
  : msg_(msg)
  {}
  Init_Waypoints_last_wp_reached previous_wp(::drone_msgs::msg::Waypoints::_previous_wp_type arg)
  {
    msg_.previous_wp = std::move(arg);
    return Init_Waypoints_last_wp_reached(msg_);
  }

private:
  ::drone_msgs::msg::Waypoints msg_;
};

class Init_Waypoints_current_wp
{
public:
  Init_Waypoints_current_wp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Waypoints_previous_wp current_wp(::drone_msgs::msg::Waypoints::_current_wp_type arg)
  {
    msg_.current_wp = std::move(arg);
    return Init_Waypoints_previous_wp(msg_);
  }

private:
  ::drone_msgs::msg::Waypoints msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::Waypoints>()
{
  return drone_msgs::msg::builder::Init_Waypoints_current_wp();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__WAYPOINTS__BUILDER_HPP_
