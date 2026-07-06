// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wifi_msgs:msg/DiagnosticsRSSI.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RSSI__STRUCT_HPP_
#define WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RSSI__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wifi_msgs__msg__DiagnosticsRSSI __attribute__((deprecated))
#else
# define DEPRECATED__wifi_msgs__msg__DiagnosticsRSSI __declspec(deprecated)
#endif

namespace wifi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticsRSSI_
{
  using Type = DiagnosticsRSSI_<ContainerAllocator>;

  explicit DiagnosticsRSSI_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rssi = 0.0f;
      this->a = 0.0f;
      this->n = 0.0f;
    }
  }

  explicit DiagnosticsRSSI_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rssi = 0.0f;
      this->a = 0.0f;
      this->n = 0.0f;
    }
  }

  // field types and members
  using _rssi_type =
    float;
  _rssi_type rssi;
  using _a_type =
    float;
  _a_type a;
  using _n_type =
    float;
  _n_type n;

  // setters for named parameter idiom
  Type & set__rssi(
    const float & _arg)
  {
    this->rssi = _arg;
    return *this;
  }
  Type & set__a(
    const float & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__n(
    const float & _arg)
  {
    this->n = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator> *;
  using ConstRawPtr =
    const wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wifi_msgs__msg__DiagnosticsRSSI
    std::shared_ptr<wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wifi_msgs__msg__DiagnosticsRSSI
    std::shared_ptr<wifi_msgs::msg::DiagnosticsRSSI_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticsRSSI_ & other) const
  {
    if (this->rssi != other.rssi) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->n != other.n) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticsRSSI_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticsRSSI_

// alias to use template instance with default allocator
using DiagnosticsRSSI =
  wifi_msgs::msg::DiagnosticsRSSI_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wifi_msgs

#endif  // WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RSSI__STRUCT_HPP_
