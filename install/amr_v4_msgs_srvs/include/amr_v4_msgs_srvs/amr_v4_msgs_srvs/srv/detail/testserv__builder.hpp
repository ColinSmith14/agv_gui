// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_v4_msgs_srvs:srv/Testserv.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__BUILDER_HPP_
#define AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_v4_msgs_srvs/srv/detail/testserv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_v4_msgs_srvs
{

namespace srv
{

namespace builder
{

class Init_Testserv_Request_pin_mode
{
public:
  Init_Testserv_Request_pin_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::amr_v4_msgs_srvs::srv::Testserv_Request pin_mode(::amr_v4_msgs_srvs::srv::Testserv_Request::_pin_mode_type arg)
  {
    msg_.pin_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_v4_msgs_srvs::srv::Testserv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_v4_msgs_srvs::srv::Testserv_Request>()
{
  return amr_v4_msgs_srvs::srv::builder::Init_Testserv_Request_pin_mode();
}

}  // namespace amr_v4_msgs_srvs


namespace amr_v4_msgs_srvs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_v4_msgs_srvs::srv::Testserv_Response>()
{
  return ::amr_v4_msgs_srvs::srv::Testserv_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace amr_v4_msgs_srvs

#endif  // AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__BUILDER_HPP_
