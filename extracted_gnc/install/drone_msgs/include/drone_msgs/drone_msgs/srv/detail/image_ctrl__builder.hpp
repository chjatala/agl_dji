// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:srv/ImageCtrl.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__SRV__DETAIL__IMAGE_CTRL__BUILDER_HPP_
#define DRONE_MSGS__SRV__DETAIL__IMAGE_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/srv/detail/image_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace srv
{

namespace builder
{

class Init_ImageCtrl_Request_picture_plane_distance
{
public:
  explicit Init_ImageCtrl_Request_picture_plane_distance(::drone_msgs::srv::ImageCtrl_Request & msg)
  : msg_(msg)
  {}
  ::drone_msgs::srv::ImageCtrl_Request picture_plane_distance(::drone_msgs::srv::ImageCtrl_Request::_picture_plane_distance_type arg)
  {
    msg_.picture_plane_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::srv::ImageCtrl_Request msg_;
};

class Init_ImageCtrl_Request_fov
{
public:
  explicit Init_ImageCtrl_Request_fov(::drone_msgs::srv::ImageCtrl_Request & msg)
  : msg_(msg)
  {}
  Init_ImageCtrl_Request_picture_plane_distance fov(::drone_msgs::srv::ImageCtrl_Request::_fov_type arg)
  {
    msg_.fov = std::move(arg);
    return Init_ImageCtrl_Request_picture_plane_distance(msg_);
  }

private:
  ::drone_msgs::srv::ImageCtrl_Request msg_;
};

class Init_ImageCtrl_Request_overlap
{
public:
  explicit Init_ImageCtrl_Request_overlap(::drone_msgs::srv::ImageCtrl_Request & msg)
  : msg_(msg)
  {}
  Init_ImageCtrl_Request_fov overlap(::drone_msgs::srv::ImageCtrl_Request::_overlap_type arg)
  {
    msg_.overlap = std::move(arg);
    return Init_ImageCtrl_Request_fov(msg_);
  }

private:
  ::drone_msgs::srv::ImageCtrl_Request msg_;
};

class Init_ImageCtrl_Request_next_picture_distance
{
public:
  explicit Init_ImageCtrl_Request_next_picture_distance(::drone_msgs::srv::ImageCtrl_Request & msg)
  : msg_(msg)
  {}
  Init_ImageCtrl_Request_overlap next_picture_distance(::drone_msgs::srv::ImageCtrl_Request::_next_picture_distance_type arg)
  {
    msg_.next_picture_distance = std::move(arg);
    return Init_ImageCtrl_Request_overlap(msg_);
  }

private:
  ::drone_msgs::srv::ImageCtrl_Request msg_;
};

class Init_ImageCtrl_Request_mode
{
public:
  explicit Init_ImageCtrl_Request_mode(::drone_msgs::srv::ImageCtrl_Request & msg)
  : msg_(msg)
  {}
  Init_ImageCtrl_Request_next_picture_distance mode(::drone_msgs::srv::ImageCtrl_Request::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_ImageCtrl_Request_next_picture_distance(msg_);
  }

private:
  ::drone_msgs::srv::ImageCtrl_Request msg_;
};

class Init_ImageCtrl_Request_enable
{
public:
  Init_ImageCtrl_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageCtrl_Request_mode enable(::drone_msgs::srv::ImageCtrl_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_ImageCtrl_Request_mode(msg_);
  }

private:
  ::drone_msgs::srv::ImageCtrl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::srv::ImageCtrl_Request>()
{
  return drone_msgs::srv::builder::Init_ImageCtrl_Request_enable();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace srv
{

namespace builder
{

class Init_ImageCtrl_Response_success
{
public:
  Init_ImageCtrl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::drone_msgs::srv::ImageCtrl_Response success(::drone_msgs::srv::ImageCtrl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::srv::ImageCtrl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::srv::ImageCtrl_Response>()
{
  return drone_msgs::srv::builder::Init_ImageCtrl_Response_success();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__SRV__DETAIL__IMAGE_CTRL__BUILDER_HPP_
