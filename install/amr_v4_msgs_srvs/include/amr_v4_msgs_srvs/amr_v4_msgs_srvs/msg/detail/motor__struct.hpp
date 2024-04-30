// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_v4_msgs_srvs:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__STRUCT_HPP_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__amr_v4_msgs_srvs__msg__Motor __attribute__((deprecated))
#else
# define DEPRECATED__amr_v4_msgs_srvs__msg__Motor __declspec(deprecated)
#endif

namespace amr_v4_msgs_srvs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motor_
{
  using Type = Motor_<ContainerAllocator>;

  explicit Motor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output_current_right = "";
      this->error_right = "";
      this->output_current_left = "";
      this->error_left = "";
      this->output_current_pin = "";
      this->error_pin = "";
      this->target_pos_high = 0.0;
      this->target_pos_low = 0.0;
      this->current_pos = 0.0;
    }
  }

  explicit Motor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : output_current_right(_alloc),
    error_right(_alloc),
    output_current_left(_alloc),
    error_left(_alloc),
    output_current_pin(_alloc),
    error_pin(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->output_current_right = "";
      this->error_right = "";
      this->output_current_left = "";
      this->error_left = "";
      this->output_current_pin = "";
      this->error_pin = "";
      this->target_pos_high = 0.0;
      this->target_pos_low = 0.0;
      this->current_pos = 0.0;
    }
  }

  // field types and members
  using _output_current_right_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _output_current_right_type output_current_right;
  using _error_right_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_right_type error_right;
  using _output_current_left_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _output_current_left_type output_current_left;
  using _error_left_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_left_type error_left;
  using _output_current_pin_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _output_current_pin_type output_current_pin;
  using _error_pin_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_pin_type error_pin;
  using _target_pos_high_type =
    double;
  _target_pos_high_type target_pos_high;
  using _target_pos_low_type =
    double;
  _target_pos_low_type target_pos_low;
  using _current_pos_type =
    double;
  _current_pos_type current_pos;

  // setters for named parameter idiom
  Type & set__output_current_right(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->output_current_right = _arg;
    return *this;
  }
  Type & set__error_right(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_right = _arg;
    return *this;
  }
  Type & set__output_current_left(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->output_current_left = _arg;
    return *this;
  }
  Type & set__error_left(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_left = _arg;
    return *this;
  }
  Type & set__output_current_pin(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->output_current_pin = _arg;
    return *this;
  }
  Type & set__error_pin(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_pin = _arg;
    return *this;
  }
  Type & set__target_pos_high(
    const double & _arg)
  {
    this->target_pos_high = _arg;
    return *this;
  }
  Type & set__target_pos_low(
    const double & _arg)
  {
    this->target_pos_low = _arg;
    return *this;
  }
  Type & set__current_pos(
    const double & _arg)
  {
    this->current_pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_v4_msgs_srvs::msg::Motor_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_v4_msgs_srvs::msg::Motor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_v4_msgs_srvs::msg::Motor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_v4_msgs_srvs::msg::Motor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_v4_msgs_srvs::msg::Motor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_v4_msgs_srvs::msg::Motor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_v4_msgs_srvs::msg::Motor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_v4_msgs_srvs::msg::Motor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_v4_msgs_srvs::msg::Motor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_v4_msgs_srvs::msg::Motor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_v4_msgs_srvs__msg__Motor
    std::shared_ptr<amr_v4_msgs_srvs::msg::Motor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_v4_msgs_srvs__msg__Motor
    std::shared_ptr<amr_v4_msgs_srvs::msg::Motor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motor_ & other) const
  {
    if (this->output_current_right != other.output_current_right) {
      return false;
    }
    if (this->error_right != other.error_right) {
      return false;
    }
    if (this->output_current_left != other.output_current_left) {
      return false;
    }
    if (this->error_left != other.error_left) {
      return false;
    }
    if (this->output_current_pin != other.output_current_pin) {
      return false;
    }
    if (this->error_pin != other.error_pin) {
      return false;
    }
    if (this->target_pos_high != other.target_pos_high) {
      return false;
    }
    if (this->target_pos_low != other.target_pos_low) {
      return false;
    }
    if (this->current_pos != other.current_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motor_

// alias to use template instance with default allocator
using Motor =
  amr_v4_msgs_srvs::msg::Motor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_v4_msgs_srvs

#endif  // AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__STRUCT_HPP_
