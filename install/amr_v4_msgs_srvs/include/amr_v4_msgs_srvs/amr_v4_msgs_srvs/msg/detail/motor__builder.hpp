// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from amr_v4_msgs_srvs:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__BUILDER_HPP_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "amr_v4_msgs_srvs/msg/detail/motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace amr_v4_msgs_srvs
{

namespace msg
{

namespace builder
{

class Init_Motor_current_pos
{
public:
  explicit Init_Motor_current_pos(::amr_v4_msgs_srvs::msg::Motor & msg)
  : msg_(msg)
  {}
  ::amr_v4_msgs_srvs::msg::Motor current_pos(::amr_v4_msgs_srvs::msg::Motor::_current_pos_type arg)
  {
    msg_.current_pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::amr_v4_msgs_srvs::msg::Motor msg_;
};

class Init_Motor_target_pos_low
{
public:
  explicit Init_Motor_target_pos_low(::amr_v4_msgs_srvs::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_current_pos target_pos_low(::amr_v4_msgs_srvs::msg::Motor::_target_pos_low_type arg)
  {
    msg_.target_pos_low = std::move(arg);
    return Init_Motor_current_pos(msg_);
  }

private:
  ::amr_v4_msgs_srvs::msg::Motor msg_;
};

class Init_Motor_target_pos_high
{
public:
  explicit Init_Motor_target_pos_high(::amr_v4_msgs_srvs::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_target_pos_low target_pos_high(::amr_v4_msgs_srvs::msg::Motor::_target_pos_high_type arg)
  {
    msg_.target_pos_high = std::move(arg);
    return Init_Motor_target_pos_low(msg_);
  }

private:
  ::amr_v4_msgs_srvs::msg::Motor msg_;
};

class Init_Motor_error_pin
{
public:
  explicit Init_Motor_error_pin(::amr_v4_msgs_srvs::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_target_pos_high error_pin(::amr_v4_msgs_srvs::msg::Motor::_error_pin_type arg)
  {
    msg_.error_pin = std::move(arg);
    return Init_Motor_target_pos_high(msg_);
  }

private:
  ::amr_v4_msgs_srvs::msg::Motor msg_;
};

class Init_Motor_output_current_pin
{
public:
  explicit Init_Motor_output_current_pin(::amr_v4_msgs_srvs::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_error_pin output_current_pin(::amr_v4_msgs_srvs::msg::Motor::_output_current_pin_type arg)
  {
    msg_.output_current_pin = std::move(arg);
    return Init_Motor_error_pin(msg_);
  }

private:
  ::amr_v4_msgs_srvs::msg::Motor msg_;
};

class Init_Motor_error_left
{
public:
  explicit Init_Motor_error_left(::amr_v4_msgs_srvs::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_output_current_pin error_left(::amr_v4_msgs_srvs::msg::Motor::_error_left_type arg)
  {
    msg_.error_left = std::move(arg);
    return Init_Motor_output_current_pin(msg_);
  }

private:
  ::amr_v4_msgs_srvs::msg::Motor msg_;
};

class Init_Motor_output_current_left
{
public:
  explicit Init_Motor_output_current_left(::amr_v4_msgs_srvs::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_error_left output_current_left(::amr_v4_msgs_srvs::msg::Motor::_output_current_left_type arg)
  {
    msg_.output_current_left = std::move(arg);
    return Init_Motor_error_left(msg_);
  }

private:
  ::amr_v4_msgs_srvs::msg::Motor msg_;
};

class Init_Motor_error_right
{
public:
  explicit Init_Motor_error_right(::amr_v4_msgs_srvs::msg::Motor & msg)
  : msg_(msg)
  {}
  Init_Motor_output_current_left error_right(::amr_v4_msgs_srvs::msg::Motor::_error_right_type arg)
  {
    msg_.error_right = std::move(arg);
    return Init_Motor_output_current_left(msg_);
  }

private:
  ::amr_v4_msgs_srvs::msg::Motor msg_;
};

class Init_Motor_output_current_right
{
public:
  Init_Motor_output_current_right()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motor_error_right output_current_right(::amr_v4_msgs_srvs::msg::Motor::_output_current_right_type arg)
  {
    msg_.output_current_right = std::move(arg);
    return Init_Motor_error_right(msg_);
  }

private:
  ::amr_v4_msgs_srvs::msg::Motor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::amr_v4_msgs_srvs::msg::Motor>()
{
  return amr_v4_msgs_srvs::msg::builder::Init_Motor_output_current_right();
}

}  // namespace amr_v4_msgs_srvs

#endif  // AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__BUILDER_HPP_
