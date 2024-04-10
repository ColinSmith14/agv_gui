// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_v4_msgs_srvs:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__STRUCT_H_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robot_localization_status'
// Member 'robot_active_status'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Robot in the package amr_v4_msgs_srvs.
typedef struct amr_v4_msgs_srvs__msg__Robot
{
  rosidl_runtime_c__String robot_localization_status;
  bool localized;
  rosidl_runtime_c__String robot_active_status;
} amr_v4_msgs_srvs__msg__Robot;

// Struct for a sequence of amr_v4_msgs_srvs__msg__Robot.
typedef struct amr_v4_msgs_srvs__msg__Robot__Sequence
{
  amr_v4_msgs_srvs__msg__Robot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_v4_msgs_srvs__msg__Robot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_V4_MSGS_SRVS__MSG__DETAIL__ROBOT__STRUCT_H_
