// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fm_gen_msgs:msg/ArucoMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER_ARRAY__BUILDER_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fm_gen_msgs/msg/detail/aruco_marker_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fm_gen_msgs
{

namespace msg
{

namespace builder
{

class Init_ArucoMarkerArray_marker
{
public:
  explicit Init_ArucoMarkerArray_marker(::fm_gen_msgs::msg::ArucoMarkerArray & msg)
  : msg_(msg)
  {}
  ::fm_gen_msgs::msg::ArucoMarkerArray marker(::fm_gen_msgs::msg::ArucoMarkerArray::_marker_type arg)
  {
    msg_.marker = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fm_gen_msgs::msg::ArucoMarkerArray msg_;
};

class Init_ArucoMarkerArray_time_captured
{
public:
  explicit Init_ArucoMarkerArray_time_captured(::fm_gen_msgs::msg::ArucoMarkerArray & msg)
  : msg_(msg)
  {}
  Init_ArucoMarkerArray_marker time_captured(::fm_gen_msgs::msg::ArucoMarkerArray::_time_captured_type arg)
  {
    msg_.time_captured = std::move(arg);
    return Init_ArucoMarkerArray_marker(msg_);
  }

private:
  ::fm_gen_msgs::msg::ArucoMarkerArray msg_;
};

class Init_ArucoMarkerArray_camera_id
{
public:
  explicit Init_ArucoMarkerArray_camera_id(::fm_gen_msgs::msg::ArucoMarkerArray & msg)
  : msg_(msg)
  {}
  Init_ArucoMarkerArray_time_captured camera_id(::fm_gen_msgs::msg::ArucoMarkerArray::_camera_id_type arg)
  {
    msg_.camera_id = std::move(arg);
    return Init_ArucoMarkerArray_time_captured(msg_);
  }

private:
  ::fm_gen_msgs::msg::ArucoMarkerArray msg_;
};

class Init_ArucoMarkerArray_num_marker
{
public:
  explicit Init_ArucoMarkerArray_num_marker(::fm_gen_msgs::msg::ArucoMarkerArray & msg)
  : msg_(msg)
  {}
  Init_ArucoMarkerArray_camera_id num_marker(::fm_gen_msgs::msg::ArucoMarkerArray::_num_marker_type arg)
  {
    msg_.num_marker = std::move(arg);
    return Init_ArucoMarkerArray_camera_id(msg_);
  }

private:
  ::fm_gen_msgs::msg::ArucoMarkerArray msg_;
};

class Init_ArucoMarkerArray_header
{
public:
  Init_ArucoMarkerArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArucoMarkerArray_num_marker header(::fm_gen_msgs::msg::ArucoMarkerArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ArucoMarkerArray_num_marker(msg_);
  }

private:
  ::fm_gen_msgs::msg::ArucoMarkerArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fm_gen_msgs::msg::ArucoMarkerArray>()
{
  return fm_gen_msgs::msg::builder::Init_ArucoMarkerArray_header();
}

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__ARUCO_MARKER_ARRAY__BUILDER_HPP_
