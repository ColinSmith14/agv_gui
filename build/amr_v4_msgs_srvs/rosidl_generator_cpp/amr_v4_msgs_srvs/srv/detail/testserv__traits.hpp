// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from amr_v4_msgs_srvs:srv/Testserv.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__TRAITS_HPP_
#define AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "amr_v4_msgs_srvs/srv/detail/testserv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace amr_v4_msgs_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Testserv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pin_mode
  {
    out << "pin_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.pin_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Testserv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pin_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pin_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.pin_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Testserv_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace amr_v4_msgs_srvs

namespace rosidl_generator_traits
{

[[deprecated("use amr_v4_msgs_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const amr_v4_msgs_srvs::srv::Testserv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_v4_msgs_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_v4_msgs_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const amr_v4_msgs_srvs::srv::Testserv_Request & msg)
{
  return amr_v4_msgs_srvs::srv::to_yaml(msg);
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

namespace amr_v4_msgs_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Testserv_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Testserv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Testserv_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace amr_v4_msgs_srvs

namespace rosidl_generator_traits
{

[[deprecated("use amr_v4_msgs_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const amr_v4_msgs_srvs::srv::Testserv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_v4_msgs_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_v4_msgs_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const amr_v4_msgs_srvs::srv::Testserv_Response & msg)
{
  return amr_v4_msgs_srvs::srv::to_yaml(msg);
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

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace amr_v4_msgs_srvs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Testserv_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Testserv_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Testserv_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace amr_v4_msgs_srvs

namespace rosidl_generator_traits
{

[[deprecated("use amr_v4_msgs_srvs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const amr_v4_msgs_srvs::srv::Testserv_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  amr_v4_msgs_srvs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use amr_v4_msgs_srvs::srv::to_yaml() instead")]]
inline std::string to_yaml(const amr_v4_msgs_srvs::srv::Testserv_Event & msg)
{
  return amr_v4_msgs_srvs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<amr_v4_msgs_srvs::srv::Testserv_Event>()
{
  return "amr_v4_msgs_srvs::srv::Testserv_Event";
}

template<>
inline const char * name<amr_v4_msgs_srvs::srv::Testserv_Event>()
{
  return "amr_v4_msgs_srvs/srv/Testserv_Event";
}

template<>
struct has_fixed_size<amr_v4_msgs_srvs::srv::Testserv_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<amr_v4_msgs_srvs::srv::Testserv_Event>
  : std::integral_constant<bool, has_bounded_size<amr_v4_msgs_srvs::srv::Testserv_Request>::value && has_bounded_size<amr_v4_msgs_srvs::srv::Testserv_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<amr_v4_msgs_srvs::srv::Testserv_Event>
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
