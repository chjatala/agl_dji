// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vitro_ros_definitions:srv/GetArucoDir.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_ARUCO_DIR__STRUCT_HPP_
#define VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_ARUCO_DIR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vitro_ros_definitions__srv__GetArucoDir_Request __attribute__((deprecated))
#else
# define DEPRECATED__vitro_ros_definitions__srv__GetArucoDir_Request __declspec(deprecated)
#endif

namespace vitro_ros_definitions
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetArucoDir_Request_
{
  using Type = GetArucoDir_Request_<ContainerAllocator>;

  explicit GetArucoDir_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
    }
  }

  explicit GetArucoDir_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ll;
    }
  }

  // field types and members
  using _id_type =
    int64_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vitro_ros_definitions::srv::GetArucoDir_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const vitro_ros_definitions::srv::GetArucoDir_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vitro_ros_definitions::srv::GetArucoDir_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vitro_ros_definitions::srv::GetArucoDir_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::srv::GetArucoDir_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::srv::GetArucoDir_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::srv::GetArucoDir_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::srv::GetArucoDir_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vitro_ros_definitions::srv::GetArucoDir_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vitro_ros_definitions::srv::GetArucoDir_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vitro_ros_definitions__srv__GetArucoDir_Request
    std::shared_ptr<vitro_ros_definitions::srv::GetArucoDir_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vitro_ros_definitions__srv__GetArucoDir_Request
    std::shared_ptr<vitro_ros_definitions::srv::GetArucoDir_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetArucoDir_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetArucoDir_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetArucoDir_Request_

// alias to use template instance with default allocator
using GetArucoDir_Request =
  vitro_ros_definitions::srv::GetArucoDir_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vitro_ros_definitions


#ifndef _WIN32
# define DEPRECATED__vitro_ros_definitions__srv__GetArucoDir_Response __attribute__((deprecated))
#else
# define DEPRECATED__vitro_ros_definitions__srv__GetArucoDir_Response __declspec(deprecated)
#endif

namespace vitro_ros_definitions
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetArucoDir_Response_
{
  using Type = GetArucoDir_Response_<ContainerAllocator>;

  explicit GetArucoDir_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
    }
  }

  explicit GetArucoDir_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
    }
  }

  // field types and members
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vitro_ros_definitions::srv::GetArucoDir_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const vitro_ros_definitions::srv::GetArucoDir_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vitro_ros_definitions::srv::GetArucoDir_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vitro_ros_definitions::srv::GetArucoDir_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::srv::GetArucoDir_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::srv::GetArucoDir_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::srv::GetArucoDir_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::srv::GetArucoDir_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vitro_ros_definitions::srv::GetArucoDir_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vitro_ros_definitions::srv::GetArucoDir_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vitro_ros_definitions__srv__GetArucoDir_Response
    std::shared_ptr<vitro_ros_definitions::srv::GetArucoDir_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vitro_ros_definitions__srv__GetArucoDir_Response
    std::shared_ptr<vitro_ros_definitions::srv::GetArucoDir_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetArucoDir_Response_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetArucoDir_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetArucoDir_Response_

// alias to use template instance with default allocator
using GetArucoDir_Response =
  vitro_ros_definitions::srv::GetArucoDir_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vitro_ros_definitions

namespace vitro_ros_definitions
{

namespace srv
{

struct GetArucoDir
{
  using Request = vitro_ros_definitions::srv::GetArucoDir_Request;
  using Response = vitro_ros_definitions::srv::GetArucoDir_Response;
};

}  // namespace srv

}  // namespace vitro_ros_definitions

#endif  // VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_ARUCO_DIR__STRUCT_HPP_
