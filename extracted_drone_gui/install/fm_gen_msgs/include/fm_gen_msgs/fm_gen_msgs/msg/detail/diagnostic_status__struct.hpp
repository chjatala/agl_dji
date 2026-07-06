// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fm_gen_msgs:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__STRUCT_HPP_
#define FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__STRUCT_HPP_

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
// Member 'values'
#include "fm_gen_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fm_gen_msgs__msg__DiagnosticStatus __attribute__((deprecated))
#else
# define DEPRECATED__fm_gen_msgs__msg__DiagnosticStatus __declspec(deprecated)
#endif

namespace fm_gen_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticStatus_
{
  using Type = DiagnosticStatus_<ContainerAllocator>;

  explicit DiagnosticStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->diagnoiser_name = "";
      this->message = "";
      this->component_id = "";
      this->num_status = 0;
    }
  }

  explicit DiagnosticStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    diagnoiser_name(_alloc),
    message(_alloc),
    component_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->level = 0;
      this->diagnoiser_name = "";
      this->message = "";
      this->component_id = "";
      this->num_status = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _level_type =
    int8_t;
  _level_type level;
  using _diagnoiser_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _diagnoiser_name_type diagnoiser_name;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _component_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _component_id_type component_id;
  using _num_status_type =
    uint8_t;
  _num_status_type num_status;
  using _values_type =
    std::vector<fm_gen_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<fm_gen_msgs::msg::KeyValue_<ContainerAllocator>>>;
  _values_type values;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__level(
    const int8_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__diagnoiser_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->diagnoiser_name = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__component_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->component_id = _arg;
    return *this;
  }
  Type & set__num_status(
    const uint8_t & _arg)
  {
    this->num_status = _arg;
    return *this;
  }
  Type & set__values(
    const std::vector<fm_gen_msgs::msg::KeyValue_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<fm_gen_msgs::msg::KeyValue_<ContainerAllocator>>> & _arg)
  {
    this->values = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t OK =
    0;
  static constexpr int8_t WARN =
    3;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr int8_t ERROR =
    5;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
  static constexpr int8_t STALE =
    7;

  // pointer types
  using RawPtr =
    fm_gen_msgs::msg::DiagnosticStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const fm_gen_msgs::msg::DiagnosticStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fm_gen_msgs::msg::DiagnosticStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fm_gen_msgs::msg::DiagnosticStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::msg::DiagnosticStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::msg::DiagnosticStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::msg::DiagnosticStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::msg::DiagnosticStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fm_gen_msgs::msg::DiagnosticStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fm_gen_msgs::msg::DiagnosticStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fm_gen_msgs__msg__DiagnosticStatus
    std::shared_ptr<fm_gen_msgs::msg::DiagnosticStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fm_gen_msgs__msg__DiagnosticStatus
    std::shared_ptr<fm_gen_msgs::msg::DiagnosticStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->diagnoiser_name != other.diagnoiser_name) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->component_id != other.component_id) {
      return false;
    }
    if (this->num_status != other.num_status) {
      return false;
    }
    if (this->values != other.values) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticStatus_

// alias to use template instance with default allocator
using DiagnosticStatus =
  fm_gen_msgs::msg::DiagnosticStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DiagnosticStatus_<ContainerAllocator>::OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DiagnosticStatus_<ContainerAllocator>::WARN;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DiagnosticStatus_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t DiagnosticStatus_<ContainerAllocator>::STALE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__MSG__DETAIL__DIAGNOSTIC_STATUS__STRUCT_HPP_
