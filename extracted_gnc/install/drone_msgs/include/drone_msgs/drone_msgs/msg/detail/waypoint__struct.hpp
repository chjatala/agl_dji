// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__msg__Waypoint __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__Waypoint __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Waypoint_
{
  using Type = Waypoint_<ContainerAllocator>;

  explicit Waypoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->max_vel = 0.0;
      this->max_yaw_rate = 0.0;
      this->type = 0l;
      std::fill<typename std::array<double, 5>::iterator, double>(this->param.begin(), this->param.end(), 0.0);
    }
  }

  explicit Waypoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    param(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->max_vel = 0.0;
      this->max_yaw_rate = 0.0;
      this->type = 0l;
      std::fill<typename std::array<double, 5>::iterator, double>(this->param.begin(), this->param.end(), 0.0);
    }
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _max_vel_type =
    double;
  _max_vel_type max_vel;
  using _max_yaw_rate_type =
    double;
  _max_yaw_rate_type max_yaw_rate;
  using _type_type =
    int32_t;
  _type_type type;
  using _param_type =
    std::array<double, 5>;
  _param_type param;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__max_vel(
    const double & _arg)
  {
    this->max_vel = _arg;
    return *this;
  }
  Type & set__max_yaw_rate(
    const double & _arg)
  {
    this->max_yaw_rate = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__param(
    const std::array<double, 5> & _arg)
  {
    this->param = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::msg::Waypoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::Waypoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::Waypoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::Waypoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::Waypoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::Waypoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::Waypoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::Waypoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::Waypoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::Waypoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__Waypoint
    std::shared_ptr<drone_msgs::msg::Waypoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__Waypoint
    std::shared_ptr<drone_msgs::msg::Waypoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Waypoint_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->max_vel != other.max_vel) {
      return false;
    }
    if (this->max_yaw_rate != other.max_yaw_rate) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->param != other.param) {
      return false;
    }
    return true;
  }
  bool operator!=(const Waypoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Waypoint_

// alias to use template instance with default allocator
using Waypoint =
  drone_msgs::msg::Waypoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__WAYPOINT__STRUCT_HPP_
