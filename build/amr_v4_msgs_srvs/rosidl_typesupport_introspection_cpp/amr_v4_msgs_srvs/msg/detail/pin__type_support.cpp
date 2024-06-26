// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from amr_v4_msgs_srvs:msg/Pin.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "amr_v4_msgs_srvs/msg/detail/pin__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace amr_v4_msgs_srvs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Pin_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) amr_v4_msgs_srvs::msg::Pin(_init);
}

void Pin_fini_function(void * message_memory)
{
  auto typed_message = static_cast<amr_v4_msgs_srvs::msg::Pin *>(message_memory);
  typed_message->~Pin();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Pin_message_member_array[1] = {
  {
    "pin_command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs::msg::Pin, pin_command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Pin_message_members = {
  "amr_v4_msgs_srvs::msg",  // message namespace
  "Pin",  // message name
  1,  // number of fields
  sizeof(amr_v4_msgs_srvs::msg::Pin),
  Pin_message_member_array,  // message members
  Pin_init_function,  // function to initialize message memory (memory has to be allocated)
  Pin_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Pin_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Pin_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace amr_v4_msgs_srvs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<amr_v4_msgs_srvs::msg::Pin>()
{
  return &::amr_v4_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::Pin_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, amr_v4_msgs_srvs, msg, Pin)() {
  return &::amr_v4_msgs_srvs::msg::rosidl_typesupport_introspection_cpp::Pin_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
