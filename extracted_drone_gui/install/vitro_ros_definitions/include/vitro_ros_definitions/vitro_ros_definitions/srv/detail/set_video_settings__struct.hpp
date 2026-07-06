// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vitro_ros_definitions:srv/SetVideoSettings.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_VIDEO_SETTINGS__STRUCT_HPP_
#define VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_VIDEO_SETTINGS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__vitro_ros_definitions__srv__SetVideoSettings_Request __attribute__((deprecated))
#else
# define DEPRECATED__vitro_ros_definitions__srv__SetVideoSettings_Request __declspec(deprecated)
#endif

namespace vitro_ros_definitions
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetVideoSettings_Request_
{
  using Type = SetVideoSettings_Request_<ContainerAllocator>;

  explicit SetVideoSettings_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_video_stream_source_type = "";
      this->multi_spectral_fusion_type = "";
      this->multi_spectral_display_mode = "";
    }
  }

  explicit SetVideoSettings_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_video_stream_source_type(_alloc),
    multi_spectral_fusion_type(_alloc),
    multi_spectral_display_mode(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->camera_video_stream_source_type = "";
      this->multi_spectral_fusion_type = "";
      this->multi_spectral_display_mode = "";
    }
  }

  // field types and members
  using _camera_video_stream_source_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_video_stream_source_type_type camera_video_stream_source_type;
  using _multi_spectral_fusion_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _multi_spectral_fusion_type_type multi_spectral_fusion_type;
  using _multi_spectral_display_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _multi_spectral_display_mode_type multi_spectral_display_mode;

  // setters for named parameter idiom
  Type & set__camera_video_stream_source_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera_video_stream_source_type = _arg;
    return *this;
  }
  Type & set__multi_spectral_fusion_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->multi_spectral_fusion_type = _arg;
    return *this;
  }
  Type & set__multi_spectral_display_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->multi_spectral_display_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vitro_ros_definitions::srv::SetVideoSettings_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const vitro_ros_definitions::srv::SetVideoSettings_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vitro_ros_definitions::srv::SetVideoSettings_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vitro_ros_definitions::srv::SetVideoSettings_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::srv::SetVideoSettings_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::srv::SetVideoSettings_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::srv::SetVideoSettings_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::srv::SetVideoSettings_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vitro_ros_definitions::srv::SetVideoSettings_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vitro_ros_definitions::srv::SetVideoSettings_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vitro_ros_definitions__srv__SetVideoSettings_Request
    std::shared_ptr<vitro_ros_definitions::srv::SetVideoSettings_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vitro_ros_definitions__srv__SetVideoSettings_Request
    std::shared_ptr<vitro_ros_definitions::srv::SetVideoSettings_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetVideoSettings_Request_ & other) const
  {
    if (this->camera_video_stream_source_type != other.camera_video_stream_source_type) {
      return false;
    }
    if (this->multi_spectral_fusion_type != other.multi_spectral_fusion_type) {
      return false;
    }
    if (this->multi_spectral_display_mode != other.multi_spectral_display_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetVideoSettings_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetVideoSettings_Request_

// alias to use template instance with default allocator
using SetVideoSettings_Request =
  vitro_ros_definitions::srv::SetVideoSettings_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vitro_ros_definitions


#ifndef _WIN32
# define DEPRECATED__vitro_ros_definitions__srv__SetVideoSettings_Response __attribute__((deprecated))
#else
# define DEPRECATED__vitro_ros_definitions__srv__SetVideoSettings_Response __declspec(deprecated)
#endif

namespace vitro_ros_definitions
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetVideoSettings_Response_
{
  using Type = SetVideoSettings_Response_<ContainerAllocator>;

  explicit SetVideoSettings_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit SetVideoSettings_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    vitro_ros_definitions::srv::SetVideoSettings_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const vitro_ros_definitions::srv::SetVideoSettings_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vitro_ros_definitions::srv::SetVideoSettings_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vitro_ros_definitions::srv::SetVideoSettings_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::srv::SetVideoSettings_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::srv::SetVideoSettings_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vitro_ros_definitions::srv::SetVideoSettings_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vitro_ros_definitions::srv::SetVideoSettings_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vitro_ros_definitions::srv::SetVideoSettings_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vitro_ros_definitions::srv::SetVideoSettings_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vitro_ros_definitions__srv__SetVideoSettings_Response
    std::shared_ptr<vitro_ros_definitions::srv::SetVideoSettings_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vitro_ros_definitions__srv__SetVideoSettings_Response
    std::shared_ptr<vitro_ros_definitions::srv::SetVideoSettings_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetVideoSettings_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetVideoSettings_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetVideoSettings_Response_

// alias to use template instance with default allocator
using SetVideoSettings_Response =
  vitro_ros_definitions::srv::SetVideoSettings_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace vitro_ros_definitions

namespace vitro_ros_definitions
{

namespace srv
{

struct SetVideoSettings
{
  using Request = vitro_ros_definitions::srv::SetVideoSettings_Request;
  using Response = vitro_ros_definitions::srv::SetVideoSettings_Response;
};

}  // namespace srv

}  // namespace vitro_ros_definitions

#endif  // VITRO_ROS_DEFINITIONS__SRV__DETAIL__SET_VIDEO_SETTINGS__STRUCT_HPP_
