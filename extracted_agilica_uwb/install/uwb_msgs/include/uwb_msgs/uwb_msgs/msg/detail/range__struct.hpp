// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uwb_msgs:msg/Range.idl
// generated code does not contain a copyright notice

#ifndef UWB_MSGS__MSG__DETAIL__RANGE__STRUCT_HPP_
#define UWB_MSGS__MSG__DETAIL__RANGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'anchor_position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'diagnostics'
#include "uwb_msgs/msg/detail/diagnostics__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uwb_msgs__msg__Range __attribute__((deprecated))
#else
# define DEPRECATED__uwb_msgs__msg__Range __declspec(deprecated)
#endif

namespace uwb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Range_
{
  using Type = Range_<ContainerAllocator>;

  explicit Range_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    anchor_position(_init),
    diagnostics(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->anchorid = "";
      this->listenerid = "";
      this->valid_range = false;
      this->distance = 0.0f;
    }
  }

  explicit Range_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    anchorid(_alloc),
    listenerid(_alloc),
    anchor_position(_alloc, _init),
    diagnostics(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->anchorid = "";
      this->listenerid = "";
      this->valid_range = false;
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _anchorid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _anchorid_type anchorid;
  using _listenerid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _listenerid_type listenerid;
  using _anchor_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _anchor_position_type anchor_position;
  using _valid_range_type =
    bool;
  _valid_range_type valid_range;
  using _distance_type =
    float;
  _distance_type distance;
  using _diagnostics_type =
    uwb_msgs::msg::Diagnostics_<ContainerAllocator>;
  _diagnostics_type diagnostics;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__anchorid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->anchorid = _arg;
    return *this;
  }
  Type & set__listenerid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->listenerid = _arg;
    return *this;
  }
  Type & set__anchor_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->anchor_position = _arg;
    return *this;
  }
  Type & set__valid_range(
    const bool & _arg)
  {
    this->valid_range = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__diagnostics(
    const uwb_msgs::msg::Diagnostics_<ContainerAllocator> & _arg)
  {
    this->diagnostics = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uwb_msgs::msg::Range_<ContainerAllocator> *;
  using ConstRawPtr =
    const uwb_msgs::msg::Range_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uwb_msgs::msg::Range_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uwb_msgs::msg::Range_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uwb_msgs::msg::Range_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uwb_msgs::msg::Range_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uwb_msgs::msg::Range_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uwb_msgs::msg::Range_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uwb_msgs::msg::Range_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uwb_msgs::msg::Range_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uwb_msgs__msg__Range
    std::shared_ptr<uwb_msgs::msg::Range_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uwb_msgs__msg__Range
    std::shared_ptr<uwb_msgs::msg::Range_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Range_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->anchorid != other.anchorid) {
      return false;
    }
    if (this->listenerid != other.listenerid) {
      return false;
    }
    if (this->anchor_position != other.anchor_position) {
      return false;
    }
    if (this->valid_range != other.valid_range) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->diagnostics != other.diagnostics) {
      return false;
    }
    return true;
  }
  bool operator!=(const Range_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Range_

// alias to use template instance with default allocator
using Range =
  uwb_msgs::msg::Range_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace uwb_msgs

#endif  // UWB_MSGS__MSG__DETAIL__RANGE__STRUCT_HPP_
