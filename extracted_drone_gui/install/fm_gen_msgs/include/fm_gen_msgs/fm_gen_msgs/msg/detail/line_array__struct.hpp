// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fm_gen_msgs:msg/LineArray.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__LINE_ARRAY__STRUCT_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__LINE_ARRAY__STRUCT_HPP_

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
// Member 'lines'
#include "fm_gen_msgs/msg/detail/line__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fm_gen_msgs__msg__LineArray __attribute__((deprecated))
#else
# define DEPRECATED__fm_gen_msgs__msg__LineArray __declspec(deprecated)
#endif

namespace fm_gen_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LineArray_
{
  using Type = LineArray_<ContainerAllocator>;

  explicit LineArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_detection = 0;
      this->camera_id = "";
      this->time_captured = 0.0;
    }
  }

  explicit LineArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    camera_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_detection = 0;
      this->camera_id = "";
      this->time_captured = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _num_detection_type =
    uint8_t;
  _num_detection_type num_detection;
  using _camera_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _camera_id_type camera_id;
  using _time_captured_type =
    double;
  _time_captured_type time_captured;
  using _lines_type =
    std::vector<fm_gen_msgs::msg::Line_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<fm_gen_msgs::msg::Line_<ContainerAllocator>>>;
  _lines_type lines;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__num_detection(
    const uint8_t & _arg)
  {
    this->num_detection = _arg;
    return *this;
  }
  Type & set__camera_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->camera_id = _arg;
    return *this;
  }
  Type & set__time_captured(
    const double & _arg)
  {
    this->time_captured = _arg;
    return *this;
  }
  Type & set__lines(
    const std::vector<fm_gen_msgs::msg::Line_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<fm_gen_msgs::msg::Line_<ContainerAllocator>>> & _arg)
  {
    this->lines = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fm_gen_msgs::msg::LineArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const fm_gen_msgs::msg::LineArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fm_gen_msgs::msg::LineArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fm_gen_msgs::msg::LineArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::msg::LineArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::msg::LineArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::msg::LineArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::msg::LineArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fm_gen_msgs::msg::LineArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fm_gen_msgs::msg::LineArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fm_gen_msgs__msg__LineArray
    std::shared_ptr<fm_gen_msgs::msg::LineArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fm_gen_msgs__msg__LineArray
    std::shared_ptr<fm_gen_msgs::msg::LineArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LineArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->num_detection != other.num_detection) {
      return false;
    }
    if (this->camera_id != other.camera_id) {
      return false;
    }
    if (this->time_captured != other.time_captured) {
      return false;
    }
    if (this->lines != other.lines) {
      return false;
    }
    return true;
  }
  bool operator!=(const LineArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LineArray_

// alias to use template instance with default allocator
using LineArray =
  fm_gen_msgs::msg::LineArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__LINE_ARRAY__STRUCT_HPP_
