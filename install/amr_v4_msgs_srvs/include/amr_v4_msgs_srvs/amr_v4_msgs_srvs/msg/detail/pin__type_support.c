// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amr_v4_msgs_srvs:msg/Pin.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amr_v4_msgs_srvs/msg/detail/pin__rosidl_typesupport_introspection_c.h"
#include "amr_v4_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amr_v4_msgs_srvs/msg/detail/pin__functions.h"
#include "amr_v4_msgs_srvs/msg/detail/pin__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void amr_v4_msgs_srvs__msg__Pin__rosidl_typesupport_introspection_c__Pin_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_v4_msgs_srvs__msg__Pin__init(message_memory);
}

void amr_v4_msgs_srvs__msg__Pin__rosidl_typesupport_introspection_c__Pin_fini_function(void * message_memory)
{
  amr_v4_msgs_srvs__msg__Pin__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember amr_v4_msgs_srvs__msg__Pin__rosidl_typesupport_introspection_c__Pin_message_member_array[1] = {
  {
    "pin_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs__msg__Pin, pin_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amr_v4_msgs_srvs__msg__Pin__rosidl_typesupport_introspection_c__Pin_message_members = {
  "amr_v4_msgs_srvs__msg",  // message namespace
  "Pin",  // message name
  1,  // number of fields
  sizeof(amr_v4_msgs_srvs__msg__Pin),
  amr_v4_msgs_srvs__msg__Pin__rosidl_typesupport_introspection_c__Pin_message_member_array,  // message members
  amr_v4_msgs_srvs__msg__Pin__rosidl_typesupport_introspection_c__Pin_init_function,  // function to initialize message memory (memory has to be allocated)
  amr_v4_msgs_srvs__msg__Pin__rosidl_typesupport_introspection_c__Pin_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amr_v4_msgs_srvs__msg__Pin__rosidl_typesupport_introspection_c__Pin_message_type_support_handle = {
  0,
  &amr_v4_msgs_srvs__msg__Pin__rosidl_typesupport_introspection_c__Pin_message_members,
  get_message_typesupport_handle_function,
  &amr_v4_msgs_srvs__msg__Pin__get_type_hash,
  &amr_v4_msgs_srvs__msg__Pin__get_type_description,
  &amr_v4_msgs_srvs__msg__Pin__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_v4_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, msg, Pin)() {
  if (!amr_v4_msgs_srvs__msg__Pin__rosidl_typesupport_introspection_c__Pin_message_type_support_handle.typesupport_identifier) {
    amr_v4_msgs_srvs__msg__Pin__rosidl_typesupport_introspection_c__Pin_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amr_v4_msgs_srvs__msg__Pin__rosidl_typesupport_introspection_c__Pin_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
