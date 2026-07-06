// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fm_gen_msgs:srv/Watchdog.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__SRV__DETAIL__WATCHDOG__STRUCT_HPP_
#define FM_GEN_MSGS__SRV__DETAIL__WATCHDOG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fm_gen_msgs__srv__Watchdog_Request __attribute__((deprecated))
#else
# define DEPRECATED__fm_gen_msgs__srv__Watchdog_Request __declspec(deprecated)
#endif

namespace fm_gen_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Watchdog_Request_
{
  using Type = Watchdog_Request_<ContainerAllocator>;

  explicit Watchdog_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Watchdog_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    fm_gen_msgs::srv::Watchdog_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const fm_gen_msgs::srv::Watchdog_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fm_gen_msgs::srv::Watchdog_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fm_gen_msgs::srv::Watchdog_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::srv::Watchdog_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::srv::Watchdog_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::srv::Watchdog_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::srv::Watchdog_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fm_gen_msgs::srv::Watchdog_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fm_gen_msgs::srv::Watchdog_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fm_gen_msgs__srv__Watchdog_Request
    std::shared_ptr<fm_gen_msgs::srv::Watchdog_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fm_gen_msgs__srv__Watchdog_Request
    std::shared_ptr<fm_gen_msgs::srv::Watchdog_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Watchdog_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Watchdog_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Watchdog_Request_

// alias to use template instance with default allocator
using Watchdog_Request =
  fm_gen_msgs::srv::Watchdog_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fm_gen_msgs


// Include directives for member types
// Member 'diagnostic_status'
#include "fm_gen_msgs/msg/detail/diagnostic_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fm_gen_msgs__srv__Watchdog_Response __attribute__((deprecated))
#else
# define DEPRECATED__fm_gen_msgs__srv__Watchdog_Response __declspec(deprecated)
#endif

namespace fm_gen_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Watchdog_Response_
{
  using Type = Watchdog_Response_<ContainerAllocator>;

  explicit Watchdog_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : diagnostic_status(_init)
  {
    (void)_init;
  }

  explicit Watchdog_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : diagnostic_status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _diagnostic_status_type =
    fm_gen_msgs::msg::DiagnosticArray_<ContainerAllocator>;
  _diagnostic_status_type diagnostic_status;

  // setters for named parameter idiom
  Type & set__diagnostic_status(
    const fm_gen_msgs::msg::DiagnosticArray_<ContainerAllocator> & _arg)
  {
    this->diagnostic_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fm_gen_msgs::srv::Watchdog_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const fm_gen_msgs::srv::Watchdog_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fm_gen_msgs::srv::Watchdog_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fm_gen_msgs::srv::Watchdog_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::srv::Watchdog_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::srv::Watchdog_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fm_gen_msgs::srv::Watchdog_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fm_gen_msgs::srv::Watchdog_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fm_gen_msgs::srv::Watchdog_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fm_gen_msgs::srv::Watchdog_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fm_gen_msgs__srv__Watchdog_Response
    std::shared_ptr<fm_gen_msgs::srv::Watchdog_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fm_gen_msgs__srv__Watchdog_Response
    std::shared_ptr<fm_gen_msgs::srv::Watchdog_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Watchdog_Response_ & other) const
  {
    if (this->diagnostic_status != other.diagnostic_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Watchdog_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Watchdog_Response_

// alias to use template instance with default allocator
using Watchdog_Response =
  fm_gen_msgs::srv::Watchdog_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace fm_gen_msgs

namespace fm_gen_msgs
{

namespace srv
{

struct Watchdog
{
  using Request = fm_gen_msgs::srv::Watchdog_Request;
  using Response = fm_gen_msgs::srv::Watchdog_Response;
};

}  // namespace srv

}  // namespace fm_gen_msgs

#endif  // FM_GEN_MSGS__SRV__DETAIL__WATCHDOG__STRUCT_HPP_
