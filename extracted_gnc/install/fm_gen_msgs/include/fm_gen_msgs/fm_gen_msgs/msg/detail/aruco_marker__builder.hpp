// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fm_gen_msgs:msg/ArucoMarker.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER__BUILDER_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fm_gen_msgs/msg/detail/aruco_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fm_gen_msgs
{

namespace msg
{

namespace builder
{

class Init_ArucoMarker_corner
{
public:
  explicit Init_ArucoMarker_corner(::fm_gen_msgs::msg::ArucoMarker & msg)
  : msg_(msg)
  {}
  ::fm_gen_msgs::msg::ArucoMarker corner(::fm_gen_msgs::msg::ArucoMarker::_corner_type arg)
  {
    msg_.corner = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fm_gen_msgs::msg::ArucoMarker msg_;
};

class Init_ArucoMarker_id
{
public:
  Init_ArucoMarker_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArucoMarker_corner id(::fm_gen_msgs::msg::ArucoMarker::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ArucoMarker_corner(msg_);
  }

private:
  ::fm_gen_msgs::msg::ArucoMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::msg::ArucoMarker>()
{
  return fm_gen_msgs::msg::builder::Init_ArucoMarker_id();
}

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER__BUILDER_HPP_
