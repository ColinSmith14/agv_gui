// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_v4_msgs_srvs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__TRAITS_HPP_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_v4_msgs_srvs/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace amr_v4_msgs_srvs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Robot & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_localization_status
  {
    out << "robot_localization_status: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_localization_status, out);
    out << ", ";
  }

  // member: localized
  {
    out << "localized: ";
    rosidl_generator_traits::value_to_yaml(msg.localized, out);
    out << ", ";
  }

  // member: robot_active_status
  {
    out << "robot_active_status: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_active_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_localization_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_localization_status: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_localization_status, out);
    out << "\n";
  }

  // member: localized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "localized: ";
    rosidl_generator_traits::value_to_yaml(msg.localized, out);
    out << "\n";
  }

  // member: robot_active_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_active_status: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_active_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robot & msg, bool use_flow_style = false)
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
  const amr_v4_msgs_srvs::msg::Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_v4_msgs_srvs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_v4_msgs_srvs::msg::to_yaml() instead")]]
inline std::string to_yaml(const amr_v4_msgs_srvs::msg::Robot & msg)
{
  return amr_v4_msgs_srvs::msg::to_yaml(msg);
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
