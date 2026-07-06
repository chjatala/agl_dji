// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vitro_ros_definitions:srv/GetInspectionObject.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_INSPECTION_OBJECT__BUILDER_HPP_
#define VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_INSPECTION_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vitro_ros_definitions/srv/detail/get_inspection_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vitro_ros_definitions
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vitro_ros_definitions::srv::GetInspectionObject_Request>()
{
  return ::vitro_ros_definitions::srv::GetInspectionObject_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace vitro_ros_definitions


namespace vitro_ros_definitions
{

namespace srv
{

namespace builder
{

class Init_GetInspectionObject_Response_pose
{
public:
  explicit Init_GetInspectionObject_Response_pose(::vitro_ros_definitions::srv::GetInspectionObject_Response & msg)
  : msg_(msg)
  {}
  ::vitro_ros_definitions::srv::GetInspectionObject_Response pose(::vitro_ros_definitions::srv::GetInspectionObject_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vitro_ros_definitions::srv::GetInspectionObject_Response msg_;
};

class Init_GetInspectionObject_Response_status
{
public:
  explicit Init_GetInspectionObject_Response_status(::vitro_ros_definitions::srv::GetInspectionObject_Response & msg)
  : msg_(msg)
  {}
  Init_GetInspectionObject_Response_pose status(::vitro_ros_definitions::srv::GetInspectionObject_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetInspectionObject_Response_pose(msg_);
  }

private:
  ::vitro_ros_definitions::srv::GetInspectionObject_Response msg_;
};

class Init_GetInspectionObject_Response_id
{
public:
  Init_GetInspectionObject_Response_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetInspectionObject_Response_status id(::vitro_ros_definitions::srv::GetInspectionObject_Response::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_GetInspectionObject_Response_status(msg_);
  }

private:
  ::vitro_ros_definitions::srv::GetInspectionObject_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vitro_ros_definitions::srv::GetInspectionObject_Response>()
{
  return vitro_ros_definitions::srv::builder::Init_GetInspectionObject_Response_id();
}

}  // namespace vitro_ros_definitions

#endif  // VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_INSPECTION_OBJECT__BUILDER_HPP_
