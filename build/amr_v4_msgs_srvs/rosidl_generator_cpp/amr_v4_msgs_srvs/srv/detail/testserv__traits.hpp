// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_v4_msgs_srvs:srv/Testserv.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__TRAITS_HPP_
#define AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__TRAITS_HPP_

#include "amr_v4_msgs_srvs/srv/detail/testserv__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const amr_v4_msgs_srvs::srv::Testserv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pin_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pin_mode: ";
    value_to_yaml(msg.pin_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const amr_v4_msgs_srvs::srv::Testserv_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<amr_v4_msgs_srvs::srv::Testserv_Request>()
{
  return "amr_v4_msgs_srvs::srv::Testserv_Request";
}

template<>
inline const char * name<amr_v4_msgs_srvs::srv::Testserv_Request>()
{
  return "amr_v4_msgs_srvs/srv/Testserv_Request";
}

template<>
struct has_fixed_size<amr_v4_msgs_srvs::srv::Testserv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<amr_v4_msgs_srvs::srv::Testserv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<amr_v4_msgs_srvs::srv::Testserv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const amr_v4_msgs_srvs::srv::Testserv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const amr_v4_msgs_srvs::srv::Testserv_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<amr_v4_msgs_srvs::srv::Testserv_Response>()
{
  return "amr_v4_msgs_srvs::srv::Testserv_Response";
}

template<>
inline const char * name<amr_v4_msgs_srvs::srv::Testserv_Response>()
{
  return "amr_v4_msgs_srvs/srv/Testserv_Response";
}

template<>
struct has_fixed_size<amr_v4_msgs_srvs::srv::Testserv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<amr_v4_msgs_srvs::srv::Testserv_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<amr_v4_msgs_srvs::srv::Testserv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<amr_v4_msgs_srvs::srv::Testserv>()
{
  return "amr_v4_msgs_srvs::srv::Testserv";
}

template<>
inline const char * name<amr_v4_msgs_srvs::srv::Testserv>()
{
  return "amr_v4_msgs_srvs/srv/Testserv";
}

template<>
struct has_fixed_size<amr_v4_msgs_srvs::srv::Testserv>
  : std::integral_constant<
    bool,
    has_fixed_size<amr_v4_msgs_srvs::srv::Testserv_Request>::value &&
    has_fixed_size<amr_v4_msgs_srvs::srv::Testserv_Response>::value
  >
{
};

template<>
struct has_bounded_size<amr_v4_msgs_srvs::srv::Testserv>
  : std::integral_constant<
    bool,
    has_bounded_size<amr_v4_msgs_srvs::srv::Testserv_Request>::value &&
    has_bounded_size<amr_v4_msgs_srvs::srv::Testserv_Response>::value
  >
{
};

template<>
struct is_service<amr_v4_msgs_srvs::srv::Testserv>
  : std::true_type
{
};

template<>
struct is_service_request<amr_v4_msgs_srvs::srv::Testserv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<amr_v4_msgs_srvs::srv::Testserv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__TRAITS_HPP_
