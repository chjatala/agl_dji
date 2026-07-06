// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/GenLineFollowCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__GEN_LINE_FOLLOW_CMD__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__GEN_LINE_FOLLOW_CMD__STRUCT_HPP_

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
# define DEPRECATED__drone_msgs__msg__GenLineFollowCmd __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__GenLineFollowCmd __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GenLineFollowCmd_
{
  using Type = GenLineFollowCmd_<ContainerAllocator>;

  explicit GenLineFollowCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->x_tgt = 0.0f;
      this->x_type = "POS_CLOSELOOP";
      this->y_tgt = 0.0f;
      this->y_type = "POS_CLOSELOOP";
      this->z_tgt = 1.0f;
      this->z_type = "POS_CLOSELOOP";
      this->yaw_tgt = 0.0f;
      this->yaw_type = "POS_CLOSELOOP";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->x_tgt = 0.0f;
      this->x_type = "";
      this->y_tgt = 0.0f;
      this->y_type = "";
      this->z_tgt = 0.0f;
      this->z_type = "";
      this->yaw_tgt = 0.0f;
      this->yaw_type = "";
    }
  }

  explicit GenLineFollowCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    x_type(_alloc),
    y_type(_alloc),
    z_type(_alloc),
    yaw_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->x_tgt = 0.0f;
      this->x_type = "POS_CLOSELOOP";
      this->y_tgt = 0.0f;
      this->y_type = "POS_CLOSELOOP";
      this->z_tgt = 1.0f;
      this->z_type = "POS_CLOSELOOP";
      this->yaw_tgt = 0.0f;
      this->yaw_type = "POS_CLOSELOOP";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->x_tgt = 0.0f;
      this->x_type = "";
      this->y_tgt = 0.0f;
      this->y_type = "";
      this->z_tgt = 0.0f;
      this->z_type = "";
      this->yaw_tgt = 0.0f;
      this->yaw_type = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _x_tgt_type =
    float;
  _x_tgt_type x_tgt;
  using _x_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _x_type_type x_type;
  using _y_tgt_type =
    float;
  _y_tgt_type y_tgt;
  using _y_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _y_type_type y_type;
  using _z_tgt_type =
    float;
  _z_tgt_type z_tgt;
  using _z_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _z_type_type z_type;
  using _yaw_tgt_type =
    float;
  _yaw_tgt_type yaw_tgt;
  using _yaw_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _yaw_type_type yaw_type;
  using _param_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _param_type param;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__x_tgt(
    const float & _arg)
  {
    this->x_tgt = _arg;
    return *this;
  }
  Type & set__x_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->x_type = _arg;
    return *this;
  }
  Type & set__y_tgt(
    const float & _arg)
  {
    this->y_tgt = _arg;
    return *this;
  }
  Type & set__y_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->y_type = _arg;
    return *this;
  }
  Type & set__z_tgt(
    const float & _arg)
  {
    this->z_tgt = _arg;
    return *this;
  }
  Type & set__z_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->z_type = _arg;
    return *this;
  }
  Type & set__yaw_tgt(
    const float & _arg)
  {
    this->yaw_tgt = _arg;
    return *this;
  }
  Type & set__yaw_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->yaw_type = _arg;
    return *this;
  }
  Type & set__param(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->param = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> POS_CLOSELOOP;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SPEED_OPENLOOP;

  // pointer types
  using RawPtr =
    drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__GenLineFollowCmd
    std::shared_ptr<drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__GenLineFollowCmd
    std::shared_ptr<drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenLineFollowCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->x_tgt != other.x_tgt) {
      return false;
    }
    if (this->x_type != other.x_type) {
      return false;
    }
    if (this->y_tgt != other.y_tgt) {
      return false;
    }
    if (this->y_type != other.y_type) {
      return false;
    }
    if (this->z_tgt != other.z_tgt) {
      return false;
    }
    if (this->z_type != other.z_type) {
      return false;
    }
    if (this->yaw_tgt != other.yaw_tgt) {
      return false;
    }
    if (this->yaw_type != other.yaw_type) {
      return false;
    }
    if (this->param != other.param) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenLineFollowCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenLineFollowCmd_

// alias to use template instance with default allocator
using GenLineFollowCmd =
  drone_msgs::msg::GenLineFollowCmd_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
GenLineFollowCmd_<ContainerAllocator>::POS_CLOSELOOP = "POS_CLOSELOOP";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
GenLineFollowCmd_<ContainerAllocator>::SPEED_OPENLOOP = "SPEED_OPENLOOP";

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__GEN_LINE_FOLLOW_CMD__STRUCT_HPP_
