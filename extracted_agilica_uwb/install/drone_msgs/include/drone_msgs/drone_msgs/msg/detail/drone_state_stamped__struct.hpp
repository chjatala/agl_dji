// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from drone_msgs:msg/DroneStateStamped.idl
// generated code does not contain a copyright notice

#ifndef DRONE_MSGS__MSG__DETAIL__DRONE_STATE_STAMPED__STRUCT_HPP_
#define DRONE_MSGS__MSG__DETAIL__DRONE_STATE_STAMPED__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__drone_msgs__msg__DroneStateStamped __attribute__((deprecated))
#else
# define DEPRECATED__drone_msgs__msg__DroneStateStamped __declspec(deprecated)
#endif

namespace drone_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DroneStateStamped_
{
  using Type = DroneStateStamped_<ContainerAllocator>;

  explicit DroneStateStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = "";
      this->flight_state = "";
      this->ctrl_mode = "";
      this->cam_state = "";
      this->nav_state = "";
      this->mission_state = "";
      this->pil_state = "";
      this->armed = false;
      this->battery_remain = 0.0f;
      this->battery_voltage = 0.0f;
    }
  }

  explicit DroneStateStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    drone_id(_alloc),
    flight_state(_alloc),
    ctrl_mode(_alloc),
    cam_state(_alloc),
    nav_state(_alloc),
    mission_state(_alloc),
    pil_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->drone_id = "";
      this->flight_state = "";
      this->ctrl_mode = "";
      this->cam_state = "";
      this->nav_state = "";
      this->mission_state = "";
      this->pil_state = "";
      this->armed = false;
      this->battery_remain = 0.0f;
      this->battery_voltage = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _drone_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _drone_id_type drone_id;
  using _flight_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _flight_state_type flight_state;
  using _ctrl_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ctrl_mode_type ctrl_mode;
  using _cam_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cam_state_type cam_state;
  using _nav_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _nav_state_type nav_state;
  using _mission_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mission_state_type mission_state;
  using _pil_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pil_state_type pil_state;
  using _armed_type =
    bool;
  _armed_type armed;
  using _battery_remain_type =
    float;
  _battery_remain_type battery_remain;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__drone_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->drone_id = _arg;
    return *this;
  }
  Type & set__flight_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->flight_state = _arg;
    return *this;
  }
  Type & set__ctrl_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ctrl_mode = _arg;
    return *this;
  }
  Type & set__cam_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cam_state = _arg;
    return *this;
  }
  Type & set__nav_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->nav_state = _arg;
    return *this;
  }
  Type & set__mission_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mission_state = _arg;
    return *this;
  }
  Type & set__pil_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pil_state = _arg;
    return *this;
  }
  Type & set__armed(
    const bool & _arg)
  {
    this->armed = _arg;
    return *this;
  }
  Type & set__battery_remain(
    const float & _arg)
  {
    this->battery_remain = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> FLIGHT_STATE_INIT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CTRL_MODE_MANUAL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CTRL_MODE_AUTO;

  // pointer types
  using RawPtr =
    drone_msgs::msg::DroneStateStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const drone_msgs::msg::DroneStateStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<drone_msgs::msg::DroneStateStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<drone_msgs::msg::DroneStateStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::DroneStateStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::DroneStateStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      drone_msgs::msg::DroneStateStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<drone_msgs::msg::DroneStateStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<drone_msgs::msg::DroneStateStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<drone_msgs::msg::DroneStateStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__drone_msgs__msg__DroneStateStamped
    std::shared_ptr<drone_msgs::msg::DroneStateStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__drone_msgs__msg__DroneStateStamped
    std::shared_ptr<drone_msgs::msg::DroneStateStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DroneStateStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->drone_id != other.drone_id) {
      return false;
    }
    if (this->flight_state != other.flight_state) {
      return false;
    }
    if (this->ctrl_mode != other.ctrl_mode) {
      return false;
    }
    if (this->cam_state != other.cam_state) {
      return false;
    }
    if (this->nav_state != other.nav_state) {
      return false;
    }
    if (this->mission_state != other.mission_state) {
      return false;
    }
    if (this->pil_state != other.pil_state) {
      return false;
    }
    if (this->armed != other.armed) {
      return false;
    }
    if (this->battery_remain != other.battery_remain) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    return true;
  }
  bool operator!=(const DroneStateStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DroneStateStamped_

// alias to use template instance with default allocator
using DroneStateStamped =
  drone_msgs::msg::DroneStateStamped_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
DroneStateStamped_<ContainerAllocator>::FLIGHT_STATE_INIT = "init";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
DroneStateStamped_<ContainerAllocator>::CTRL_MODE_MANUAL = "manual";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
DroneStateStamped_<ContainerAllocator>::CTRL_MODE_AUTO = "auto";

}  // namespace msg

}  // namespace drone_msgs

#endif  // DRONE_MSGS__MSG__DETAIL__DRONE_STATE_STAMPED__STRUCT_HPP_
