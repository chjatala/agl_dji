// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fm_gen_msgs:msg/TopicStatus.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS__STRUCT_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fm_gen_msgs__msg__TopicStatus __attribute__((deprecated))
#else
# define DEPRECATED__fm_gen_msgs__msg__TopicStatus __declspec(deprecated)
#endif

namespace fm_gen_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TopicStatus_
{
  using Type = TopicStatus_<ContainerAllocator>;

  explicit TopicStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
      this->topic_is_ok = false;
    }
  }

  explicit TopicStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : topic_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->topic_name = "";
      this->topic_is_ok = false;
    }
  }

  // field types and members
  using _topic_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _topic_name_type topic_name;
  using _topic_is_ok_type =
    bool;
  _topic_is_ok_type topic_is_ok;
  using _error_message_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _error_message_type error_message;
  using _error_code_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _error_code_type error_code;
  using _error_value_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _error_value_type error_value;

  // setters for named parameter idiom
  Type & set__topic_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->topic_name = _arg;
    return *this;
  }
  Type & set__topic_is_ok(
    const bool & _arg)
  {
    this->topic_is_ok = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }
  Type & set__error_code(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_value(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->error_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fm_gen_msgs::msg::TopicStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const fm_gen_msgs::msg::TopicStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fm_gen_msgs::msg::TopicStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fm_gen_msgs::msg::TopicStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::msg::TopicStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::msg::TopicStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::msg::TopicStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::msg::TopicStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fm_gen_msgs::msg::TopicStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fm_gen_msgs::msg::TopicStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fm_gen_msgs__msg__TopicStatus
    std::shared_ptr<fm_gen_msgs::msg::TopicStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fm_gen_msgs__msg__TopicStatus
    std::shared_ptr<fm_gen_msgs::msg::TopicStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TopicStatus_ & other) const
  {
    if (this->topic_name != other.topic_name) {
      return false;
    }
    if (this->topic_is_ok != other.topic_is_ok) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_value != other.error_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const TopicStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TopicStatus_

// alias to use template instance with default allocator
using TopicStatus =
  fm_gen_msgs::msg::TopicStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS__STRUCT_HPP_
