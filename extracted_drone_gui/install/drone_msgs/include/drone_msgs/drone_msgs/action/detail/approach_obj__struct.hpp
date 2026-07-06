// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:action/ApproachObj.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__ACTION__DETAIL__APPROACH_OBJ__STRUCT_HPP_
#define DRONE_MSGS__ACTION__DETAIL__APPROACH_OBJ__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__ApproachObj_Goal __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__ApproachObj_Goal __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ApproachObj_Goal_
{
  using Type = ApproachObj_Goal_<ContainerAllocator>;

  explicit ApproachObj_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->approach_type = "TOWARDS";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->max_vel = 0.0;
      this->max_yaw_rate = 0.0;
      this->distance = 0.0;
      this->distance_tolerance = 0.0;
      this->object_pos_x = 0.0;
      this->object_pos_y = 0.0;
      this->object_pos_z = 0.0;
      this->approach_type = "";
      this->id = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_vel = 0.0;
      this->max_yaw_rate = 0.0;
      this->distance = 0.0;
      this->distance_tolerance = 0.0;
      this->object_pos_x = 0.0;
      this->object_pos_y = 0.0;
      this->object_pos_z = 0.0;
      this->id = "";
    }
  }

  explicit ApproachObj_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : approach_type(_alloc),
    id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->approach_type = "TOWARDS";
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->max_vel = 0.0;
      this->max_yaw_rate = 0.0;
      this->distance = 0.0;
      this->distance_tolerance = 0.0;
      this->object_pos_x = 0.0;
      this->object_pos_y = 0.0;
      this->object_pos_z = 0.0;
      this->approach_type = "";
      this->id = "";
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_vel = 0.0;
      this->max_yaw_rate = 0.0;
      this->distance = 0.0;
      this->distance_tolerance = 0.0;
      this->object_pos_x = 0.0;
      this->object_pos_y = 0.0;
      this->object_pos_z = 0.0;
      this->id = "";
    }
  }

  // field types and members
  using _max_vel_type =
    double;
  _max_vel_type max_vel;
  using _max_yaw_rate_type =
    double;
  _max_yaw_rate_type max_yaw_rate;
  using _distance_type =
    double;
  _distance_type distance;
  using _distance_tolerance_type =
    double;
  _distance_tolerance_type distance_tolerance;
  using _object_pos_x_type =
    double;
  _object_pos_x_type object_pos_x;
  using _object_pos_y_type =
    double;
  _object_pos_y_type object_pos_y;
  using _object_pos_z_type =
    double;
  _object_pos_z_type object_pos_z;
  using _approach_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _approach_type_type approach_type;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__max_vel(
    const double & _arg)
  {
    this->max_vel = _arg;
    return *this;
  }
  Type & set__max_yaw_rate(
    const double & _arg)
  {
    this->max_yaw_rate = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__distance_tolerance(
    const double & _arg)
  {
    this->distance_tolerance = _arg;
    return *this;
  }
  Type & set__object_pos_x(
    const double & _arg)
  {
    this->object_pos_x = _arg;
    return *this;
  }
  Type & set__object_pos_y(
    const double & _arg)
  {
    this->object_pos_y = _arg;
    return *this;
  }
  Type & set__object_pos_z(
    const double & _arg)
  {
    this->object_pos_z = _arg;
    return *this;
  }
  Type & set__approach_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->approach_type = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::ApproachObj_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::ApproachObj_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__ApproachObj_Goal
    std::shared_ptr<drone_msgs::action::ApproachObj_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__ApproachObj_Goal
    std::shared_ptr<drone_msgs::action::ApproachObj_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApproachObj_Goal_ & other) const
  {
    if (this->max_vel != other.max_vel) {
      return false;
    }
    if (this->max_yaw_rate != other.max_yaw_rate) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->distance_tolerance != other.distance_tolerance) {
      return false;
    }
    if (this->object_pos_x != other.object_pos_x) {
      return false;
    }
    if (this->object_pos_y != other.object_pos_y) {
      return false;
    }
    if (this->object_pos_z != other.object_pos_z) {
      return false;
    }
    if (this->approach_type != other.approach_type) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApproachObj_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApproachObj_Goal_

