// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_v4_msgs_srvs:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__TRAITS_HPP_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__TRAITS_HPP_

#include "amr_v4_msgs_srvs/msg/detail/motor__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const amr_v4_msgs_srvs::msg::Motor & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: output_current_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_current_right: ";
    value_to_yaml(msg.output_current_right, out);
    out << "\n";
  }

  // member: error_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_right: ";
    value_to_yaml(msg.error_right, out);
    out << "\n";
  }

  // member: output_current_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_current_left: ";
    value_to_yaml(msg.output_current_left, out);
    out << "\n";
  }

  // member: error_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_left: ";
    value_to_yaml(msg.error_left, out);
    out << "\n";
  }

  // member: output_current_pin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output_current_pin: ";
    value_to_yaml(msg.output_current_pin, out);
    out << "\n";
  }

  // member: error_pin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_pin: ";
    value_to_yaml(msg.error_pin, out);
    out << "\n";
  }

  // member: target_pos_high
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pos_high: ";
    value_to_yaml(msg.target_pos_high, out);
    out << "\n";
  }

  // member: target_pos_low
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pos_low: ";
    value_to_yaml(msg.target_pos_low, out);
    out << "\n";
  }

  // member: current_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_pos: ";
    value_to_yaml(msg.current_pos, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const amr_v4_msgs_srvs::msg::Motor & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
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
