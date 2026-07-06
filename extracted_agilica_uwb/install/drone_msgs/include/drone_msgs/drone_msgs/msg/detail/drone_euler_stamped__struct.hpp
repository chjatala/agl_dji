// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/DroneEulerStamped.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_EULER_STAMPED__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__DRONE_EULER_STAMPED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__msg__DroneEulerStamped __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__DroneEulerStamped __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DroneEulerStamped_
{
  using Type = DroneEulerStamped_<ContainerAllocator>;

  explicit DroneEulerStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
    }
  }

  explicit DroneEulerStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->pitch = 0.0f;
      this->roll = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _roll_type =
    float;
  _roll_type roll;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::msg::DroneEulerStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::DroneEulerStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::DroneEulerStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::DroneEulerStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::DroneEulerStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::DroneEulerStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::DroneEulerStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::DroneEulerStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::DroneEulerStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::DroneEulerStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__DroneEulerStamped
    std::shared_ptr<drone_msgs::msg::DroneEulerStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__DroneEulerStamped
    std::shared_ptr<drone_msgs::msg::DroneEulerStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneEulerStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneEulerStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneEulerStamped_

// alias to use template instance with default allocator
using DroneEulerStamped =
  drone_msgs::msg::DroneEulerStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_EULER_STAMPED__STRUCT_HPP_
