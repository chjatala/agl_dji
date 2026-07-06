// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uwb_msgs:msg/Diagnostics.idl
// generated code does not contain a copyright notice

#ifndef UWB_MSGS__MSG__DETAIL__DIAGNOSTICS__TRAITS_HPP_
#define UWB_MSGS__MSG__DETAIL__DIAGNOSTICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "uwb_msgs/msg/detail/diagnostics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace uwb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Diagnostics & msg,
  std::ostream & out)
{
  out << "{";
  // member: cir_power
  {
    out << "cir_power: ";
    rosidl_generator_traits::value_to_yaml(msg.cir_power, out);
    out << ", ";
  }

  // member: cir_magnitude
  {
    if (msg.cir_magnitude.size() == 0) {
      out << "cir_magnitude: []";
    } else {
      out << "cir_magnitude: [";
      size_t pending_items = msg.cir_magnitude.size();
      for (auto item : msg.cir_magnitude) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cir_phase
  {
    if (msg.cir_phase.size() == 0) {
      out << "cir_phase: []";
    } else {
      out << "cir_phase: [";
      size_t pending_items = msg.cir_phase.size();
      for (auto item : msg.cir_phase) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cir_imag
  {
    if (msg.cir_imag.size() == 0) {
      out << "cir_imag: []";
    } else {
      out << "cir_imag: [";
      size_t pending_items = msg.cir_imag.size();
      for (auto item : msg.cir_imag) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cir_real
  {
    if (msg.cir_real.size() == 0) {
      out << "cir_real: []";
    } else {
      out << "cir_real: [";
      size_t pending_items = msg.cir_real.size();
      for (auto item : msg.cir_real) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: preamble_count
  {
    out << "preamble_count: ";
    rosidl_generator_traits::value_to_yaml(msg.preamble_count, out);
    out << ", ";
  }

  // member: fppl
  {
    out << "fppl: ";
    rosidl_generator_traits::value_to_yaml(msg.fppl, out);
    out << ", ";
  }

  // member: rssi
  {
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << ", ";
  }

  // member: index_fp
  {
    out << "index_fp: ";
    rosidl_generator_traits::value_to_yaml(msg.index_fp, out);
    out << ", ";
  }

  // member: msgdelay_ms
  {
    out << "msgdelay_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.msgdelay_ms, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Diagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cir_power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cir_power: ";
    rosidl_generator_traits::value_to_yaml(msg.cir_power, out);
    out << "\n";
  }

  // member: cir_magnitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cir_magnitude.size() == 0) {
      out << "cir_magnitude: []\n";
    } else {
      out << "cir_magnitude:\n";
      for (auto item : msg.cir_magnitude) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cir_phase
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cir_phase.size() == 0) {
      out << "cir_phase: []\n";
    } else {
      out << "cir_phase:\n";
      for (auto item : msg.cir_phase) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cir_imag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cir_imag.size() == 0) {
      out << "cir_imag: []\n";
    } else {
      out << "cir_imag:\n";
      for (auto item : msg.cir_imag) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: cir_real
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cir_real.size() == 0) {
      out << "cir_real: []\n";
    } else {
      out << "cir_real:\n";
      for (auto item : msg.cir_real) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: preamble_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "preamble_count: ";
    rosidl_generator_traits::value_to_yaml(msg.preamble_count, out);
    out << "\n";
  }

  // member: fppl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fppl: ";
    rosidl_generator_traits::value_to_yaml(msg.fppl, out);
    out << "\n";
  }

  // member: rssi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << "\n";
  }

  // member: index_fp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index_fp: ";
    rosidl_generator_traits::value_to_yaml(msg.index_fp, out);
    out << "\n";
  }

  // member: msgdelay_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msgdelay_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.msgdelay_ms, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Diagnostics & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace uwb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use uwb_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const uwb_msgs::msg::Diagnostics & msg,
  std::ostream & out, size_t indentation = 0)
{
  uwb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use uwb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const uwb_msgs::msg::Diagnostics & msg)
{
  return uwb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<uwb_msgs::msg::Diagnostics>()
{
  return "uwb_msgs::msg::Diagnostics";
}

template<>
inline const char * name<uwb_msgs::msg::Diagnostics>()
{
  return "uwb_msgs/msg/Diagnostics";
}

template<>
struct has_fixed_size<uwb_msgs::msg::Diagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uwb_msgs::msg::Diagnostics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uwb_msgs::msg::Diagnostics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UWB_MSGS__MSG__DETAIL__DIAGNOSTICS__TRAITS_HPP_
