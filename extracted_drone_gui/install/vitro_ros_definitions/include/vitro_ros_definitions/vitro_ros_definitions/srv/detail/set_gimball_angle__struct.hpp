// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vitro_ros_definitions:srv/SetGimballAngle.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_GIMBALL_ANGLE__STRUCT_HPP_
#define VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_GIMBALL_ANGLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vitro_ros_definitions__srv__SetGimballAngle_Request __attribute__((deprecated))
#else
# define DEPRECATED__vitro_ros_definitions__srv__SetGimballAngle_Request __declspec(deprecated)
#endif

namespace vitro_ros_definitions
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGimballAngle_Request_
{
  using Type = SetGimballAngle_Request_<ContainerAllocator>;

  explicit SetGimballAngle_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->speed = -1.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->pitch = 0.0f;
      this->speed = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0f;
    }
  }

  explicit SetGimballAngle_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->speed = -1.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->pitch = 0.0f;
      this->speed = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pitch = 0.0f;
    }
  }

  // field types and members
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vitro_ros_definitions::srv::SetGimballAngle_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const vitro_ros_definitions::srv::SetGimballAngle_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vitro_ros_definitions::srv::SetGimballAngle_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vitro_ros_definitions::srv::SetGimballAngle_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::srv::SetGimballAngle_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::srv::SetGimballAngle_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::srv::SetGimballAngle_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::srv::SetGimballAngle_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vitro_ros_definitions::srv::SetGimballAngle_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vitro_ros_definitions::srv::SetGimballAngle_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vitro_ros_definitions__srv__SetGimballAngle_Request
    std::shared_ptr<vitro_ros_definitions::srv::SetGimballAngle_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vitro_ros_definitions__srv__SetGimballAngle_Request
    std::shared_ptr<vitro_ros_definitions::srv::SetGimballAngle_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGimballAngle_Request_ & other) const
  {
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGimballAngle_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGimballAngle_Request_

// alias to use template instance with default allocator
using SetGimballAngle_Request =
  vitro_ros_definitions::srv::SetGimballAngle_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vitro_ros_definitions


#ifndef _WIN32
# define DEPRECATED__vitro_ros_definitions__srv__SetGimballAngle_Response __attribute__((deprecated))
#else
# define DEPRECATED__vitro_ros_definitions__srv__SetGimballAngle_Response __declspec(deprecated)
#endif

namespace vitro_ros_definitions
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetGimballAngle_Response_
{
  using Type = SetGimballAngle_Response_<ContainerAllocator>;

  explicit SetGimballAngle_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit SetGimballAngle_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vitro_ros_definitions::srv::SetGimballAngle_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const vitro_ros_definitions::srv::SetGimballAngle_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vitro_ros_definitions::srv::SetGimballAngle_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vitro_ros_definitions::srv::SetGimballAngle_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::srv::SetGimballAngle_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::srv::SetGimballAngle_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::srv::SetGimballAngle_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::srv::SetGimballAngle_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vitro_ros_definitions::srv::SetGimballAngle_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vitro_ros_definitions::srv::SetGimballAngle_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vitro_ros_definitions__srv__SetGimballAngle_Response
    std::shared_ptr<vitro_ros_definitions::srv::SetGimballAngle_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vitro_ros_definitions__srv__SetGimballAngle_Response
    std::shared_ptr<vitro_ros_definitions::srv::SetGimballAngle_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetGimballAngle_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetGimballAngle_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetGimballAngle_Response_

// alias to use template instance with default allocator
using SetGimballAngle_Response =
  vitro_ros_definitions::srv::SetGimballAngle_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vitro_ros_definitions

namespace vitro_ros_definitions
{

namespace srv
{

struct SetGimballAngle
{
  using Request = vitro_ros_definitions::srv::SetGimballAngle_Request;
  using Response = vitro_ros_definitions::srv::SetGimballAngle_Response;
};

}  // namespace srv

}  // namespace vitro_ros_definitions

#endif  // VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_GIMBALL_ANGLE__STRUCT_HPP_
