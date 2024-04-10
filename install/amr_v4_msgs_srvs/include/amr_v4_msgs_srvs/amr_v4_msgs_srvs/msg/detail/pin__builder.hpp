// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_v4_msgs_srvs:msg/Pin.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__PIN__BUILDER_HPP_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__PIN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_v4_msgs_srvs/msg/detail/pin__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_v4_msgs_srvs
{

namespace msg
{

namespace builder
{

class Init_Pin_pin_command
{
public:
  Init_Pin_pin_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::amr_v4_msgs_srvs::msg::Pin pin_command(::amr_v4_msgs_srvs::msg::Pin::_pin_command_type arg)
  {
    msg_.pin_command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_v4_msgs_srvs::msg::Pin msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_v4_msgs_srvs::msg::Pin>()
{
  return amr_v4_msgs_srvs::msg::builder::Init_Pin_pin_command();
}

}  // namespace amr_v4_msgs_srvs

#endif  // AMR_V4_MSGS_SRVS__MSG__DETAIL__PIN__BUILDER_HPP_
