// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:action/GenLineFollow.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__ACTION__DETAIL__GEN_LINE_FOLLOW__STRUCT_HPP_
#define DRONE_MSGS__ACTION__DETAIL__GEN_LINE_FOLLOW__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cmd'
#include "drone_msgs/msg/detail/gen_line_follow_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__GenLineFollow_Goal __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__GenLineFollow_Goal __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenLineFollow_Goal_
{
  using Type = GenLineFollow_Goal_<ContainerAllocator>;

  explicit GenLineFollow_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd(_init)
  {
    (void)_init;
  }

  explicit GenLineFollow_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cmd(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _cmd_type =
    drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator>;
  _cmd_type cmd;

  // setters for named parameter idiom
  Type & set__cmd(
    const drone_msgs::msg::GenLineFollowCmd_<ContainerAllocator> & _arg)
  {
    this->cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_Goal
    std::shared_ptr<drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_Goal
    std::shared_ptr<drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenLineFollow_Goal_ & other) const
  {
    if (this->cmd != other.cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenLineFollow_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenLineFollow_Goal_

// alias to use template instance with default allocator
using GenLineFollow_Goal =
  drone_msgs::action::GenLineFollow_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__GenLineFollow_Result __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__GenLineFollow_Result __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenLineFollow_Result_
{
  using Type = GenLineFollow_Result_<ContainerAllocator>;

  explicit GenLineFollow_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit GenLineFollow_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::GenLineFollow_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::GenLineFollow_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_Result
    std::shared_ptr<drone_msgs::action::GenLineFollow_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_Result
    std::shared_ptr<drone_msgs::action::GenLineFollow_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenLineFollow_Result_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenLineFollow_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenLineFollow_Result_

// alias to use template instance with default allocator
using GenLineFollow_Result =
  drone_msgs::action::GenLineFollow_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__GenLineFollow_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__GenLineFollow_Feedback __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenLineFollow_Feedback_
{
  using Type = GenLineFollow_Feedback_<ContainerAllocator>;

  explicit GenLineFollow_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist_travelled = 0.0f;
    }
  }

  explicit GenLineFollow_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist_travelled = 0.0f;
    }
  }

  // field types and members
  using _dist_travelled_type =
    float;
  _dist_travelled_type dist_travelled;

  // setters for named parameter idiom
  Type & set__dist_travelled(
    const float & _arg)
  {
    this->dist_travelled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_Feedback
    std::shared_ptr<drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_Feedback
    std::shared_ptr<drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenLineFollow_Feedback_ & other) const
  {
    if (this->dist_travelled != other.dist_travelled) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenLineFollow_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenLineFollow_Feedback_

// alias to use template instance with default allocator
using GenLineFollow_Feedback =
  drone_msgs::action::GenLineFollow_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "drone_msgs/action/detail/gen_line_follow__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__GenLineFollow_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__GenLineFollow_SendGoal_Request __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenLineFollow_SendGoal_Request_
{
  using Type = GenLineFollow_SendGoal_Request_<ContainerAllocator>;

  explicit GenLineFollow_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GenLineFollow_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const drone_msgs::action::GenLineFollow_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::GenLineFollow_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::GenLineFollow_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_SendGoal_Request
    std::shared_ptr<drone_msgs::action::GenLineFollow_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_SendGoal_Request
    std::shared_ptr<drone_msgs::action::GenLineFollow_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenLineFollow_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenLineFollow_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenLineFollow_SendGoal_Request_

// alias to use template instance with default allocator
using GenLineFollow_SendGoal_Request =
  drone_msgs::action::GenLineFollow_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__GenLineFollow_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__GenLineFollow_SendGoal_Response __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenLineFollow_SendGoal_Response_
{
  using Type = GenLineFollow_SendGoal_Response_<ContainerAllocator>;

  explicit GenLineFollow_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit GenLineFollow_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::GenLineFollow_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::GenLineFollow_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_SendGoal_Response
    std::shared_ptr<drone_msgs::action::GenLineFollow_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_SendGoal_Response
    std::shared_ptr<drone_msgs::action::GenLineFollow_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenLineFollow_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenLineFollow_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenLineFollow_SendGoal_Response_

// alias to use template instance with default allocator
using GenLineFollow_SendGoal_Response =
  drone_msgs::action::GenLineFollow_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs

namespace drone_msgs
{

namespace action
{

struct GenLineFollow_SendGoal
{
  using Request = drone_msgs::action::GenLineFollow_SendGoal_Request;
  using Response = drone_msgs::action::GenLineFollow_SendGoal_Response;
};

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__GenLineFollow_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__GenLineFollow_GetResult_Request __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenLineFollow_GetResult_Request_
{
  using Type = GenLineFollow_GetResult_Request_<ContainerAllocator>;

  explicit GenLineFollow_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit GenLineFollow_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::GenLineFollow_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::GenLineFollow_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_GetResult_Request
    std::shared_ptr<drone_msgs::action::GenLineFollow_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_GetResult_Request
    std::shared_ptr<drone_msgs::action::GenLineFollow_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenLineFollow_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenLineFollow_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenLineFollow_GetResult_Request_

// alias to use template instance with default allocator
using GenLineFollow_GetResult_Request =
  drone_msgs::action::GenLineFollow_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "drone_msgs/action/detail/gen_line_follow__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__GenLineFollow_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__GenLineFollow_GetResult_Response __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenLineFollow_GetResult_Response_
{
  using Type = GenLineFollow_GetResult_Response_<ContainerAllocator>;

  explicit GenLineFollow_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit GenLineFollow_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::GenLineFollow_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const drone_msgs::action::GenLineFollow_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::GenLineFollow_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::GenLineFollow_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_GetResult_Response
    std::shared_ptr<drone_msgs::action::GenLineFollow_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_GetResult_Response
    std::shared_ptr<drone_msgs::action::GenLineFollow_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenLineFollow_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenLineFollow_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenLineFollow_GetResult_Response_

// alias to use template instance with default allocator
using GenLineFollow_GetResult_Response =
  drone_msgs::action::GenLineFollow_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs

namespace drone_msgs
{

namespace action
{

struct GenLineFollow_GetResult
{
  using Request = drone_msgs::action::GenLineFollow_GetResult_Request;
  using Response = drone_msgs::action::GenLineFollow_GetResult_Response;
};

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "drone_msgs/action/detail/gen_line_follow__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__GenLineFollow_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__GenLineFollow_FeedbackMessage __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct GenLineFollow_FeedbackMessage_
{
  using Type = GenLineFollow_FeedbackMessage_<ContainerAllocator>;

  explicit GenLineFollow_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit GenLineFollow_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const drone_msgs::action::GenLineFollow_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::GenLineFollow_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::GenLineFollow_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::GenLineFollow_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::GenLineFollow_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::GenLineFollow_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::GenLineFollow_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_FeedbackMessage
    std::shared_ptr<drone_msgs::action::GenLineFollow_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__GenLineFollow_FeedbackMessage
    std::shared_ptr<drone_msgs::action::GenLineFollow_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenLineFollow_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenLineFollow_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenLineFollow_FeedbackMessage_

// alias to use template instance with default allocator
using GenLineFollow_FeedbackMessage =
  drone_msgs::action::GenLineFollow_FeedbackMessage_<std::allocator<void>>;

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

struct GenLineFollow
{
  /// The goal message defined in the action definition.
  using Goal = drone_msgs::action::GenLineFollow_Goal;
  /// The result message defined in the action definition.
  using Result = drone_msgs::action::GenLineFollow_Result;
  /// The feedback message defined in the action definition.
  using Feedback = drone_msgs::action::GenLineFollow_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = drone_msgs::action::GenLineFollow_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = drone_msgs::action::GenLineFollow_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = drone_msgs::action::GenLineFollow_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct GenLineFollow GenLineFollow;

}  // namespace action

}  // namespace drone_msgs

#endif  // DRONE_MSGS__ACTION__DETAIL__GEN_LINE_FOLLOW__STRUCT_HPP_