// alias to use template instance with default allocator
using ApproachObj_Goal =
  drone_msgs::action::ApproachObj_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'init_pos'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__ApproachObj_Result __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__ApproachObj_Result __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ApproachObj_Result_
{
  using Type = ApproachObj_Result_<ContainerAllocator>;

  explicit ApproachObj_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : init_pos(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->status = "";
      this->init_yaw = 0.0;
    }
  }

  explicit ApproachObj_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    status(_alloc),
    init_pos(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->status = "";
      this->init_yaw = 0.0;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _init_pos_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _init_pos_type init_pos;
  using _init_yaw_type =
    double;
  _init_yaw_type init_yaw;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__init_pos(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->init_pos = _arg;
    return *this;
  }
  Type & set__init_yaw(
    const double & _arg)
  {
    this->init_yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::ApproachObj_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::ApproachObj_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__ApproachObj_Result
    std::shared_ptr<drone_msgs::action::ApproachObj_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__ApproachObj_Result
    std::shared_ptr<drone_msgs::action::ApproachObj_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApproachObj_Result_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->init_pos != other.init_pos) {
      return false;
    }
    if (this->init_yaw != other.init_yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApproachObj_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApproachObj_Result_

// alias to use template instance with default allocator
using ApproachObj_Result =
  drone_msgs::action::ApproachObj_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'target_pos'
// already included above
// #include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__ApproachObj_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__ApproachObj_Feedback __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ApproachObj_Feedback_
{
  using Type = ApproachObj_Feedback_<ContainerAllocator>;

  explicit ApproachObj_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_pos(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->dist_to_go = 0.0f;
    }
  }

  explicit ApproachObj_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    target_pos(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->dist_to_go = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _dist_to_go_type =
    float;
  _dist_to_go_type dist_to_go;
  using _target_pos_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _target_pos_type target_pos;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__dist_to_go(
    const float & _arg)
  {
    this->dist_to_go = _arg;
    return *this;
  }
  Type & set__target_pos(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->target_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__ApproachObj_Feedback
    std::shared_ptr<drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__ApproachObj_Feedback
    std::shared_ptr<drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApproachObj_Feedback_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->dist_to_go != other.dist_to_go) {
      return false;
    }
    if (this->target_pos != other.target_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApproachObj_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApproachObj_Feedback_

// alias to use template instance with default allocator
using ApproachObj_Feedback =
  drone_msgs::action::ApproachObj_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "drone_msgs/action/detail/approach_obj__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__ApproachObj_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__ApproachObj_SendGoal_Request __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ApproachObj_SendGoal_Request_
{
  using Type = ApproachObj_SendGoal_Request_<ContainerAllocator>;

  explicit ApproachObj_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ApproachObj_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::ApproachObj_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const drone_msgs::action::ApproachObj_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::ApproachObj_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::ApproachObj_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__ApproachObj_SendGoal_Request
    std::shared_ptr<drone_msgs::action::ApproachObj_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__ApproachObj_SendGoal_Request
    std::shared_ptr<drone_msgs::action::ApproachObj_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApproachObj_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApproachObj_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApproachObj_SendGoal_Request_

// alias to use template instance with default allocator
using ApproachObj_SendGoal_Request =
  drone_msgs::action::ApproachObj_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__ApproachObj_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__ApproachObj_SendGoal_Response __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ApproachObj_SendGoal_Response_
{
  using Type = ApproachObj_SendGoal_Response_<ContainerAllocator>;

  explicit ApproachObj_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ApproachObj_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::ApproachObj_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::ApproachObj_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__ApproachObj_SendGoal_Response
    std::shared_ptr<drone_msgs::action::ApproachObj_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__ApproachObj_SendGoal_Response
    std::shared_ptr<drone_msgs::action::ApproachObj_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApproachObj_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApproachObj_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApproachObj_SendGoal_Response_

// alias to use template instance with default allocator
using ApproachObj_SendGoal_Response =
  drone_msgs::action::ApproachObj_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs

namespace drone_msgs
{

namespace action
{

struct ApproachObj_SendGoal
{
  using Request = drone_msgs::action::ApproachObj_SendGoal_Request;
  using Response = drone_msgs::action::ApproachObj_SendGoal_Response;
};

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__ApproachObj_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__ApproachObj_GetResult_Request __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ApproachObj_GetResult_Request_
{
  using Type = ApproachObj_GetResult_Request_<ContainerAllocator>;

  explicit ApproachObj_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ApproachObj_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::ApproachObj_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::ApproachObj_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__ApproachObj_GetResult_Request
    std::shared_ptr<drone_msgs::action::ApproachObj_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__ApproachObj_GetResult_Request
    std::shared_ptr<drone_msgs::action::ApproachObj_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApproachObj_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApproachObj_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApproachObj_GetResult_Request_

// alias to use template instance with default allocator
using ApproachObj_GetResult_Request =
  drone_msgs::action::ApproachObj_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "drone_msgs/action/detail/approach_obj__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__ApproachObj_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__ApproachObj_GetResult_Response __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ApproachObj_GetResult_Response_
{
  using Type = ApproachObj_GetResult_Response_<ContainerAllocator>;

  explicit ApproachObj_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ApproachObj_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::ApproachObj_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const drone_msgs::action::ApproachObj_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::ApproachObj_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::ApproachObj_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__ApproachObj_GetResult_Response
    std::shared_ptr<drone_msgs::action::ApproachObj_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__ApproachObj_GetResult_Response
    std::shared_ptr<drone_msgs::action::ApproachObj_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApproachObj_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApproachObj_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApproachObj_GetResult_Response_

// alias to use template instance with default allocator
using ApproachObj_GetResult_Response =
  drone_msgs::action::ApproachObj_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace drone_msgs

namespace drone_msgs
{

namespace action
{

struct ApproachObj_GetResult
{
  using Request = drone_msgs::action::ApproachObj_GetResult_Request;
  using Response = drone_msgs::action::ApproachObj_GetResult_Response;
};

}  // namespace action

}  // namespace drone_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "drone_msgs/action/detail/approach_obj__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__drone_msgs__action__ApproachObj_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__action__ApproachObj_FeedbackMessage __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ApproachObj_FeedbackMessage_
{
  using Type = ApproachObj_FeedbackMessage_<ContainerAllocator>;

  explicit ApproachObj_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ApproachObj_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const drone_msgs::action::ApproachObj_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    drone_msgs::action::ApproachObj_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::action::ApproachObj_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::action::ApproachObj_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::action::ApproachObj_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::action::ApproachObj_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::action::ApproachObj_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__action__ApproachObj_FeedbackMessage
    std::shared_ptr<drone_msgs::action::ApproachObj_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__action__ApproachObj_FeedbackMessage
    std::shared_ptr<drone_msgs::action::ApproachObj_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApproachObj_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApproachObj_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApproachObj_FeedbackMessage_

// alias to use template instance with default allocator
using ApproachObj_FeedbackMessage =
  drone_msgs::action::ApproachObj_FeedbackMessage_<std::allocator<void>>;

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

struct ApproachObj
{
  /// The goal message defined in the action definition.
  using Goal = drone_msgs::action::ApproachObj_Goal;
  /// The result message defined in the action definition.
  using Result = drone_msgs::action::ApproachObj_Result;
  /// The feedback message defined in the action definition.
  using Feedback = drone_msgs::action::ApproachObj_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = drone_msgs::action::ApproachObj_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = drone_msgs::action::ApproachObj_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = drone_msgs::action::ApproachObj_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ApproachObj ApproachObj;

}  // namespace action

}  // namespace drone_msgs

#endif  // DRONE_MSGS__ACTION__DETAIL__APPROACH_OBJ__STRUCT_HPP_
