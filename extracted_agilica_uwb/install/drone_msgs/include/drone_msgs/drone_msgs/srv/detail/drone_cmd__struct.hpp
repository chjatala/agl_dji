// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:srv/DroneCmd.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__SRV__DETAIL__DRONE_CMD__STRUCT_HPP_
#define DRONE_MSGS__SRV__DETAIL__DRONE_CMD__STRUCT_HPP_

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
# define DEPRECATED__drone_msgs__srv__DroneCmd_Request __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__srv__DroneCmd_Request __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DroneCmd_Request_
{
  using Type = DroneCmd_Request_<ContainerAllocator>;

  explicit DroneCmd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit DroneCmd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::srv::DroneCmd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::srv::DroneCmd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::srv::DroneCmd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::srv::DroneCmd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::srv::DroneCmd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::srv::DroneCmd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::srv::DroneCmd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::srv::DroneCmd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::srv::DroneCmd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::srv::DroneCmd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__srv__DroneCmd_Request
    std::shared_ptr<drone_msgs::srv::DroneCmd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__srv__DroneCmd_Request
    std::shared_ptr<drone_msgs::srv::DroneCmd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneCmd_Request_ & other) const
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
  bool operator!=(const DroneCmd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneCmd_Request_

// alias to use template instance with default allocator
using DroneCmd_Request =
  drone_msgs::srv::DroneCmd_Request_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
DroneCmd_Request_<ContainerAllocator>::CMD_TAKEOFF = "takeoff";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
DroneCmd_Request_<ContainerAllocator>::CMD_LAND = "land";

}  // namespace srv

}  // namespace drone_msgs


#ifndef _WIN32
# define DEPRECATED__drone_msgs__srv__DroneCmd_Response __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__srv__DroneCmd_Response __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DroneCmd_Response_
{
  using Type = DroneCmd_Response_<ContainerAllocator>;

  explicit DroneCmd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status = "";
    }
  }

  explicit DroneCmd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STATUS_UNKNOWN_CMD;

  // pointer types
  using RawPtr =
    drone_msgs::srv::DroneCmd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::srv::DroneCmd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::srv::DroneCmd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::srv::DroneCmd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::srv::DroneCmd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::srv::DroneCmd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::srv::DroneCmd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::srv::DroneCmd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::srv::DroneCmd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::srv::DroneCmd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__srv__DroneCmd_Response
    std::shared_ptr<drone_msgs::srv::DroneCmd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__srv__DroneCmd_Response
    std::shared_ptr<drone_msgs::srv::DroneCmd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneCmd_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneCmd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneCmd_Response_

// alias to use template instance with default allocator
using DroneCmd_Response =
  drone_msgs::srv::DroneCmd_Response_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
DroneCmd_Response_<ContainerAllocator>::STATUS_UNKNOWN_CMD = "unknown cmd";

}  // namespace srv

}  // namespace drone_msgs

namespace drone_msgs
{

namespace srv
{

struct DroneCmd
{
  using Request = drone_msgs::srv::DroneCmd_Request;
  using Response = drone_msgs::srv::DroneCmd_Response;
};

}  // namespace srv

}  // namespace drone_msgs

#endif  // DRONE_MSGS__SRV__DETAIL__DRONE_CMD__STRUCT_HPP_
