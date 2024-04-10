// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from amr_v4_msgs_srvs:srv/Testserv.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__STRUCT_HPP_
#define AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__amr_v4_msgs_srvs__srv__Testserv_Request __attribute__((deprecated))
#else
# define DEPRECATED__amr_v4_msgs_srvs__srv__Testserv_Request __declspec(deprecated)
#endif

namespace amr_v4_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Testserv_Request_
{
  using Type = Testserv_Request_<ContainerAllocator>;

  explicit Testserv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin_mode = false;
    }
  }

  explicit Testserv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin_mode = false;
    }
  }

  // field types and members
  using _pin_mode_type =
    bool;
  _pin_mode_type pin_mode;

  // setters for named parameter idiom
  Type & set__pin_mode(
    const bool & _arg)
  {
    this->pin_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    amr_v4_msgs_srvs::srv::Testserv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_v4_msgs_srvs::srv::Testserv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_v4_msgs_srvs::srv::Testserv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_v4_msgs_srvs::srv::Testserv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_v4_msgs_srvs::srv::Testserv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_v4_msgs_srvs::srv::Testserv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_v4_msgs_srvs::srv::Testserv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_v4_msgs_srvs::srv::Testserv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_v4_msgs_srvs::srv::Testserv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_v4_msgs_srvs::srv::Testserv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_v4_msgs_srvs__srv__Testserv_Request
    std::shared_ptr<amr_v4_msgs_srvs::srv::Testserv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_v4_msgs_srvs__srv__Testserv_Request
    std::shared_ptr<amr_v4_msgs_srvs::srv::Testserv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Testserv_Request_ & other) const
  {
    if (this->pin_mode != other.pin_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const Testserv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Testserv_Request_

// alias to use template instance with default allocator
using Testserv_Request =
  amr_v4_msgs_srvs::srv::Testserv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace amr_v4_msgs_srvs


#ifndef _WIN32
# define DEPRECATED__amr_v4_msgs_srvs__srv__Testserv_Response __attribute__((deprecated))
#else
# define DEPRECATED__amr_v4_msgs_srvs__srv__Testserv_Response __declspec(deprecated)
#endif

namespace amr_v4_msgs_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Testserv_Response_
{
  using Type = Testserv_Response_<ContainerAllocator>;

  explicit Testserv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Testserv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    amr_v4_msgs_srvs::srv::Testserv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const amr_v4_msgs_srvs::srv::Testserv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<amr_v4_msgs_srvs::srv::Testserv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<amr_v4_msgs_srvs::srv::Testserv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      amr_v4_msgs_srvs::srv::Testserv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<amr_v4_msgs_srvs::srv::Testserv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      amr_v4_msgs_srvs::srv::Testserv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<amr_v4_msgs_srvs::srv::Testserv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<amr_v4_msgs_srvs::srv::Testserv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<amr_v4_msgs_srvs::srv::Testserv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__amr_v4_msgs_srvs__srv__Testserv_Response
    std::shared_ptr<amr_v4_msgs_srvs::srv::Testserv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__amr_v4_msgs_srvs__srv__Testserv_Response
    std::shared_ptr<amr_v4_msgs_srvs::srv::Testserv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Testserv_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Testserv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Testserv_Response_

// alias to use template instance with default allocator
using Testserv_Response =
  amr_v4_msgs_srvs::srv::Testserv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace amr_v4_msgs_srvs

namespace amr_v4_msgs_srvs
{

namespace srv
{

struct Testserv
{
  using Request = amr_v4_msgs_srvs::srv::Testserv_Request;
  using Response = amr_v4_msgs_srvs::srv::Testserv_Response;
};

}  // namespace srv

}  // namespace amr_v4_msgs_srvs

#endif  // AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__STRUCT_HPP_
