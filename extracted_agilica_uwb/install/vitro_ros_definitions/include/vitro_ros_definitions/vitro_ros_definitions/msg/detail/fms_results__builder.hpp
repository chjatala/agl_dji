// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vitro_ros_definitions:msg/FMSResults.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULTS__BUILDER_HPP_
#define VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vitro_ros_definitions/msg/detail/fms_results__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vitro_ros_definitions
{

namespace msg
{

namespace builder
{

class Init_FMSResults_results
{
public:
  Init_FMSResults_results()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vitro_ros_definitions::msg::FMSResults results(::vitro_ros_definitions::msg::FMSResults::_results_type arg)
  {
    msg_.results = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vitro_ros_definitions::msg::FMSResults msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vitro_ros_definitions::msg::FMSResults>()
{
  return vitro_ros_definitions::msg::builder::Init_FMSResults_results();
}

}  // namespace vitro_ros_definitions

#endif  // VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULTS__BUILDER_HPP_
