// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vitro_ros_definitions:msg/InspectionObj.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__MSG__DETAIL__INSPECTION_OBJ__BUILDER_HPP_
#define VITRO_ROS_DEFINITIONS__MSG__DETAIL__INSPECTION_OBJ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vitro_ros_definitions/msg/detail/inspection_obj__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vitro_ros_definitions
{

namespace msg
{

namespace builder
{

class Init_InspectionObj_pose
{
public:
  explicit Init_InspectionObj_pose(::vitro_ros_definitions::msg::InspectionObj & msg)
  : msg_(msg)
  {}
  ::vitro_ros_definitions::msg::InspectionObj pose(::vitro_ros_definitions::msg::InspectionObj::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vitro_ros_definitions::msg::InspectionObj msg_;
};

class Init_InspectionObj_status
{
public:
  explicit Init_InspectionObj_status(::vitro_ros_definitions::msg::InspectionObj & msg)
  : msg_(msg)
  {}
  Init_InspectionObj_pose status(::vitro_ros_definitions::msg::InspectionObj::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_InspectionObj_pose(msg_);
  }

private:
  ::vitro_ros_definitions::msg::InspectionObj msg_;
};

class Init_InspectionObj_id
{
public:
  Init_InspectionObj_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InspectionObj_status id(::vitro_ros_definitions::msg::InspectionObj::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_InspectionObj_status(msg_);
  }

private:
  ::vitro_ros_definitions::msg::InspectionObj msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vitro_ros_definitions::msg::InspectionObj>()
{
  return vitro_ros_definitions::msg::builder::Init_InspectionObj_id();
}

}  // namespace vitro_ros_definitions

#endif  // VITRO_ROS_DEFINITIONS__MSG__DETAIL__INSPECTION_OBJ__BUILDER_HPP_
