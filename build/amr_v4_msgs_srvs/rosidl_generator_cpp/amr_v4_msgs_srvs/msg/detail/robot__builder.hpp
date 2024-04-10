// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_v4_msgs_srvs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__BUILDER_HPP_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__BUILDER_HPP_

#include "amr_v4_msgs_srvs/msg/detail/robot__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace amr_v4_msgs_srvs
{

namespace msg
{

namespace builder
{

class Init_Robot_robot_active_status
{
public:
  explicit Init_Robot_robot_active_status(::amr_v4_msgs_srvs::msg::Robot & msg)
  : msg_(msg)
  {}
  ::amr_v4_msgs_srvs::msg::Robot robot_active_status(::amr_v4_msgs_srvs::msg::Robot::_robot_active_status_type arg)
  {
    msg_.robot_active_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_v4_msgs_srvs::msg::Robot msg_;
};

class Init_Robot_localized
{
public:
  explicit Init_Robot_localized(::amr_v4_msgs_srvs::msg::Robot & msg)
  : msg_(msg)
  {}
  Init_Robot_robot_active_status localized(::amr_v4_msgs_srvs::msg::Robot::_localized_type arg)
  {
    msg_.localized = std::move(arg);
    return Init_Robot_robot_active_status(msg_);
  }

private:
  ::amr_v4_msgs_srvs::msg::Robot msg_;
};

class Init_Robot_robot_localization_status
{
public:
  Init_Robot_robot_localization_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Robot_localized robot_localization_status(::amr_v4_msgs_srvs::msg::Robot::_robot_localization_status_type arg)
  {
    msg_.robot_localization_status = std::move(arg);
    return Init_Robot_localized(msg_);
  }

private:
  ::amr_v4_msgs_srvs::msg::Robot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_v4_msgs_srvs::msg::Robot>()
{
  return amr_v4_msgs_srvs::msg::builder::Init_Robot_robot_localization_status();
}

}  // namespace amr_v4_msgs_srvs

#endif  // AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__BUILDER_HPP_
