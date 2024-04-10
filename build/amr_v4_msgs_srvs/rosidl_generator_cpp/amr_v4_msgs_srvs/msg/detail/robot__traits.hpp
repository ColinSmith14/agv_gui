// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_v4_msgs_srvs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__TRAITS_HPP_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__TRAITS_HPP_

#include "amr_v4_msgs_srvs/msg/detail/robot__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const amr_v4_msgs_srvs::msg::Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_localization_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_localization_status: ";
    value_to_yaml(msg.robot_localization_status, out);
    out << "\n";
  }

  // member: localized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localized: ";
    value_to_yaml(msg.localized, out);
    out << "\n";
  }

  // member: robot_active_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_active_status: ";
    value_to_yaml(msg.robot_active_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const amr_v4_msgs_srvs::msg::Robot & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<amr_v4_msgs_srvs::msg::Robot>()
{
  return "amr_v4_msgs_srvs::msg::Robot";
}

template<>
inline const char * name<amr_v4_msgs_srvs::msg::Robot>()
{
  return "amr_v4_msgs_srvs/msg/Robot";
}

template<>
struct has_fixed_size<amr_v4_msgs_srvs::msg::Robot>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_v4_msgs_srvs::msg::Robot>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<amr_v4_msgs_srvs::msg::Robot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__TRAITS_HPP_
