// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/Waypoints.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__WAYPOINTS__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__WAYPOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'current_wp'
// Member 'previous_wp'
#include "drone_msgs/msg/detail/waypoint__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__msg__Waypoints __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__Waypoints __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Waypoints_
{
  using Type = Waypoints_<ContainerAllocator>;

  explicit Waypoints_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_wp(_init),
    previous_wp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->last_wp_reached = false;
    }
  }

  explicit Waypoints_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_wp(_alloc, _init),
    previous_wp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->last_wp_reached = false;
    }
  }

  // field types and members
  using _current_wp_type =
    drone_msgs::msg::Waypoint_<ContainerAllocator>;
  _current_wp_type current_wp;
  using _previous_wp_type =
    drone_msgs::msg::Waypoint_<ContainerAllocator>;
  _previous_wp_type previous_wp;
  using _last_wp_reached_type =
    bool;
  _last_wp_reached_type last_wp_reached;

  // setters for named parameter idiom
  Type & set__current_wp(
    const drone_msgs::msg::Waypoint_<ContainerAllocator> & _arg)
  {
    this->current_wp = _arg;
    return *this;
  }
  Type & set__previous_wp(
    const drone_msgs::msg::Waypoint_<ContainerAllocator> & _arg)
  {
    this->previous_wp = _arg;
    return *this;
  }
  Type & set__last_wp_reached(
    const bool & _arg)
  {
    this->last_wp_reached = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::msg::Waypoints_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::Waypoints_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::Waypoints_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::Waypoints_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::Waypoints_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::Waypoints_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::Waypoints_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::Waypoints_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::Waypoints_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::Waypoints_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__Waypoints
    std::shared_ptr<drone_msgs::msg::Waypoints_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__Waypoints
    std::shared_ptr<drone_msgs::msg::Waypoints_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Waypoints_ & other) const
  {
    if (this->current_wp != other.current_wp) {
      return false;
    }
    if (this->previous_wp != other.previous_wp) {
      return false;
    }
    if (this->last_wp_reached != other.last_wp_reached) {
      return false;
    }
    return true;
  }
  bool operator!=(const Waypoints_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Waypoints_

// alias to use template instance with default allocator
using Waypoints =
  drone_msgs::msg::Waypoints_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__WAYPOINTS__STRUCT_HPP_
