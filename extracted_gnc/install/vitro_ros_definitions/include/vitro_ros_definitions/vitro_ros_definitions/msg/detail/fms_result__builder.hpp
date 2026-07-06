// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vitro_ros_definitions:msg/FMSResult.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULT__BUILDER_HPP_
#define VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vitro_ros_definitions/msg/detail/fms_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vitro_ros_definitions
{

namespace msg
{

namespace builder
{

class Init_FMSResult_img
{
public:
  explicit Init_FMSResult_img(::vitro_ros_definitions::msg::FMSResult & msg)
  : msg_(msg)
  {}
  ::vitro_ros_definitions::msg::FMSResult img(::vitro_ros_definitions::msg::FMSResult::_img_type arg)
  {
    msg_.img = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vitro_ros_definitions::msg::FMSResult msg_;
};

class Init_FMSResult_pose
{
public:
  explicit Init_FMSResult_pose(::vitro_ros_definitions::msg::FMSResult & msg)
  : msg_(msg)
  {}
  Init_FMSResult_img pose(::vitro_ros_definitions::msg::FMSResult::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_FMSResult_img(msg_);
  }

private:
  ::vitro_ros_definitions::msg::FMSResult msg_;
};

class Init_FMSResult_id_confidence
{
public:
  explicit Init_FMSResult_id_confidence(::vitro_ros_definitions::msg::FMSResult & msg)
  : msg_(msg)
  {}
  Init_FMSResult_pose id_confidence(::vitro_ros_definitions::msg::FMSResult::_id_confidence_type arg)
  {
    msg_.id_confidence = std::move(arg);
    return Init_FMSResult_pose(msg_);
  }

private:
  ::vitro_ros_definitions::msg::FMSResult msg_;
};

class Init_FMSResult_id
{
public:
  Init_FMSResult_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FMSResult_id_confidence id(::vitro_ros_definitions::msg::FMSResult::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_FMSResult_id_confidence(msg_);
  }

private:
  ::vitro_ros_definitions::msg::FMSResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vitro_ros_definitions::msg::FMSResult>()
{
  return vitro_ros_definitions::msg::builder::Init_FMSResult_id();
}

}  // namespace vitro_ros_definitions

#endif  // VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULT__BUILDER_HPP_
