// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vitro_ros_definitions:srv/SetVideoSettings.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_VIDEO_SETTINGS__BUILDER_HPP_
#define VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_VIDEO_SETTINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vitro_ros_definitions/srv/detail/set_video_settings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vitro_ros_definitions
{

namespace srv
{

namespace builder
{

class Init_SetVideoSettings_Request_multi_spectral_display_mode
{
public:
  explicit Init_SetVideoSettings_Request_multi_spectral_display_mode(::vitro_ros_definitions::srv::SetVideoSettings_Request & msg)
  : msg_(msg)
  {}
  ::vitro_ros_definitions::srv::SetVideoSettings_Request multi_spectral_display_mode(::vitro_ros_definitions::srv::SetVideoSettings_Request::_multi_spectral_display_mode_type arg)
  {
    msg_.multi_spectral_display_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vitro_ros_definitions::srv::SetVideoSettings_Request msg_;
};

class Init_SetVideoSettings_Request_multi_spectral_fusion_type
{
public:
  explicit Init_SetVideoSettings_Request_multi_spectral_fusion_type(::vitro_ros_definitions::srv::SetVideoSettings_Request & msg)
  : msg_(msg)
  {}
  Init_SetVideoSettings_Request_multi_spectral_display_mode multi_spectral_fusion_type(::vitro_ros_definitions::srv::SetVideoSettings_Request::_multi_spectral_fusion_type_type arg)
  {
    msg_.multi_spectral_fusion_type = std::move(arg);
    return Init_SetVideoSettings_Request_multi_spectral_display_mode(msg_);
  }

private:
  ::vitro_ros_definitions::srv::SetVideoSettings_Request msg_;
};

class Init_SetVideoSettings_Request_camera_video_stream_source_type
{
public:
  Init_SetVideoSettings_Request_camera_video_stream_source_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetVideoSettings_Request_multi_spectral_fusion_type camera_video_stream_source_type(::vitro_ros_definitions::srv::SetVideoSettings_Request::_camera_video_stream_source_type_type arg)
  {
    msg_.camera_video_stream_source_type = std::move(arg);
    return Init_SetVideoSettings_Request_multi_spectral_fusion_type(msg_);
  }

private:
  ::vitro_ros_definitions::srv::SetVideoSettings_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vitro_ros_definitions::srv::SetVideoSettings_Request>()
{
  return vitro_ros_definitions::srv::builder::Init_SetVideoSettings_Request_camera_video_stream_source_type();
}

}  // namespace vitro_ros_definitions


namespace vitro_ros_definitions
{

namespace srv
{

namespace builder
{

class Init_SetVideoSettings_Response_status
{
public:
  Init_SetVideoSettings_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::vitro_ros_definitions::srv::SetVideoSettings_Response status(::vitro_ros_definitions::srv::SetVideoSettings_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vitro_ros_definitions::srv::SetVideoSettings_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vitro_ros_definitions::srv::SetVideoSettings_Response>()
{
  return vitro_ros_definitions::srv::builder::Init_SetVideoSettings_Response_status();
}

}  // namespace vitro_ros_definitions

#endif  // VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_VIDEO_SETTINGS__BUILDER_HPP_
