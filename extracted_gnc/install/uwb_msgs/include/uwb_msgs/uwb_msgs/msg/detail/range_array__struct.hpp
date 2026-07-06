// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from uwb_msgs:msg/RangeArray.idl
// generated code does not contain a copyright notice

#ifndef UWB_MSGS__MSG__DETAIL__RANGE_ARRAY__STRUCT_HPP_
#define UWB_MSGS__MSG__DETAIL__RANGE_ARRAY__STRUCT_HPP_

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
// Member 'tag_position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'ranges'
#include "uwb_msgs/msg/detail/range__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__uwb_msgs__msg__RangeArray __attribute__((deprecated))
#else
# define DEPRECATED__uwb_msgs__msg__RangeArray __declspec(deprecated)
#endif

namespace uwb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RangeArray_
{
  using Type = RangeArray_<ContainerAllocator>;

  explicit RangeArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    tag_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tagid = "";
    }
  }

  explicit RangeArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    tagid(_alloc),
    tag_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tagid = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tagid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tagid_type tagid;
  using _tag_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _tag_position_type tag_position;
  using _ranges_type =
    std::vector<uwb_msgs::msg::Range_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uwb_msgs::msg::Range_<ContainerAllocator>>>;
  _ranges_type ranges;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tagid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tagid = _arg;
    return *this;
  }
  Type & set__tag_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->tag_position = _arg;
    return *this;
  }
  Type & set__ranges(
    const std::vector<uwb_msgs::msg::Range_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uwb_msgs::msg::Range_<ContainerAllocator>>> & _arg)
  {
    this->ranges = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    uwb_msgs::msg::RangeArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const uwb_msgs::msg::RangeArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<uwb_msgs::msg::RangeArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<uwb_msgs::msg::RangeArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      uwb_msgs::msg::RangeArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<uwb_msgs::msg::RangeArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      uwb_msgs::msg::RangeArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<uwb_msgs::msg::RangeArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<uwb_msgs::msg::RangeArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<uwb_msgs::msg::RangeArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__uwb_msgs__msg__RangeArray
    std::shared_ptr<uwb_msgs::msg::RangeArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__uwb_msgs__msg__RangeArray
    std::shared_ptr<uwb_msgs::msg::RangeArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RangeArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tagid != other.tagid) {
      return false;
    }
    if (this->tag_position != other.tag_position) {
      return false;
    }
    if (this->ranges != other.ranges) {
      return false;
    }
    return true;
  }
  bool operator!=(const RangeArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RangeArray_

// alias to use template instance with default allocator
using RangeArray =
  uwb_msgs::msg::RangeArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace uwb_msgs

#endif  // UWB_MSGS__MSG__DETAIL__RANGE_ARRAY__STRUCT_HPP_
