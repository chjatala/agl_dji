// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:srv/ImageCtrl.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__SRV__DETAIL__IMAGE_CTRL__STRUCT_HPP_
#define DRONE_MSGS__SRV__DETAIL__IMAGE_CTRL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drone_msgs__srv__ImageCtrl_Request __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__srv__ImageCtrl_Request __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImageCtrl_Request_
{
  using Type = ImageCtrl_Request_<ContainerAllocator>;

  explicit ImageCtrl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->enable = false;
      this->next_picture_distance = 0.0f;
      this->overlap = 0.0f;
      this->fov = 0.0f;
      this->picture_plane_distance = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->enable = false;
      this->mode = "";
      this->next_picture_distance = 0.0f;
      this->overlap = 0.0f;
      this->fov = 0.0f;
      this->picture_plane_distance = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = "";
    }
  }

  explicit ImageCtrl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->enable = false;
      this->next_picture_distance = 0.0f;
      this->overlap = 0.0f;
      this->fov = 0.0f;
      this->picture_plane_distance = 0.0f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->enable = false;
      this->mode = "";
      this->next_picture_distance = 0.0f;
      this->overlap = 0.0f;
      this->fov = 0.0f;
      this->picture_plane_distance = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = "";
    }
  }

  // field types and members
  using _enable_type =
    bool;
  _enable_type enable;
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mode_type mode;
  using _next_picture_distance_type =
    float;
  _next_picture_distance_type next_picture_distance;
  using _overlap_type =
    float;
  _overlap_type overlap;
  using _fov_type =
    float;
  _fov_type fov;
  using _picture_plane_distance_type =
    float;
  _picture_plane_distance_type picture_plane_distance;

  // setters for named parameter idiom
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__next_picture_distance(
    const float & _arg)
  {
    this->next_picture_distance = _arg;
    return *this;
  }
  Type & set__overlap(
    const float & _arg)
  {
    this->overlap = _arg;
    return *this;
  }
  Type & set__fov(
    const float & _arg)
  {
    this->fov = _arg;
    return *this;
  }
  Type & set__picture_plane_distance(
    const float & _arg)
  {
    this->picture_plane_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::srv::ImageCtrl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::srv::ImageCtrl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::srv::ImageCtrl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::srv::ImageCtrl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::srv::ImageCtrl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::srv::ImageCtrl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::srv::ImageCtrl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::srv::ImageCtrl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::srv::ImageCtrl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::srv::ImageCtrl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__srv__ImageCtrl_Request
    std::shared_ptr<drone_msgs::srv::ImageCtrl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__srv__ImageCtrl_Request
    std::shared_ptr<drone_msgs::srv::ImageCtrl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageCtrl_Request_ & other) const
  {
    if (this->enable != other.enable) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->next_picture_distance != other.next_picture_distance) {
      return false;
    }
    if (this->overlap != other.overlap) {
      return false;
    }
    if (this->fov != other.fov) {
      return false;
    }
    if (this->picture_plane_distance != other.picture_plane_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageCtrl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageCtrl_Request_

// alias to use template instance with default allocator
using ImageCtrl_Request =
  drone_msgs::srv::ImageCtrl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace drone_msgs


#ifndef _WIN32
# define DEPRECATED__drone_msgs__srv__ImageCtrl_Response __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__srv__ImageCtrl_Response __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ImageCtrl_Response_
{
  using Type = ImageCtrl_Response_<ContainerAllocator>;

  explicit ImageCtrl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ImageCtrl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::srv::ImageCtrl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::srv::ImageCtrl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::srv::ImageCtrl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::srv::ImageCtrl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::srv::ImageCtrl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::srv::ImageCtrl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::srv::ImageCtrl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::srv::ImageCtrl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::srv::ImageCtrl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::srv::ImageCtrl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__srv__ImageCtrl_Response
    std::shared_ptr<drone_msgs::srv::ImageCtrl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__srv__ImageCtrl_Response
    std::shared_ptr<drone_msgs::srv::ImageCtrl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageCtrl_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageCtrl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageCtrl_Response_

// alias to use template instance with default allocator
using ImageCtrl_Response =
  drone_msgs::srv::ImageCtrl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace drone_msgs

namespace drone_msgs
{

namespace srv
{

struct ImageCtrl
{
  using Request = drone_msgs::srv::ImageCtrl_Request;
  using Response = drone_msgs::srv::ImageCtrl_Response;
};

}  // namespace srv

}  // namespace drone_msgs

#endif  // DRONE_MSGS__SRV__DETAIL__IMAGE_CTRL__STRUCT_HPP_
