// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vitro_ros_definitions:msg/FMSResult.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULT__STRUCT_HPP_
#define VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'img'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vitro_ros_definitions__msg__FMSResult __attribute__((deprecated))
#else
# define DEPRECATED__vitro_ros_definitions__msg__FMSResult __declspec(deprecated)
#endif

namespace vitro_ros_definitions
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FMSResult_
{
  using Type = FMSResult_<ContainerAllocator>;

  explicit FMSResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init),
    img(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->id_confidence = 0.0;
    }
  }

  explicit FMSResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    pose(_alloc, _init),
    img(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->id_confidence = 0.0;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _id_confidence_type =
    double;
  _id_confidence_type id_confidence;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _img_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _img_type img;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__id_confidence(
    const double & _arg)
  {
    this->id_confidence = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__img(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->img = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vitro_ros_definitions::msg::FMSResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const vitro_ros_definitions::msg::FMSResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vitro_ros_definitions::msg::FMSResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vitro_ros_definitions::msg::FMSResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::msg::FMSResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::msg::FMSResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::msg::FMSResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::msg::FMSResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vitro_ros_definitions::msg::FMSResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vitro_ros_definitions::msg::FMSResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vitro_ros_definitions__msg__FMSResult
    std::shared_ptr<vitro_ros_definitions::msg::FMSResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vitro_ros_definitions__msg__FMSResult
    std::shared_ptr<vitro_ros_definitions::msg::FMSResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FMSResult_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->id_confidence != other.id_confidence) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->img != other.img) {
      return false;
    }
    return true;
  }
  bool operator!=(const FMSResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FMSResult_

// alias to use template instance with default allocator
using FMSResult =
  vitro_ros_definitions::msg::FMSResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vitro_ros_definitions

#endif  // VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULT__STRUCT_HPP_
