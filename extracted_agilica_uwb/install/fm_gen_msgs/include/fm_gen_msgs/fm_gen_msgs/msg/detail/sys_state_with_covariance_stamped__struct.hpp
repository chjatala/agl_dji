// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fm_gen_msgs:msg/SysStateWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_WITH_COVARIANCE_STAMPED__STRUCT_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_WITH_COVARIANCE_STAMPED__STRUCT_HPP_

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
# define DEPRECATED__fm_gen_msgs__msg__SysStateWithCovarianceStamped __attribute__((deprecated))
#else
# define DEPRECATED__fm_gen_msgs__msg__SysStateWithCovarianceStamped __declspec(deprecated)
#endif

namespace fm_gen_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SysStateWithCovarianceStamped_
{
  using Type = SysStateWithCovarianceStamped_<ContainerAllocator>;

  explicit SysStateWithCovarianceStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dim = 0;
    }
  }

  explicit SysStateWithCovarianceStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dim = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _dim_type =
    uint16_t;
  _dim_type dim;
  using _state_name_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _state_name_type state_name;
  using _state_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _state_type state;
  using _covariance_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _covariance_type covariance;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__dim(
    const uint16_t & _arg)
  {
    this->dim = _arg;
    return *this;
  }
  Type & set__state_name(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->state_name = _arg;
    return *this;
  }
  Type & set__state(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__covariance(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->covariance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fm_gen_msgs::msg::SysStateWithCovarianceStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const fm_gen_msgs::msg::SysStateWithCovarianceStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fm_gen_msgs::msg::SysStateWithCovarianceStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fm_gen_msgs::msg::SysStateWithCovarianceStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::msg::SysStateWithCovarianceStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::msg::SysStateWithCovarianceStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::msg::SysStateWithCovarianceStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::msg::SysStateWithCovarianceStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fm_gen_msgs::msg::SysStateWithCovarianceStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fm_gen_msgs::msg::SysStateWithCovarianceStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fm_gen_msgs__msg__SysStateWithCovarianceStamped
    std::shared_ptr<fm_gen_msgs::msg::SysStateWithCovarianceStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fm_gen_msgs__msg__SysStateWithCovarianceStamped
    std::shared_ptr<fm_gen_msgs::msg::SysStateWithCovarianceStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SysStateWithCovarianceStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->dim != other.dim) {
      return false;
    }
    if (this->state_name != other.state_name) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->covariance != other.covariance) {
      return false;
    }
    return true;
  }
  bool operator!=(const SysStateWithCovarianceStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SysStateWithCovarianceStamped_

// alias to use template instance with default allocator
using SysStateWithCovarianceStamped =
  fm_gen_msgs::msg::SysStateWithCovarianceStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__SYS_STATE_WITH_COVARIANCE_STAMPED__STRUCT_HPP_
