// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vision_msgs:msg/VisionResultArray.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__VISION_RESULT_ARRAY__BUILDER_HPP_
#define VISION_MSGS__MSG__DETAIL__VISION_RESULT_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vision_msgs/msg/detail/vision_result_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vision_msgs
{

namespace msg
{

namespace builder
{

class Init_VisionResultArray_visualization_image
{
public:
  explicit Init_VisionResultArray_visualization_image(::vision_msgs::msg::VisionResultArray & msg)
  : msg_(msg)
  {}
  ::vision_msgs::msg::VisionResultArray visualization_image(::vision_msgs::msg::VisionResultArray::_visualization_image_type arg)
  {
    msg_.visualization_image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vision_msgs::msg::VisionResultArray msg_;
};

class Init_VisionResultArray_results
{
public:
  explicit Init_VisionResultArray_results(::vision_msgs::msg::VisionResultArray & msg)
  : msg_(msg)
  {}
  Init_VisionResultArray_visualization_image results(::vision_msgs::msg::VisionResultArray::_results_type arg)
  {
    msg_.results = std::move(arg);
    return Init_VisionResultArray_visualization_image(msg_);
  }

private:
  ::vision_msgs::msg::VisionResultArray msg_;
};

class Init_VisionResultArray_header
{
public:
  Init_VisionResultArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VisionResultArray_results header(::vision_msgs::msg::VisionResultArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VisionResultArray_results(msg_);
  }

private:
  ::vision_msgs::msg::VisionResultArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vision_msgs::msg::VisionResultArray>()
{
  return vision_msgs::msg::builder::Init_VisionResultArray_header();
}

}  // namespace vision_msgs

#endif  // VISION_MSGS__MSG__DETAIL__VISION_RESULT_ARRAY__BUILDER_HPP_
