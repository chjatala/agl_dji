// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vitro_ros_definitions:msg/InspectionObj.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__MSG__DETAIL__INSPECTION_OBJ__STRUCT_HPP_
#define VITRO_ROS_DEFINITIONS__MSG__DETAIL__INSPECTION_OBJ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vitro_ros_definitions__msg__InspectionObj __attribute__((deprecated))
#else
# define DEPRECATED__vitro_ros_definitions__msg__InspectionObj __declspec(deprecated)
#endif

namespace vitro_ros_definitions
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InspectionObj_
{
  using Type = InspectionObj_<ContainerAllocator>;

  explicit InspectionObj_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->status = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->id = "";
      this->status = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  explicit InspectionObj_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->status = 0;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->id = "";
      this->status = 0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _status_type =
    int8_t;
  _status_type status;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t INSPECTION_REQUESTED =
    1;
  static constexpr int8_t NO_INSPECTION_REQUESTED =
    0;

  // pointer types
  using RawPtr =
    vitro_ros_definitions::msg::InspectionObj_<ContainerAllocator> *;
  using ConstRawPtr =
    const vitro_ros_definitions::msg::InspectionObj_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vitro_ros_definitions::msg::InspectionObj_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vitro_ros_definitions::msg::InspectionObj_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::msg::InspectionObj_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::msg::InspectionObj_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::msg::InspectionObj_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::msg::InspectionObj_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vitro_ros_definitions::msg::InspectionObj_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vitro_ros_definitions::msg::InspectionObj_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vitro_ros_definitions__msg__InspectionObj
    std::shared_ptr<vitro_ros_definitions::msg::InspectionObj_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vitro_ros_definitions__msg__InspectionObj
    std::shared_ptr<vitro_ros_definitions::msg::InspectionObj_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InspectionObj_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const InspectionObj_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InspectionObj_

// alias to use template instance with default allocator
using InspectionObj =
  vitro_ros_definitions::msg::InspectionObj_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t InspectionObj_<ContainerAllocator>::INSPECTION_REQUESTED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t InspectionObj_<ContainerAllocator>::NO_INSPECTION_REQUESTED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace vitro_ros_definitions

#endif  // VITRO_ROS_DEFINITIONS__MSG__DETAIL__INSPECTION_OBJ__STRUCT_HPP_
