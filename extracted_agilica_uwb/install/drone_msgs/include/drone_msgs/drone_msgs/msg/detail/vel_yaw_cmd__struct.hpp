// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/VelYawCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__VEL_YAW_CMD__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__VEL_YAW_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__msg__VelYawCmd __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__VelYawCmd __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VelYawCmd_
{
  using Type = VelYawCmd_<ContainerAllocator>;

  explicit VelYawCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
    }
  }

  explicit VelYawCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _velocity_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _velocity_type velocity;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__velocity(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::msg::VelYawCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::VelYawCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::VelYawCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::VelYawCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::VelYawCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::VelYawCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::VelYawCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::VelYawCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::VelYawCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::VelYawCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__VelYawCmd
    std::shared_ptr<drone_msgs::msg::VelYawCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__VelYawCmd
    std::shared_ptr<drone_msgs::msg::VelYawCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VelYawCmd_ & other) const
  {
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const VelYawCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VelYawCmd_

// alias to use template instance with default allocator
using VelYawCmd =
  drone_msgs::msg::VelYawCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__VEL_YAW_CMD__STRUCT_HPP_
