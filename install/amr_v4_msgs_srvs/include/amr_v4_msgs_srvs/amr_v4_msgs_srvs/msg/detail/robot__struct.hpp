// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_v4_msgs_srvs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__STRUCT_HPP_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__amr_v4_msgs_srvs__msg__Robot __attribute__((deprecated))
#else
# define DEPRECATED__amr_v4_msgs_srvs__msg__Robot __declspec(deprecated)
#endif

namespace amr_v4_msgs_srvs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Robot_
{
  using Type = Robot_<ContainerAllocator>;

  explicit Robot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_localization_status = "";
      this->localized = false;
      this->robot_active_status = "";
    }
  }

  explicit Robot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_localization_status(_alloc),
    robot_active_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_localization_status = "";
      this->localized = false;
      this->robot_active_status = "";
    }
  }

  // field types and members
  using _robot_localization_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_localization_status_type robot_localization_status;
  using _localized_type =
    bool;
  _localized_type localized;
  using _robot_active_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_active_status_type robot_active_status;

  // setters for named parameter idiom
  Type & set__robot_localization_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_localization_status = _arg;
    return *this;
  }
  Type & set__localized(
    const bool & _arg)
  {
    this->localized = _arg;
    return *this;
  }
  Type & set__robot_active_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_active_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_v4_msgs_srvs::msg::Robot_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_v4_msgs_srvs::msg::Robot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_v4_msgs_srvs::msg::Robot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_v4_msgs_srvs::msg::Robot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_v4_msgs_srvs::msg::Robot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_v4_msgs_srvs::msg::Robot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_v4_msgs_srvs::msg::Robot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_v4_msgs_srvs::msg::Robot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_v4_msgs_srvs::msg::Robot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_v4_msgs_srvs::msg::Robot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_v4_msgs_srvs__msg__Robot
    std::shared_ptr<amr_v4_msgs_srvs::msg::Robot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_v4_msgs_srvs__msg__Robot
    std::shared_ptr<amr_v4_msgs_srvs::msg::Robot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robot_ & other) const
  {
    if (this->robot_localization_status != other.robot_localization_status) {
      return false;
    }
    if (this->localized != other.localized) {
      return false;
    }
    if (this->robot_active_status != other.robot_active_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robot_

// alias to use template instance with default allocator
using Robot =
  amr_v4_msgs_srvs::msg::Robot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace amr_v4_msgs_srvs

#endif  // AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__STRUCT_HPP_
