// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_msgs:msg/VisionResult.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__VISION_RESULT__BUILDER_HPP_
#define VISION_MSGS__MSG__DETAIL__VISION_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_msgs/msg/detail/vision_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_msgs
{

namespace msg
{

namespace builder
{

class Init_VisionResult_additional_info
{
public:
  explicit Init_VisionResult_additional_info(::vision_msgs::msg::VisionResult & msg)
  : msg_(msg)
  {}
  ::vision_msgs::msg::VisionResult additional_info(::vision_msgs::msg::VisionResult::_additional_info_type arg)
  {
    msg_.additional_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_msgs::msg::VisionResult msg_;
};

class Init_VisionResult_confidence
{
public:
  explicit Init_VisionResult_confidence(::vision_msgs::msg::VisionResult & msg)
  : msg_(msg)
  {}
  Init_VisionResult_additional_info confidence(::vision_msgs::msg::VisionResult::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_VisionResult_additional_info(msg_);
  }

private:
  ::vision_msgs::msg::VisionResult msg_;
};

class Init_VisionResult_points
{
public:
  Init_VisionResult_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionResult_confidence points(::vision_msgs::msg::VisionResult::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_VisionResult_confidence(msg_);
  }

private:
  ::vision_msgs::msg::VisionResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_msgs::msg::VisionResult>()
{
  return vision_msgs::msg::builder::Init_VisionResult_points();
}

}  // namespace vision_msgs

#endif  // VISION_MSGS__MSG__DETAIL__VISION_RESULT__BUILDER_HPP_
