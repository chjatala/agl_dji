// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/AttZvelCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__ATT_ZVEL_CMD__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__ATT_ZVEL_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drone_msgs__msg__AttZvelCmd __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__AttZvelCmd __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AttZvelCmd_
{
  using Type = AttZvelCmd_<ContainerAllocator>;

  explicit AttZvelCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->z_vel = 0.0;
    }
  }

  explicit AttZvelCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->z_vel = 0.0;
    }
  }

  // field types and members
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _z_vel_type =
    double;
  _z_vel_type z_vel;

  // setters for named parameter idiom
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__z_vel(
    const double & _arg)
  {
    this->z_vel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::msg::AttZvelCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::AttZvelCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::AttZvelCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::AttZvelCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::AttZvelCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::AttZvelCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::AttZvelCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::AttZvelCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::AttZvelCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::AttZvelCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__AttZvelCmd
    std::shared_ptr<drone_msgs::msg::AttZvelCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__AttZvelCmd
    std::shared_ptr<drone_msgs::msg::AttZvelCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AttZvelCmd_ & other) const
  {
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->z_vel != other.z_vel) {
      return false;
    }
    return true;
  }
  bool operator!=(const AttZvelCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AttZvelCmd_

// alias to use template instance with default allocator
using AttZvelCmd =
  drone_msgs::msg::AttZvelCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__ATT_ZVEL_CMD__STRUCT_HPP_
