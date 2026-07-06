// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uwb_msgs:msg/Diagnostics.idl
// generated code does not contain a copyright notice

#ifndef UWB_MSGS__MSG__DETAIL__DIAGNOSTICS__BUILDER_HPP_
#define UWB_MSGS__MSG__DETAIL__DIAGNOSTICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "uwb_msgs/msg/detail/diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace uwb_msgs
{

namespace msg
{

namespace builder
{

class Init_Diagnostics_msgdelay_ms
{
public:
  explicit Init_Diagnostics_msgdelay_ms(::uwb_msgs::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  ::uwb_msgs::msg::Diagnostics msgdelay_ms(::uwb_msgs::msg::Diagnostics::_msgdelay_ms_type arg)
  {
    msg_.msgdelay_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uwb_msgs::msg::Diagnostics msg_;
};

class Init_Diagnostics_index_fp
{
public:
  explicit Init_Diagnostics_index_fp(::uwb_msgs::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  Init_Diagnostics_msgdelay_ms index_fp(::uwb_msgs::msg::Diagnostics::_index_fp_type arg)
  {
    msg_.index_fp = std::move(arg);
    return Init_Diagnostics_msgdelay_ms(msg_);
  }

private:
  ::uwb_msgs::msg::Diagnostics msg_;
};

class Init_Diagnostics_rssi
{
public:
  explicit Init_Diagnostics_rssi(::uwb_msgs::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  Init_Diagnostics_index_fp rssi(::uwb_msgs::msg::Diagnostics::_rssi_type arg)
  {
    msg_.rssi = std::move(arg);
    return Init_Diagnostics_index_fp(msg_);
  }

private:
  ::uwb_msgs::msg::Diagnostics msg_;
};

class Init_Diagnostics_fppl
{
public:
  explicit Init_Diagnostics_fppl(::uwb_msgs::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  Init_Diagnostics_rssi fppl(::uwb_msgs::msg::Diagnostics::_fppl_type arg)
  {
    msg_.fppl = std::move(arg);
    return Init_Diagnostics_rssi(msg_);
  }

private:
  ::uwb_msgs::msg::Diagnostics msg_;
};

class Init_Diagnostics_preamble_count
{
public:
  explicit Init_Diagnostics_preamble_count(::uwb_msgs::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  Init_Diagnostics_fppl preamble_count(::uwb_msgs::msg::Diagnostics::_preamble_count_type arg)
  {
    msg_.preamble_count = std::move(arg);
    return Init_Diagnostics_fppl(msg_);
  }

private:
  ::uwb_msgs::msg::Diagnostics msg_;
};

class Init_Diagnostics_cir_real
{
public:
  explicit Init_Diagnostics_cir_real(::uwb_msgs::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  Init_Diagnostics_preamble_count cir_real(::uwb_msgs::msg::Diagnostics::_cir_real_type arg)
  {
    msg_.cir_real = std::move(arg);
    return Init_Diagnostics_preamble_count(msg_);
  }

private:
  ::uwb_msgs::msg::Diagnostics msg_;
};

class Init_Diagnostics_cir_imag
{
public:
  explicit Init_Diagnostics_cir_imag(::uwb_msgs::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  Init_Diagnostics_cir_real cir_imag(::uwb_msgs::msg::Diagnostics::_cir_imag_type arg)
  {
    msg_.cir_imag = std::move(arg);
    return Init_Diagnostics_cir_real(msg_);
  }

private:
  ::uwb_msgs::msg::Diagnostics msg_;
};

class Init_Diagnostics_cir_phase
{
public:
  explicit Init_Diagnostics_cir_phase(::uwb_msgs::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  Init_Diagnostics_cir_imag cir_phase(::uwb_msgs::msg::Diagnostics::_cir_phase_type arg)
  {
    msg_.cir_phase = std::move(arg);
    return Init_Diagnostics_cir_imag(msg_);
  }

private:
  ::uwb_msgs::msg::Diagnostics msg_;
};

class Init_Diagnostics_cir_magnitude
{
public:
  explicit Init_Diagnostics_cir_magnitude(::uwb_msgs::msg::Diagnostics & msg)
  : msg_(msg)
  {}
  Init_Diagnostics_cir_phase cir_magnitude(::uwb_msgs::msg::Diagnostics::_cir_magnitude_type arg)
  {
    msg_.cir_magnitude = std::move(arg);
    return Init_Diagnostics_cir_phase(msg_);
  }

private:
  ::uwb_msgs::msg::Diagnostics msg_;
};

class Init_Diagnostics_cir_power
{
public:
  Init_Diagnostics_cir_power()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Diagnostics_cir_magnitude cir_power(::uwb_msgs::msg::Diagnostics::_cir_power_type arg)
  {
    msg_.cir_power = std::move(arg);
    return Init_Diagnostics_cir_magnitude(msg_);
  }

private:
  ::uwb_msgs::msg::Diagnostics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uwb_msgs::msg::Diagnostics>()
{
  return uwb_msgs::msg::builder::Init_Diagnostics_cir_power();
}

}  // namespace uwb_msgs

#endif  // UWB_MSGS__MSG__DETAIL__DIAGNOSTICS__BUILDER_HPP_
