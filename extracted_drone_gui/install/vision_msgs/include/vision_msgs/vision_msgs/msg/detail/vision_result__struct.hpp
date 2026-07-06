// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vision_msgs:msg/VisionResult.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__VISION_RESULT__STRUCT_HPP_
#define VISION_MSGS__MSG__DETAIL__VISION_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vision_msgs__msg__VisionResult __attribute__((deprecated))
#else
# define DEPRECATED__vision_msgs__msg__VisionResult __declspec(deprecated)
#endif

namespace vision_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VisionResult_
{
  using Type = VisionResult_<ContainerAllocator>;

  explicit VisionResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0f;
      this->additional_info = "";
    }
  }

  explicit VisionResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : additional_info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0f;
      this->additional_info = "";
    }
  }

  // field types and members
  using _points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _points_type points;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _additional_info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _additional_info_type additional_info;

  // setters for named parameter idiom
  Type & set__points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__additional_info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->additional_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vision_msgs::msg::VisionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const vision_msgs::msg::VisionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vision_msgs::msg::VisionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vision_msgs::msg::VisionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vision_msgs::msg::VisionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vision_msgs::msg::VisionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vision_msgs::msg::VisionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vision_msgs::msg::VisionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vision_msgs::msg::VisionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vision_msgs::msg::VisionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vision_msgs__msg__VisionResult
    std::shared_ptr<vision_msgs::msg::VisionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vision_msgs__msg__VisionResult
    std::shared_ptr<vision_msgs::msg::VisionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VisionResult_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->additional_info != other.additional_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const VisionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VisionResult_

// alias to use template instance with default allocator
using VisionResult =
  vision_msgs::msg::VisionResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vision_msgs

#endif  // VISION_MSGS__MSG__DETAIL__VISION_RESULT__STRUCT_HPP_
