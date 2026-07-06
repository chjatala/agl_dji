// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wifi_msgs:msg/RangeRSSI.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__RANGE_RSSI__STRUCT_HPP_
#define WIFI_MSGS__MSG__DETAIL__RANGE_RSSI__STRUCT_HPP_

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
// Member 'ap_position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'diagnostics'
#include "wifi_msgs/msg/detail/diagnostics_rssi__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__wifi_msgs__msg__RangeRSSI __attribute__((deprecated))
#else
# define DEPRECATED__wifi_msgs__msg__RangeRSSI __declspec(deprecated)
#endif

namespace wifi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RangeRSSI_
{
  using Type = RangeRSSI_<ContainerAllocator>;

  explicit RangeRSSI_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    ap_position(_init),
    diagnostics(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ap_mac = "";
      this->valid_ap_position = false;
      this->valid_range = false;
      this->distance = 0.0f;
    }
  }

  explicit RangeRSSI_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    ap_mac(_alloc),
    ap_position(_alloc, _init),
    diagnostics(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ap_mac = "";
      this->valid_ap_position = false;
      this->valid_range = false;
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _ap_mac_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ap_mac_type ap_mac;
  using _valid_ap_position_type =
    bool;
  _valid_ap_position_type valid_ap_position;
  using _ap_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _ap_position_type ap_position;
  using _valid_range_type =
    bool;
  _valid_range_type valid_range;
  using _distance_type =
    float;
  _distance_type distance;
  using _diagnostics_type =
    wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator>;
  _diagnostics_type diagnostics;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__ap_mac(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ap_mac = _arg;
    return *this;
  }
  Type & set__valid_ap_position(
    const bool & _arg)
  {
    this->valid_ap_position = _arg;
    return *this;
  }
  Type & set__ap_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->ap_position = _arg;
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
    const wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator> & _arg)
  {
    this->diagnostics = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wifi_msgs::msg::RangeRSSI_<ContainerAllocator> *;
  using ConstRawPtr =
    const wifi_msgs::msg::RangeRSSI_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wifi_msgs::msg::RangeRSSI_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wifi_msgs::msg::RangeRSSI_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wifi_msgs::msg::RangeRSSI_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wifi_msgs::msg::RangeRSSI_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wifi_msgs::msg::RangeRSSI_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wifi_msgs::msg::RangeRSSI_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wifi_msgs::msg::RangeRSSI_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wifi_msgs::msg::RangeRSSI_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wifi_msgs__msg__RangeRSSI
    std::shared_ptr<wifi_msgs::msg::RangeRSSI_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wifi_msgs__msg__RangeRSSI
    std::shared_ptr<wifi_msgs::msg::RangeRSSI_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RangeRSSI_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->ap_mac != other.ap_mac) {
      return false;
    }
    if (this->valid_ap_position != other.valid_ap_position) {
      return false;
    }
    if (this->ap_position != other.ap_position) {
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
  bool operator!=(const RangeRSSI_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RangeRSSI_

// alias to use template instance with default allocator
using RangeRSSI =
  wifi_msgs::msg::RangeRSSI_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wifi_msgs

#endif  // WIFI_MSGS__MSG__DETAIL__RANGE_RSSI__STRUCT_HPP_
