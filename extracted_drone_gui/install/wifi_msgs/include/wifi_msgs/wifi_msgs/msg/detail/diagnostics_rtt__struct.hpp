// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from wifi_msgs:msg/DiagnosticsRTT.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__STRUCT_HPP_
#define WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__wifi_msgs__msg__DiagnosticsRTT __attribute__((deprecated))
#else
# define DEPRECATED__wifi_msgs__msg__DiagnosticsRTT __declspec(deprecated)
#endif

namespace wifi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticsRTT_
{
  using Type = DiagnosticsRTT_<ContainerAllocator>;

  explicit DiagnosticsRTT_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rssi = 0.0f;
      this->rssi_spread = 0.0f;
      this->num_bursts = 0.0f;
      this->burst_duration = 0.0f;
      this->ftms_per_burst = 0.0f;
      this->rtt_avg = 0.0f;
      this->rtt_spread = 0.0f;
      this->rtt_variance = 0.0f;
    }
  }

  explicit DiagnosticsRTT_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rssi = 0.0f;
      this->rssi_spread = 0.0f;
      this->num_bursts = 0.0f;
      this->burst_duration = 0.0f;
      this->ftms_per_burst = 0.0f;
      this->rtt_avg = 0.0f;
      this->rtt_spread = 0.0f;
      this->rtt_variance = 0.0f;
    }
  }

  // field types and members
  using _rssi_type =
    float;
  _rssi_type rssi;
  using _rssi_spread_type =
    float;
  _rssi_spread_type rssi_spread;
  using _num_bursts_type =
    float;
  _num_bursts_type num_bursts;
  using _burst_duration_type =
    float;
  _burst_duration_type burst_duration;
  using _ftms_per_burst_type =
    float;
  _ftms_per_burst_type ftms_per_burst;
  using _rtt_avg_type =
    float;
  _rtt_avg_type rtt_avg;
  using _rtt_spread_type =
    float;
  _rtt_spread_type rtt_spread;
  using _rtt_variance_type =
    float;
  _rtt_variance_type rtt_variance;

  // setters for named parameter idiom
  Type & set__rssi(
    const float & _arg)
  {
    this->rssi = _arg;
    return *this;
  }
  Type & set__rssi_spread(
    const float & _arg)
  {
    this->rssi_spread = _arg;
    return *this;
  }
  Type & set__num_bursts(
    const float & _arg)
  {
    this->num_bursts = _arg;
    return *this;
  }
  Type & set__burst_duration(
    const float & _arg)
  {
    this->burst_duration = _arg;
    return *this;
  }
  Type & set__ftms_per_burst(
    const float & _arg)
  {
    this->ftms_per_burst = _arg;
    return *this;
  }
  Type & set__rtt_avg(
    const float & _arg)
  {
    this->rtt_avg = _arg;
    return *this;
  }
  Type & set__rtt_spread(
    const float & _arg)
  {
    this->rtt_spread = _arg;
    return *this;
  }
  Type & set__rtt_variance(
    const float & _arg)
  {
    this->rtt_variance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    wifi_msgs::msg::DiagnosticsRTT_<ContainerAllocator> *;
  using ConstRawPtr =
    const wifi_msgs::msg::DiagnosticsRTT_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<wifi_msgs::msg::DiagnosticsRTT_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<wifi_msgs::msg::DiagnosticsRTT_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      wifi_msgs::msg::DiagnosticsRTT_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<wifi_msgs::msg::DiagnosticsRTT_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      wifi_msgs::msg::DiagnosticsRTT_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<wifi_msgs::msg::DiagnosticsRTT_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<wifi_msgs::msg::DiagnosticsRTT_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<wifi_msgs::msg::DiagnosticsRTT_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__wifi_msgs__msg__DiagnosticsRTT
    std::shared_ptr<wifi_msgs::msg::DiagnosticsRTT_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__wifi_msgs__msg__DiagnosticsRTT
    std::shared_ptr<wifi_msgs::msg::DiagnosticsRTT_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticsRTT_ & other) const
  {
    if (this->rssi != other.rssi) {
      return false;
    }
    if (this->rssi_spread != other.rssi_spread) {
      return false;
    }
    if (this->num_bursts != other.num_bursts) {
      return false;
    }
    if (this->burst_duration != other.burst_duration) {
      return false;
    }
    if (this->ftms_per_burst != other.ftms_per_burst) {
      return false;
    }
    if (this->rtt_avg != other.rtt_avg) {
      return false;
    }
    if (this->rtt_spread != other.rtt_spread) {
      return false;
    }
    if (this->rtt_variance != other.rtt_variance) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticsRTT_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticsRTT_

// alias to use template instance with default allocator
using DiagnosticsRTT =
  wifi_msgs::msg::DiagnosticsRTT_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace wifi_msgs

#endif  // WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__STRUCT_HPP_
