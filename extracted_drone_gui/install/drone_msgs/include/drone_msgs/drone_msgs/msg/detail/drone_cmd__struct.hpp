// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/DroneCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_CMD__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__DRONE_CMD__STRUCT_HPP_

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
# define DEPRECATED__drone_msgs__msg__DroneCmd __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__DroneCmd __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DroneCmd_
{
  using Type = DroneCmd_<ContainerAllocator>;

  explicit DroneCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = "";
      this->note = "";
      this->cmder = "";
      this->tgt = "";
    }
  }

  explicit DroneCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    cmd(_alloc),
    note(_alloc),
    cmder(_alloc),
    tgt(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cmd = "";
      this->note = "";
      this->cmder = "";
      this->tgt = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _cmd_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmd_type cmd;
  using _param_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _param_type param;
  using _note_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _note_type note;
  using _cmder_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cmder_type cmder;
  using _tgt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tgt_type tgt;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cmd(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__param(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->param = _arg;
    return *this;
  }
  Type & set__note(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->note = _arg;
    return *this;
  }
  Type & set__cmder(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cmder = _arg;
    return *this;
  }
  Type & set__tgt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tgt = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CMD_TAKEOFF;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CMD_LAND;

  // pointer types
  using RawPtr =
    drone_msgs::msg::DroneCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::DroneCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::DroneCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::DroneCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::DroneCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::DroneCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::DroneCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::DroneCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::DroneCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::DroneCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__DroneCmd
    std::shared_ptr<drone_msgs::msg::DroneCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__DroneCmd
    std::shared_ptr<drone_msgs::msg::DroneCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->param != other.param) {
      return false;
    }
    if (this->note != other.note) {
      return false;
    }
    if (this->cmder != other.cmder) {
      return false;
    }
    if (this->tgt != other.tgt) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneCmd_

// alias to use template instance with default allocator
using DroneCmd =
  drone_msgs::msg::DroneCmd_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
DroneCmd_<ContainerAllocator>::CMD_TAKEOFF = "takeoff";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
DroneCmd_<ContainerAllocator>::CMD_LAND = "land";

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_CMD__STRUCT_HPP_
