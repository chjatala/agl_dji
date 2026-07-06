// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fm_gen_msgs:msg/TopicStatusArray.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS_ARRAY__STRUCT_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS_ARRAY__STRUCT_HPP_

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
// Member 'topic_array'
#include "fm_gen_msgs/msg/detail/topic_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fm_gen_msgs__msg__TopicStatusArray __attribute__((deprecated))
#else
# define DEPRECATED__fm_gen_msgs__msg__TopicStatusArray __declspec(deprecated)
#endif

namespace fm_gen_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TopicStatusArray_
{
  using Type = TopicStatusArray_<ContainerAllocator>;

  explicit TopicStatusArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->general_status = 0ul;
      this->status_sum = 0ul;
    }
  }

  explicit TopicStatusArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->general_status = 0ul;
      this->status_sum = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _general_status_type =
    uint32_t;
  _general_status_type general_status;
  using _status_sum_type =
    uint32_t;
  _status_sum_type status_sum;
  using _topic_array_type =
    std::vector<fm_gen_msgs::msg::TopicStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<fm_gen_msgs::msg::TopicStatus_<ContainerAllocator>>>;
  _topic_array_type topic_array;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__general_status(
    const uint32_t & _arg)
  {
    this->general_status = _arg;
    return *this;
  }
  Type & set__status_sum(
    const uint32_t & _arg)
  {
    this->status_sum = _arg;
    return *this;
  }
  Type & set__topic_array(
    const std::vector<fm_gen_msgs::msg::TopicStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<fm_gen_msgs::msg::TopicStatus_<ContainerAllocator>>> & _arg)
  {
    this->topic_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fm_gen_msgs::msg::TopicStatusArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const fm_gen_msgs::msg::TopicStatusArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fm_gen_msgs::msg::TopicStatusArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fm_gen_msgs::msg::TopicStatusArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::msg::TopicStatusArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::msg::TopicStatusArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::msg::TopicStatusArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::msg::TopicStatusArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fm_gen_msgs::msg::TopicStatusArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fm_gen_msgs::msg::TopicStatusArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fm_gen_msgs__msg__TopicStatusArray
    std::shared_ptr<fm_gen_msgs::msg::TopicStatusArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fm_gen_msgs__msg__TopicStatusArray
    std::shared_ptr<fm_gen_msgs::msg::TopicStatusArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TopicStatusArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->general_status != other.general_status) {
      return false;
    }
    if (this->status_sum != other.status_sum) {
      return false;
    }
    if (this->topic_array != other.topic_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const TopicStatusArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TopicStatusArray_

// alias to use template instance with default allocator
using TopicStatusArray =
  fm_gen_msgs::msg::TopicStatusArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__TOPIC_STATUS_ARRAY__STRUCT_HPP_
