// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_v4_msgs_srvs:msg/Pin.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__PIN__TRAITS_HPP_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__PIN__TRAITS_HPP_

#include "amr_v4_msgs_srvs/msg/detail/pin__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const amr_v4_msgs_srvs::msg::Pin & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pin_command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pin_command: ";
    value_to_yaml(msg.pin_command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const amr_v4_msgs_srvs::msg::Pin & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<amr_v4_msgs_srvs::msg::Pin>()
{
  return "amr_v4_msgs_srvs::msg::Pin";
}

template<>
inline const char * name<amr_v4_msgs_srvs::msg::Pin>()
{
  return "amr_v4_msgs_srvs/msg/Pin";
}

template<>
struct has_fixed_size<amr_v4_msgs_srvs::msg::Pin>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<amr_v4_msgs_srvs::msg::Pin>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<amr_v4_msgs_srvs::msg::Pin>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_V4_MSGS_SRVS__MSG__DETAIL__PIN__TRAITS_HPP_
