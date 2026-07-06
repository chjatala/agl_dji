// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:action/SysId.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__ACTION__DETAIL__SYS_ID__STRUCT_HPP_
#define DRONE_MSGS__ACTION__DETAIL__SYS_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__SysId_Goal __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__SysId_Goal __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SysId_Goal_
{
  using Type = SysId_Goal_<ContainerAllocator>;

  explicit SysId_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->cfg_str = "{}";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->cfg_file = "";
      this->cfg_str = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cfg_file = "";
    }
  }

  explicit SysId_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cfg_file(_alloc),
    cfg_str(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->cfg_str = "{}";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->cfg_file = "";
      this->cfg_str = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cfg_file = "";
    }
  }

  // field types and members
  using _cfg_file_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cfg_file_type cfg_file;
  using _cfg_str_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cfg_str_type cfg_str;

  // setters for named parameter idiom
  Type & set__cfg_file(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cfg_file = _arg;
    return *this;
  }
  Type & set__cfg_str(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cfg_str = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::SysId_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::SysId_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__SysId_Goal
    std::shared_ptr<drone_msgs::action::SysId_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__SysId_Goal
    std::shared_ptr<drone_msgs::action::SysId_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SysId_Goal_ & other) const
  {
    if (this->cfg_file != other.cfg_file) {
      return false;
    }
    if (this->cfg_str != other.cfg_str) {
      return false;
    }
    return true;
  }
  bool operator!=(const SysId_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SysId_Goal_

// alias to use template instance with default allocator
using SysId_Goal =
  drone_msgs::action::SysId_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__SysId_Result __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__SysId_Result __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SysId_Result_
{
  using Type = SysId_Result_<ContainerAllocator>;

  explicit SysId_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit SysId_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _ret_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _ret_type ret;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__ret(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->ret = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::SysId_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::SysId_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__SysId_Result
    std::shared_ptr<drone_msgs::action::SysId_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__SysId_Result
    std::shared_ptr<drone_msgs::action::SysId_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SysId_Result_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->ret != other.ret) {
      return false;
    }
    return true;
  }
  bool operator!=(const SysId_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SysId_Result_

// alias to use template instance with default allocator
using SysId_Result =
  drone_msgs::action::SysId_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__SysId_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__SysId_Feedback __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SysId_Feedback_
{
  using Type = SysId_Feedback_<ContainerAllocator>;

  explicit SysId_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit SysId_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::SysId_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::SysId_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__SysId_Feedback
    std::shared_ptr<drone_msgs::action::SysId_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__SysId_Feedback
    std::shared_ptr<drone_msgs::action::SysId_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SysId_Feedback_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SysId_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SysId_Feedback_

// alias to use template instance with default allocator
using SysId_Feedback =
  drone_msgs::action::SysId_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "drone_msgs/action/detail/sys_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__SysId_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__SysId_SendGoal_Request __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SysId_SendGoal_Request_
{
  using Type = SysId_SendGoal_Request_<ContainerAllocator>;

  explicit SysId_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit SysId_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    drone_msgs::action::SysId_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const drone_msgs::action::SysId_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::SysId_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::SysId_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__SysId_SendGoal_Request
    std::shared_ptr<drone_msgs::action::SysId_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__SysId_SendGoal_Request
    std::shared_ptr<drone_msgs::action::SysId_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SysId_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const SysId_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SysId_SendGoal_Request_

// alias to use template instance with default allocator
using SysId_SendGoal_Request =
  drone_msgs::action::SysId_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__SysId_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__SysId_SendGoal_Response __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SysId_SendGoal_Response_
{
  using Type = SysId_SendGoal_Response_<ContainerAllocator>;

  explicit SysId_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit SysId_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::SysId_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::SysId_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__SysId_SendGoal_Response
    std::shared_ptr<drone_msgs::action::SysId_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__SysId_SendGoal_Response
    std::shared_ptr<drone_msgs::action::SysId_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SysId_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const SysId_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SysId_SendGoal_Response_

// alias to use template instance with default allocator
using SysId_SendGoal_Response =
  drone_msgs::action::SysId_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs

namespace drone_msgs
{

namespace action
{

struct SysId_SendGoal
{
  using Request = drone_msgs::action::SysId_SendGoal_Request;
  using Response = drone_msgs::action::SysId_SendGoal_Response;
};

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__SysId_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__SysId_GetResult_Request __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SysId_GetResult_Request_
{
  using Type = SysId_GetResult_Request_<ContainerAllocator>;

  explicit SysId_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit SysId_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::SysId_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::SysId_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__SysId_GetResult_Request
    std::shared_ptr<drone_msgs::action::SysId_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__SysId_GetResult_Request
    std::shared_ptr<drone_msgs::action::SysId_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SysId_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SysId_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SysId_GetResult_Request_

// alias to use template instance with default allocator
using SysId_GetResult_Request =
  drone_msgs::action::SysId_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "drone_msgs/action/detail/sys_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__SysId_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__SysId_GetResult_Response __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SysId_GetResult_Response_
{
  using Type = SysId_GetResult_Response_<ContainerAllocator>;

  explicit SysId_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit SysId_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    drone_msgs::action::SysId_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const drone_msgs::action::SysId_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::SysId_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::SysId_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__SysId_GetResult_Response
    std::shared_ptr<drone_msgs::action::SysId_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__SysId_GetResult_Response
    std::shared_ptr<drone_msgs::action::SysId_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SysId_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SysId_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SysId_GetResult_Response_

// alias to use template instance with default allocator
using SysId_GetResult_Response =
  drone_msgs::action::SysId_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs

namespace drone_msgs
{

namespace action
{

struct SysId_GetResult
{
  using Request = drone_msgs::action::SysId_GetResult_Request;
  using Response = drone_msgs::action::SysId_GetResult_Response;
};

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "drone_msgs/action/detail/sys_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__SysId_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__SysId_FeedbackMessage __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct SysId_FeedbackMessage_
{
  using Type = SysId_FeedbackMessage_<ContainerAllocator>;

  explicit SysId_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit SysId_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    drone_msgs::action::SysId_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const drone_msgs::action::SysId_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::SysId_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::SysId_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::SysId_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::SysId_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::SysId_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::SysId_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__SysId_FeedbackMessage
    std::shared_ptr<drone_msgs::action::SysId_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__SysId_FeedbackMessage
    std::shared_ptr<drone_msgs::action::SysId_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SysId_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const SysId_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SysId_FeedbackMessage_

// alias to use template instance with default allocator
using SysId_FeedbackMessage =
  drone_msgs::action::SysId_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace drone_msgs
{

namespace action
{

struct SysId
{
  /// The goal message defined in the action definition.
  using Goal = drone_msgs::action::SysId_Goal;
  /// The result message defined in the action definition.
  using Result = drone_msgs::action::SysId_Result;
  /// The feedback message defined in the action definition.
  using Feedback = drone_msgs::action::SysId_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = drone_msgs::action::SysId_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = drone_msgs::action::SysId_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = drone_msgs::action::SysId_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct SysId SysId;

}  // namespace action

}  // namespace drone_msgs

#endif  // DRONE_MSGS__ACTION__DETAIL__SYS_ID__STRUCT_HPP_
