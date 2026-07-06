// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:action/TakeOff.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__ACTION__DETAIL__TAKE_OFF__STRUCT_HPP_
#define DRONE_MSGS__ACTION__DETAIL__TAKE_OFF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__TakeOff_Goal __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__TakeOff_Goal __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TakeOff_Goal_
{
  using Type = TakeOff_Goal_<ContainerAllocator>;

  explicit TakeOff_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TakeOff_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::TakeOff_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::TakeOff_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__TakeOff_Goal
    std::shared_ptr<drone_msgs::action::TakeOff_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__TakeOff_Goal
    std::shared_ptr<drone_msgs::action::TakeOff_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakeOff_Goal_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakeOff_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakeOff_Goal_

// alias to use template instance with default allocator
using TakeOff_Goal =
  drone_msgs::action::TakeOff_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__TakeOff_Result __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__TakeOff_Result __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TakeOff_Result_
{
  using Type = TakeOff_Result_<ContainerAllocator>;

  explicit TakeOff_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height_from_ground = 0.0f;
    }
  }

  explicit TakeOff_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height_from_ground = 0.0f;
    }
  }

  // field types and members
  using _height_from_ground_type =
    float;
  _height_from_ground_type height_from_ground;

  // setters for named parameter idiom
  Type & set__height_from_ground(
    const float & _arg)
  {
    this->height_from_ground = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::TakeOff_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::TakeOff_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__TakeOff_Result
    std::shared_ptr<drone_msgs::action::TakeOff_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__TakeOff_Result
    std::shared_ptr<drone_msgs::action::TakeOff_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakeOff_Result_ & other) const
  {
    if (this->height_from_ground != other.height_from_ground) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakeOff_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakeOff_Result_

// alias to use template instance with default allocator
using TakeOff_Result =
  drone_msgs::action::TakeOff_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__TakeOff_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__TakeOff_Feedback __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TakeOff_Feedback_
{
  using Type = TakeOff_Feedback_<ContainerAllocator>;

  explicit TakeOff_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height_from_ground = 0.0f;
    }
  }

  explicit TakeOff_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->height_from_ground = 0.0f;
    }
  }

  // field types and members
  using _height_from_ground_type =
    float;
  _height_from_ground_type height_from_ground;

  // setters for named parameter idiom
  Type & set__height_from_ground(
    const float & _arg)
  {
    this->height_from_ground = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::TakeOff_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::TakeOff_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__TakeOff_Feedback
    std::shared_ptr<drone_msgs::action::TakeOff_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__TakeOff_Feedback
    std::shared_ptr<drone_msgs::action::TakeOff_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakeOff_Feedback_ & other) const
  {
    if (this->height_from_ground != other.height_from_ground) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakeOff_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakeOff_Feedback_

// alias to use template instance with default allocator
using TakeOff_Feedback =
  drone_msgs::action::TakeOff_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "drone_msgs/action/detail/take_off__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__TakeOff_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__TakeOff_SendGoal_Request __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TakeOff_SendGoal_Request_
{
  using Type = TakeOff_SendGoal_Request_<ContainerAllocator>;

  explicit TakeOff_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit TakeOff_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::TakeOff_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const drone_msgs::action::TakeOff_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::TakeOff_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::TakeOff_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__TakeOff_SendGoal_Request
    std::shared_ptr<drone_msgs::action::TakeOff_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__TakeOff_SendGoal_Request
    std::shared_ptr<drone_msgs::action::TakeOff_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakeOff_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakeOff_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakeOff_SendGoal_Request_

// alias to use template instance with default allocator
using TakeOff_SendGoal_Request =
  drone_msgs::action::TakeOff_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__TakeOff_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__TakeOff_SendGoal_Response __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TakeOff_SendGoal_Response_
{
  using Type = TakeOff_SendGoal_Response_<ContainerAllocator>;

  explicit TakeOff_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit TakeOff_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::TakeOff_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::TakeOff_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__TakeOff_SendGoal_Response
    std::shared_ptr<drone_msgs::action::TakeOff_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__TakeOff_SendGoal_Response
    std::shared_ptr<drone_msgs::action::TakeOff_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakeOff_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakeOff_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakeOff_SendGoal_Response_

// alias to use template instance with default allocator
using TakeOff_SendGoal_Response =
  drone_msgs::action::TakeOff_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs

namespace drone_msgs
{

namespace action
{

struct TakeOff_SendGoal
{
  using Request = drone_msgs::action::TakeOff_SendGoal_Request;
  using Response = drone_msgs::action::TakeOff_SendGoal_Response;
};

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__TakeOff_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__TakeOff_GetResult_Request __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TakeOff_GetResult_Request_
{
  using Type = TakeOff_GetResult_Request_<ContainerAllocator>;

  explicit TakeOff_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit TakeOff_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::TakeOff_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::TakeOff_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__TakeOff_GetResult_Request
    std::shared_ptr<drone_msgs::action::TakeOff_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__TakeOff_GetResult_Request
    std::shared_ptr<drone_msgs::action::TakeOff_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakeOff_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakeOff_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakeOff_GetResult_Request_

// alias to use template instance with default allocator
using TakeOff_GetResult_Request =
  drone_msgs::action::TakeOff_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "drone_msgs/action/detail/take_off__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__TakeOff_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__TakeOff_GetResult_Response __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TakeOff_GetResult_Response_
{
  using Type = TakeOff_GetResult_Response_<ContainerAllocator>;

  explicit TakeOff_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TakeOff_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::TakeOff_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const drone_msgs::action::TakeOff_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::TakeOff_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::TakeOff_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__TakeOff_GetResult_Response
    std::shared_ptr<drone_msgs::action::TakeOff_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__TakeOff_GetResult_Response
    std::shared_ptr<drone_msgs::action::TakeOff_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakeOff_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakeOff_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakeOff_GetResult_Response_

// alias to use template instance with default allocator
using TakeOff_GetResult_Response =
  drone_msgs::action::TakeOff_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs

namespace drone_msgs
{

namespace action
{

struct TakeOff_GetResult
{
  using Request = drone_msgs::action::TakeOff_GetResult_Request;
  using Response = drone_msgs::action::TakeOff_GetResult_Response;
};

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "drone_msgs/action/detail/take_off__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__TakeOff_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__TakeOff_FeedbackMessage __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TakeOff_FeedbackMessage_
{
  using Type = TakeOff_FeedbackMessage_<ContainerAllocator>;

  explicit TakeOff_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit TakeOff_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::TakeOff_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const drone_msgs::action::TakeOff_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::TakeOff_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::TakeOff_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::TakeOff_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::TakeOff_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::TakeOff_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::TakeOff_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__TakeOff_FeedbackMessage
    std::shared_ptr<drone_msgs::action::TakeOff_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__TakeOff_FeedbackMessage
    std::shared_ptr<drone_msgs::action::TakeOff_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TakeOff_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const TakeOff_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TakeOff_FeedbackMessage_

// alias to use template instance with default allocator
using TakeOff_FeedbackMessage =
  drone_msgs::action::TakeOff_FeedbackMessage_<std::allocator<void>>;

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

struct TakeOff
{
  /// The goal message defined in the action definition.
  using Goal = drone_msgs::action::TakeOff_Goal;
  /// The result message defined in the action definition.
  using Result = drone_msgs::action::TakeOff_Result;
  /// The feedback message defined in the action definition.
  using Feedback = drone_msgs::action::TakeOff_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = drone_msgs::action::TakeOff_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = drone_msgs::action::TakeOff_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = drone_msgs::action::TakeOff_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct TakeOff TakeOff;

}  // namespace action

}  // namespace drone_msgs

#endif  // DRONE_MSGS__ACTION__DETAIL__TAKE_OFF__STRUCT_HPP_
