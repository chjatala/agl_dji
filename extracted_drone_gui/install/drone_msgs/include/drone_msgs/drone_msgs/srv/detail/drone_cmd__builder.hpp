// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from drone_msgs:srv/DroneCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__SRV__DETAIL__DRONE_CMD__BUILDER_HPP_
#define DRONE_MSGS__SRV__DETAIL__DRONE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "drone_msgs/srv/detail/drone_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace drone_msgs
{

namespace srv
{

namespace builder
{

class Init_DroneCmd_Request_tgt
{
public:
  explicit Init_DroneCmd_Request_tgt(::drone_msgs::srv::DroneCmd_Request & msg)
  : msg_(msg)
  {}
  ::drone_msgs::srv::DroneCmd_Request tgt(::drone_msgs::srv::DroneCmd_Request::_tgt_type arg)
  {
    msg_.tgt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::srv::DroneCmd_Request msg_;
};

class Init_DroneCmd_Request_cmder
{
public:
  explicit Init_DroneCmd_Request_cmder(::drone_msgs::srv::DroneCmd_Request & msg)
  : msg_(msg)
  {}
  Init_DroneCmd_Request_tgt cmder(::drone_msgs::srv::DroneCmd_Request::_cmder_type arg)
  {
    msg_.cmder = std::move(arg);
    return Init_DroneCmd_Request_tgt(msg_);
  }

private:
  ::drone_msgs::srv::DroneCmd_Request msg_;
};

class Init_DroneCmd_Request_note
{
public:
  explicit Init_DroneCmd_Request_note(::drone_msgs::srv::DroneCmd_Request & msg)
  : msg_(msg)
  {}
  Init_DroneCmd_Request_cmder note(::drone_msgs::srv::DroneCmd_Request::_note_type arg)
  {
    msg_.note = std::move(arg);
    return Init_DroneCmd_Request_cmder(msg_);
  }

private:
  ::drone_msgs::srv::DroneCmd_Request msg_;
};

class Init_DroneCmd_Request_param
{
public:
  explicit Init_DroneCmd_Request_param(::drone_msgs::srv::DroneCmd_Request & msg)
  : msg_(msg)
  {}
  Init_DroneCmd_Request_note param(::drone_msgs::srv::DroneCmd_Request::_param_type arg)
  {
    msg_.param = std::move(arg);
    return Init_DroneCmd_Request_note(msg_);
  }

private:
  ::drone_msgs::srv::DroneCmd_Request msg_;
};

class Init_DroneCmd_Request_cmd
{
public:
  explicit Init_DroneCmd_Request_cmd(::drone_msgs::srv::DroneCmd_Request & msg)
  : msg_(msg)
  {}
  Init_DroneCmd_Request_param cmd(::drone_msgs::srv::DroneCmd_Request::_cmd_type arg)
  {
    msg_.cmd = std::move(arg);
    return Init_DroneCmd_Request_param(msg_);
  }

private:
  ::drone_msgs::srv::DroneCmd_Request msg_;
};

class Init_DroneCmd_Request_header
{
public:
  Init_DroneCmd_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneCmd_Request_cmd header(::drone_msgs::srv::DroneCmd_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DroneCmd_Request_cmd(msg_);
  }

private:
  ::drone_msgs::srv::DroneCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::srv::DroneCmd_Request>()
{
  return drone_msgs::srv::builder::Init_DroneCmd_Request_header();
}

}  // namespace drone_msgs


namespace drone_msgs
{

namespace srv
{

namespace builder
{

class Init_DroneCmd_Response_status
{
public:
  explicit Init_DroneCmd_Response_status(::drone_msgs::srv::DroneCmd_Response & msg)
  : msg_(msg)
  {}
  ::drone_msgs::srv::DroneCmd_Response status(::drone_msgs::srv::DroneCmd_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::drone_msgs::srv::DroneCmd_Response msg_;
};

class Init_DroneCmd_Response_success
{
public:
  Init_DroneCmd_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DroneCmd_Response_status success(::drone_msgs::srv::DroneCmd_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DroneCmd_Response_status(msg_);
  }

private:
  ::drone_msgs::srv::DroneCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::drone_msgs::srv::DroneCmd_Response>()
{
  return drone_msgs::srv::builder::Init_DroneCmd_Response_success();
}

}  // namespace drone_msgs

#endif  // DRONE_MSGS__SRV__DETAIL__DRONE_CMD__BUILDER_HPP_
