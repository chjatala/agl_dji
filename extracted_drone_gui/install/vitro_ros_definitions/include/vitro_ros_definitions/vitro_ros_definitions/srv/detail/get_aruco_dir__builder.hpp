// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vitro_ros_definitions:srv/GetArucoDir.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_ARUCO_DIR__BUILDER_HPP_
#define VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_ARUCO_DIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vitro_ros_definitions/srv/detail/get_aruco_dir__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vitro_ros_definitions
{

namespace srv
{

namespace builder
{

class Init_GetArucoDir_Request_id
{
public:
  Init_GetArucoDir_Request_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vitro_ros_definitions::srv::GetArucoDir_Request id(::vitro_ros_definitions::srv::GetArucoDir_Request::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vitro_ros_definitions::srv::GetArucoDir_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vitro_ros_definitions::srv::GetArucoDir_Request>()
{
  return vitro_ros_definitions::srv::builder::Init_GetArucoDir_Request_id();
}

}  // namespace vitro_ros_definitions


namespace vitro_ros_definitions
{

namespace srv
{

namespace builder
{

class Init_GetArucoDir_Response_direction
{
public:
  Init_GetArucoDir_Response_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vitro_ros_definitions::srv::GetArucoDir_Response direction(::vitro_ros_definitions::srv::GetArucoDir_Response::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vitro_ros_definitions::srv::GetArucoDir_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vitro_ros_definitions::srv::GetArucoDir_Response>()
{
  return vitro_ros_definitions::srv::builder::Init_GetArucoDir_Response_direction();
}

}  // namespace vitro_ros_definitions

#endif  // VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_ARUCO_DIR__BUILDER_HPP_
