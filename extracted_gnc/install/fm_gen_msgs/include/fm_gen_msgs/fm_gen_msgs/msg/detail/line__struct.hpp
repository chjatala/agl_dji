// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fm_gen_msgs:msg/Line.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__LINE__STRUCT_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fm_gen_msgs__msg__Line __attribute__((deprecated))
#else
# define DEPRECATED__fm_gen_msgs__msg__Line __declspec(deprecated)
#endif

namespace fm_gen_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Line_
{
  using Type = Line_<ContainerAllocator>;

  explicit Line_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->line_type = "";
      this->certainty = 0;
    }
  }

  explicit Line_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : line_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->line_type = "";
      this->certainty = 0;
    }
  }

  // field types and members
  using _line_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _line_type_type line_type;
  using _certainty_type =
    uint8_t;
  _certainty_type certainty;
  using _line_1_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _line_1_type line_1;
  using _line_2_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _line_2_type line_2;
  using _line_c_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _line_c_type line_c;

  // setters for named parameter idiom
  Type & set__line_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->line_type = _arg;
    return *this;
  }
  Type & set__certainty(
    const uint8_t & _arg)
  {
    this->certainty = _arg;
    return *this;
  }
  Type & set__line_1(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->line_1 = _arg;
    return *this;
  }
  Type & set__line_2(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->line_2 = _arg;
    return *this;
  }
  Type & set__line_c(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->line_c = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fm_gen_msgs::msg::Line_<ContainerAllocator> *;
  using ConstRawPtr =
    const fm_gen_msgs::msg::Line_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fm_gen_msgs::msg::Line_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fm_gen_msgs::msg::Line_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::msg::Line_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::msg::Line_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::msg::Line_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::msg::Line_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fm_gen_msgs::msg::Line_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fm_gen_msgs::msg::Line_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fm_gen_msgs__msg__Line
    std::shared_ptr<fm_gen_msgs::msg::Line_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fm_gen_msgs__msg__Line
    std::shared_ptr<fm_gen_msgs::msg::Line_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Line_ & other) const
  {
    if (this->line_type != other.line_type) {
      return false;
    }
    if (this->certainty != other.certainty) {
      return false;
    }
    if (this->line_1 != other.line_1) {
      return false;
    }
    if (this->line_2 != other.line_2) {
      return false;
    }
    if (this->line_c != other.line_c) {
      return false;
    }
    return true;
  }
  bool operator!=(const Line_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Line_

// alias to use template instance with default allocator
using Line =
  fm_gen_msgs::msg::Line_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__LINE__STRUCT_HPP_
