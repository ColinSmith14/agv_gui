// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_v4_msgs_srvs:msg/Pin.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__PIN__STRUCT_HPP_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__PIN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__amr_v4_msgs_srvs__msg__Pin __attribute__((deprecated))
#else
# define DEPRECATED__amr_v4_msgs_srvs__msg__Pin __declspec(deprecated)
#endif

namespace amr_v4_msgs_srvs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pin_
{
  using Type = Pin_<ContainerAllocator>;

  explicit Pin_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin_command = 0;
    }
  }

  explicit Pin_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin_command = 0;
    }
  }

  // field types and members
  using _pin_command_type =
    int8_t;
  _pin_command_type pin_command;

  // setters for named parameter idiom
  Type & set__pin_command(
    const int8_t & _arg)
  {
    this->pin_command = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_v4_msgs_srvs::msg::Pin_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_v4_msgs_srvs::msg::Pin_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_v4_msgs_srvs::msg::Pin_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_v4_msgs_srvs::msg::Pin_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_v4_msgs_srvs::msg::Pin_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_v4_msgs_srvs::msg::Pin_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_v4_msgs_srvs::msg::Pin_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_v4_msgs_srvs::msg::Pin_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_v4_msgs_srvs::msg::Pin_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_v4_msgs_srvs::msg::Pin_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_v4_msgs_srvs__msg__Pin
    std::shared_ptr<amr_v4_msgs_srvs::msg::Pin_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_v4_msgs_srvs__msg__Pin
    std::shared_ptr<amr_v4_msgs_srvs::msg::Pin_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pin_ & other) const
  {
    if (this->pin_command != other.pin_command) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pin_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pin_

// alias to use template instance with default allocator
using Pin =
  amr_v4_msgs_srvs::msg::Pin_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_v4_msgs_srvs

#endif  // AMR_V4_MSGS_SRVS__MSG__DETAIL__PIN__STRUCT_HPP_
