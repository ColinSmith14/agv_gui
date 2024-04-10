// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amr_v4_msgs_srvs:msg/Motor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amr_v4_msgs_srvs/msg/detail/motor__rosidl_typesupport_introspection_c.h"
#include "amr_v4_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amr_v4_msgs_srvs/msg/detail/motor__functions.h"
#include "amr_v4_msgs_srvs/msg/detail/motor__struct.h"


// Include directives for member types
// Member `output_current_right`
// Member `error_right`
// Member `output_current_left`
// Member `error_left`
// Member `output_current_pin`
// Member `error_pin`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Motor__rosidl_typesupport_introspection_c__Motor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_v4_msgs_srvs__msg__Motor__init(message_memory);
}

void Motor__rosidl_typesupport_introspection_c__Motor_fini_function(void * message_memory)
{
  amr_v4_msgs_srvs__msg__Motor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Motor__rosidl_typesupport_introspection_c__Motor_message_member_array[9] = {
  {
    "output_current_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs__msg__Motor, output_current_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs__msg__Motor, error_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output_current_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs__msg__Motor, output_current_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs__msg__Motor, error_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output_current_pin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs__msg__Motor, output_current_pin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_pin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs__msg__Motor, error_pin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_pos_high",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs__msg__Motor, target_pos_high),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_pos_low",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs__msg__Motor, target_pos_low),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs__msg__Motor, current_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Motor__rosidl_typesupport_introspection_c__Motor_message_members = {
  "amr_v4_msgs_srvs__msg",  // message namespace
  "Motor",  // message name
  9,  // number of fields
  sizeof(amr_v4_msgs_srvs__msg__Motor),
  Motor__rosidl_typesupport_introspection_c__Motor_message_member_array,  // message members
  Motor__rosidl_typesupport_introspection_c__Motor_init_function,  // function to initialize message memory (memory has to be allocated)
  Motor__rosidl_typesupport_introspection_c__Motor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Motor__rosidl_typesupport_introspection_c__Motor_message_type_support_handle = {
  0,
  &Motor__rosidl_typesupport_introspection_c__Motor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_v4_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, msg, Motor)() {
  if (!Motor__rosidl_typesupport_introspection_c__Motor_message_type_support_handle.typesupport_identifier) {
    Motor__rosidl_typesupport_introspection_c__Motor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Motor__rosidl_typesupport_introspection_c__Motor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
