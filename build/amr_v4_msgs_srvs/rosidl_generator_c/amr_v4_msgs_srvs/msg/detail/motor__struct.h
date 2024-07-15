// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_v4_msgs_srvs:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__STRUCT_H_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'output_current_right'
// Member 'error_right'
// Member 'output_current_left'
// Member 'error_left'
// Member 'output_current_pin'
// Member 'error_pin'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Motor in the package amr_v4_msgs_srvs.
typedef struct amr_v4_msgs_srvs__msg__Motor
{
  rosidl_runtime_c__String output_current_right;
  rosidl_runtime_c__String error_right;
  rosidl_runtime_c__String output_current_left;
  rosidl_runtime_c__String error_left;
  rosidl_runtime_c__String output_current_pin;
  rosidl_runtime_c__String error_pin;
  double target_pos_high;
  double target_pos_low;
  double current_pos;
} amr_v4_msgs_srvs__msg__Motor;

// Struct for a sequence of amr_v4_msgs_srvs__msg__Motor.
typedef struct amr_v4_msgs_srvs__msg__Motor__Sequence
{
  amr_v4_msgs_srvs__msg__Motor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_v4_msgs_srvs__msg__Motor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__STRUCT_H_
