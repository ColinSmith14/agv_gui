// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_v4_msgs_srvs:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__TRAITS_HPP_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_v4_msgs_srvs/msg/detail/motor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace amr_v4_msgs_srvs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Motor & msg,
  std::ostream & out)
{
  out << "{";
  // member: output_current_right
  {
    out << "output_current_right: ";
    rosidl_generator_traits::value_to_yaml(msg.output_current_right, out);
    out << ", ";
  }

  // member: error_right
  {
    out << "error_right: ";
    rosidl_generator_traits::value_to_yaml(msg.error_right, out);
    out << ", ";
  }

  // member: output_current_left
  {
    out << "output_current_left: ";
    rosidl_generator_traits::value_to_yaml(msg.output_current_left, out);
    out << ", ";
  }

  // member: error_left
  {
    out << "error_left: ";
    rosidl_generator_traits::value_to_yaml(msg.error_left, out);
    out << ", ";
  }

  // member: output_current_pin
  {
    out << "output_current_pin: ";
    rosidl_generator_traits::value_to_yaml(msg.output_current_pin, out);
    out << ", ";
  }

  // member: error_pin
  {
    out << "error_pin: ";
    rosidl_generator_traits::value_to_yaml(msg.error_pin, out);
    out << ", ";
  }

  // member: target_pos_high
  {
    out << "target_pos_high: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pos_high, out);
    out << ", ";
  }

  // member: target_pos_low
  {
    out << "target_pos_low: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pos_low, out);
    out << ", ";
  }

  // member: current_pos
  {
    out << "current_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.current_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: output_current_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_current_right: ";
    rosidl_generator_traits::value_to_yaml(msg.output_current_right, out);
    out << "\n";
  }

  // member: error_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_right: ";
    rosidl_generator_traits::value_to_yaml(msg.error_right, out);
    out << "\n";
  }

  // member: output_current_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_current_left: ";
    rosidl_generator_traits::value_to_yaml(msg.output_current_left, out);
    out << "\n";
  }

  // member: error_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_left: ";
    rosidl_generator_traits::value_to_yaml(msg.error_left, out);
    out << "\n";
  }

  // member: output_current_pin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_current_pin: ";
    rosidl_generator_traits::value_to_yaml(msg.output_current_pin, out);
    out << "\n";
  }

  // member: error_pin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_pin: ";
    rosidl_generator_traits::value_to_yaml(msg.error_pin, out);
    out << "\n";
  }

  // member: target_pos_high
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pos_high: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pos_high, out);
    out << "\n";
  }

  // member: target_pos_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pos_low: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pos_low, out);
    out << "\n";
  }

  // member: current_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.current_pos, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motor & msg, bool use_flow_style = false)
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

}  // namespace amr_v4_msgs_srvs

namespace rosidl_generator_traits
{

[[deprecated("use amr_v4_msgs_srvs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const amr_v4_msgs_srvs::msg::Motor & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_v4_msgs_srvs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_v4_msgs_srvs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_v4_msgs_srvs::msg::Motor & msg)
{
  return amr_v4_msgs_srvs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<amr_v4_msgs_srvs::msg::Motor>()
{
  return "amr_v4_msgs_srvs::msg::Motor";
}

template<>
inline const char * name<amr_v4_msgs_srvs::msg::Motor>()
{
  return "amr_v4_msgs_srvs/msg/Motor";
}

template<>
struct has_fixed_size<amr_v4_msgs_srvs::msg::Motor>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_v4_msgs_srvs::msg::Motor>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_v4_msgs_srvs::msg::Motor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__TRAITS_HPP_
