// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:msg/DroneStateStamped.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_STATE_STAMPED__BUILDER_HPP_
#define DRONE_MSGS__MSG__DETAIL__DRONE_STATE_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/msg/detail/drone_state_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace msg
{

namespace builder
{

class Init_DroneStateStamped_battery_voltage
{
public:
  explicit Init_DroneStateStamped_battery_voltage(::drone_msgs::msg::DroneStateStamped & msg)
  : msg_(msg)
  {}
  ::drone_msgs::msg::DroneStateStamped battery_voltage(::drone_msgs::msg::DroneStateStamped::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::msg::DroneStateStamped msg_;
};

class Init_DroneStateStamped_battery_remain
{
public:
  explicit Init_DroneStateStamped_battery_remain(::drone_msgs::msg::DroneStateStamped & msg)
  : msg_(msg)
  {}
  Init_DroneStateStamped_battery_voltage battery_remain(::drone_msgs::msg::DroneStateStamped::_battery_remain_type arg)
  {
    msg_.battery_remain = std::move(arg);
    return Init_DroneStateStamped_battery_voltage(msg_);
  }

private:
  ::drone_msgs::msg::DroneStateStamped msg_;
};

class Init_DroneStateStamped_armed
{
public:
  explicit Init_DroneStateStamped_armed(::drone_msgs::msg::DroneStateStamped & msg)
  : msg_(msg)
  {}
  Init_DroneStateStamped_battery_remain armed(::drone_msgs::msg::DroneStateStamped::_armed_type arg)
  {
    msg_.armed = std::move(arg);
    return Init_DroneStateStamped_battery_remain(msg_);
  }

private:
  ::drone_msgs::msg::DroneStateStamped msg_;
};

class Init_DroneStateStamped_pil_state
{
public:
  explicit Init_DroneStateStamped_pil_state(::drone_msgs::msg::DroneStateStamped & msg)
  : msg_(msg)
  {}
  Init_DroneStateStamped_armed pil_state(::drone_msgs::msg::DroneStateStamped::_pil_state_type arg)
  {
    msg_.pil_state = std::move(arg);
    return Init_DroneStateStamped_armed(msg_);
  }

private:
  ::drone_msgs::msg::DroneStateStamped msg_;
};

class Init_DroneStateStamped_mission_state
{
public:
  explicit Init_DroneStateStamped_mission_state(::drone_msgs::msg::DroneStateStamped & msg)
  : msg_(msg)
  {}
  Init_DroneStateStamped_pil_state mission_state(::drone_msgs::msg::DroneStateStamped::_mission_state_type arg)
  {
    msg_.mission_state = std::move(arg);
    return Init_DroneStateStamped_pil_state(msg_);
  }

private:
  ::drone_msgs::msg::DroneStateStamped msg_;
};

class Init_DroneStateStamped_nav_state
{
public:
  explicit Init_DroneStateStamped_nav_state(::drone_msgs::msg::DroneStateStamped & msg)
  : msg_(msg)
  {}
  Init_DroneStateStamped_mission_state nav_state(::drone_msgs::msg::DroneStateStamped::_nav_state_type arg)
  {
    msg_.nav_state = std::move(arg);
    return Init_DroneStateStamped_mission_state(msg_);
  }

private:
  ::drone_msgs::msg::DroneStateStamped msg_;
};

class Init_DroneStateStamped_cam_state
{
public:
  explicit Init_DroneStateStamped_cam_state(::drone_msgs::msg::DroneStateStamped & msg)
  : msg_(msg)
  {}
  Init_DroneStateStamped_nav_state cam_state(::drone_msgs::msg::DroneStateStamped::_cam_state_type arg)
  {
    msg_.cam_state = std::move(arg);
    return Init_DroneStateStamped_nav_state(msg_);
  }

private:
  ::drone_msgs::msg::DroneStateStamped msg_;
};

class Init_DroneStateStamped_ctrl_mode
{
public:
  explicit Init_DroneStateStamped_ctrl_mode(::drone_msgs::msg::DroneStateStamped & msg)
  : msg_(msg)
  {}
  Init_DroneStateStamped_cam_state ctrl_mode(::drone_msgs::msg::DroneStateStamped::_ctrl_mode_type arg)
  {
    msg_.ctrl_mode = std::move(arg);
    return Init_DroneStateStamped_cam_state(msg_);
  }

private:
  ::drone_msgs::msg::DroneStateStamped msg_;
};

class Init_DroneStateStamped_flight_state
{
public:
  explicit Init_DroneStateStamped_flight_state(::drone_msgs::msg::DroneStateStamped & msg)
  : msg_(msg)
  {}
  Init_DroneStateStamped_ctrl_mode flight_state(::drone_msgs::msg::DroneStateStamped::_flight_state_type arg)
  {
    msg_.flight_state = std::move(arg);
    return Init_DroneStateStamped_ctrl_mode(msg_);
  }

private:
  ::drone_msgs::msg::DroneStateStamped msg_;
};

class Init_DroneStateStamped_drone_id
{
public:
  explicit Init_DroneStateStamped_drone_id(::drone_msgs::msg::DroneStateStamped & msg)
  : msg_(msg)
  {}
  Init_DroneStateStamped_flight_state drone_id(::drone_msgs::msg::DroneStateStamped::_drone_id_type arg)
  {
    msg_.drone_id = std::move(arg);
    return Init_DroneStateStamped_flight_state(msg_);
  }

private:
  ::drone_msgs::msg::DroneStateStamped msg_;
};

class Init_DroneStateStamped_header
{
public:
  Init_DroneStateStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneStateStamped_drone_id header(::drone_msgs::msg::DroneStateStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DroneStateStamped_drone_id(msg_);
  }

private:
  ::drone_msgs::msg::DroneStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::msg::DroneStateStamped>()
{
  return drone_msgs::msg::builder::Init_DroneStateStamped_header();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_STATE_STAMPED__BUILDER_HPP_
