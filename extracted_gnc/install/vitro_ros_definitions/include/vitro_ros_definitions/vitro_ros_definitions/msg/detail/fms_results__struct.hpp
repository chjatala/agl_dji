// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vitro_ros_definitions:msg/FMSResults.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULTS__STRUCT_HPP_
#define VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'results'
#include "vitro_ros_definitions/msg/detail/fms_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vitro_ros_definitions__msg__FMSResults __attribute__((deprecated))
#else
# define DEPRECATED__vitro_ros_definitions__msg__FMSResults __declspec(deprecated)
#endif

namespace vitro_ros_definitions
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FMSResults_
{
  using Type = FMSResults_<ContainerAllocator>;

  explicit FMSResults_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FMSResults_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _results_type =
    std::vector<vitro_ros_definitions::msg::FMSResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vitro_ros_definitions::msg::FMSResult_<ContainerAllocator>>>;
  _results_type results;

  // setters for named parameter idiom
  Type & set__results(
    const std::vector<vitro_ros_definitions::msg::FMSResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<vitro_ros_definitions::msg::FMSResult_<ContainerAllocator>>> & _arg)
  {
    this->results = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vitro_ros_definitions::msg::FMSResults_<ContainerAllocator> *;
  using ConstRawPtr =
    const vitro_ros_definitions::msg::FMSResults_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vitro_ros_definitions::msg::FMSResults_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vitro_ros_definitions::msg::FMSResults_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::msg::FMSResults_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::msg::FMSResults_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::msg::FMSResults_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::msg::FMSResults_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vitro_ros_definitions::msg::FMSResults_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vitro_ros_definitions::msg::FMSResults_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vitro_ros_definitions__msg__FMSResults
    std::shared_ptr<vitro_ros_definitions::msg::FMSResults_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vitro_ros_definitions__msg__FMSResults
    std::shared_ptr<vitro_ros_definitions::msg::FMSResults_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FMSResults_ & other) const
  {
    if (this->results != other.results) {
      return false;
    }
    return true;
  }
  bool operator!=(const FMSResults_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FMSResults_

// alias to use template instance with default allocator
using FMSResults =
  vitro_ros_definitions::msg::FMSResults_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vitro_ros_definitions

#endif  // VITRO_ROS_DEFINITIONS__MSG__DETAIL__FMS_RESULTS__STRUCT_HPP_
