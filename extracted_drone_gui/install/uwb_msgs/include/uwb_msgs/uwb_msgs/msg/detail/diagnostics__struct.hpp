// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uwb_msgs:msg/Diagnostics.idl
// generated code does not contain a copyright notice

#ifndef UWB_MSGS__MSG__DETAIL__DIAGNOSTICS__STRUCT_HPP_
#define UWB_MSGS__MSG__DETAIL__DIAGNOSTICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__uwb_msgs__msg__Diagnostics __attribute__((deprecated))
#else
# define DEPRECATED__uwb_msgs__msg__Diagnostics __declspec(deprecated)
#endif

namespace uwb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Diagnostics_
{
  using Type = Diagnostics_<ContainerAllocator>;

  explicit Diagnostics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cir_power = 0ul;
      this->preamble_count = 0ul;
      this->fppl = 0.0f;
      this->rssi = 0.0f;
      this->index_fp = 0.0f;
      this->msgdelay_ms = 0ul;
    }
  }

  explicit Diagnostics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cir_power = 0ul;
      this->preamble_count = 0ul;
      this->fppl = 0.0f;
      this->rssi = 0.0f;
      this->index_fp = 0.0f;
      this->msgdelay_ms = 0ul;
    }
  }

  // field types and members
  using _cir_power_type =
    uint32_t;
  _cir_power_type cir_power;
  using _cir_magnitude_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _cir_magnitude_type cir_magnitude;
  using _cir_phase_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _cir_phase_type cir_phase;
  using _cir_imag_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _cir_imag_type cir_imag;
  using _cir_real_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _cir_real_type cir_real;
  using _preamble_count_type =
    uint32_t;
  _preamble_count_type preamble_count;
  using _fppl_type =
    float;
  _fppl_type fppl;
  using _rssi_type =
    float;
  _rssi_type rssi;
  using _index_fp_type =
    float;
  _index_fp_type index_fp;
  using _msgdelay_ms_type =
    uint32_t;
  _msgdelay_ms_type msgdelay_ms;

  // setters for named parameter idiom
  Type & set__cir_power(
    const uint32_t & _arg)
  {
    this->cir_power = _arg;
    return *this;
  }
  Type & set__cir_magnitude(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->cir_magnitude = _arg;
    return *this;
  }
  Type & set__cir_phase(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->cir_phase = _arg;
    return *this;
  }
  Type & set__cir_imag(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->cir_imag = _arg;
    return *this;
  }
  Type & set__cir_real(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->cir_real = _arg;
    return *this;
  }
  Type & set__preamble_count(
    const uint32_t & _arg)
  {
    this->preamble_count = _arg;
    return *this;
  }
  Type & set__fppl(
    const float & _arg)
  {
    this->fppl = _arg;
    return *this;
  }
  Type & set__rssi(
    const float & _arg)
  {
    this->rssi = _arg;
    return *this;
  }
  Type & set__index_fp(
    const float & _arg)
  {
    this->index_fp = _arg;
    return *this;
  }
  Type & set__msgdelay_ms(
    const uint32_t & _arg)
  {
    this->msgdelay_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uwb_msgs::msg::Diagnostics_<ContainerAllocator> *;
  using ConstRawPtr =
    const uwb_msgs::msg::Diagnostics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uwb_msgs::msg::Diagnostics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uwb_msgs::msg::Diagnostics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uwb_msgs::msg::Diagnostics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uwb_msgs::msg::Diagnostics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uwb_msgs::msg::Diagnostics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uwb_msgs::msg::Diagnostics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uwb_msgs::msg::Diagnostics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uwb_msgs::msg::Diagnostics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uwb_msgs__msg__Diagnostics
    std::shared_ptr<uwb_msgs::msg::Diagnostics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uwb_msgs__msg__Diagnostics
    std::shared_ptr<uwb_msgs::msg::Diagnostics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Diagnostics_ & other) const
  {
    if (this->cir_power != other.cir_power) {
      return false;
    }
    if (this->cir_magnitude != other.cir_magnitude) {
      return false;
    }
    if (this->cir_phase != other.cir_phase) {
      return false;
    }
    if (this->cir_imag != other.cir_imag) {
      return false;
    }
    if (this->cir_real != other.cir_real) {
      return false;
    }
    if (this->preamble_count != other.preamble_count) {
      return false;
    }
    if (this->fppl != other.fppl) {
      return false;
    }
    if (this->rssi != other.rssi) {
      return false;
    }
    if (this->index_fp != other.index_fp) {
      return false;
    }
    if (this->msgdelay_ms != other.msgdelay_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const Diagnostics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Diagnostics_

// alias to use template instance with default allocator
using Diagnostics =
  uwb_msgs::msg::Diagnostics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace uwb_msgs

#endif  // UWB_MSGS__MSG__DETAIL__DIAGNOSTICS__STRUCT_HPP_
