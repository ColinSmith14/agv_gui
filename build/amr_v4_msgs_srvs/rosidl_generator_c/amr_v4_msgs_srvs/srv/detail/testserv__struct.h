// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from amr_v4_msgs_srvs:srv/Testserv.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__STRUCT_H_
#define AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Testserv in the package amr_v4_msgs_srvs.
typedef struct amr_v4_msgs_srvs__srv__Testserv_Request
{
  bool pin_mode;
} amr_v4_msgs_srvs__srv__Testserv_Request;

// Struct for a sequence of amr_v4_msgs_srvs__srv__Testserv_Request.
typedef struct amr_v4_msgs_srvs__srv__Testserv_Request__Sequence
{
  amr_v4_msgs_srvs__srv__Testserv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_v4_msgs_srvs__srv__Testserv_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Testserv in the package amr_v4_msgs_srvs.
typedef struct amr_v4_msgs_srvs__srv__Testserv_Response
{
  uint8_t structure_needs_at_least_one_member;
} amr_v4_msgs_srvs__srv__Testserv_Response;

// Struct for a sequence of amr_v4_msgs_srvs__srv__Testserv_Response.
typedef struct amr_v4_msgs_srvs__srv__Testserv_Response__Sequence
{
  amr_v4_msgs_srvs__srv__Testserv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_v4_msgs_srvs__srv__Testserv_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  amr_v4_msgs_srvs__srv__Testserv_Event__request__MAX_SIZE = 1
};
// response
enum
{
  amr_v4_msgs_srvs__srv__Testserv_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Testserv in the package amr_v4_msgs_srvs.
typedef struct amr_v4_msgs_srvs__srv__Testserv_Event
{
  service_msgs__msg__ServiceEventInfo info;
  amr_v4_msgs_srvs__srv__Testserv_Request__Sequence request;
  amr_v4_msgs_srvs__srv__Testserv_Response__Sequence response;
} amr_v4_msgs_srvs__srv__Testserv_Event;

// Struct for a sequence of amr_v4_msgs_srvs__srv__Testserv_Event.
typedef struct amr_v4_msgs_srvs__srv__Testserv_Event__Sequence
{
  amr_v4_msgs_srvs__srv__Testserv_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} amr_v4_msgs_srvs__srv__Testserv_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AMR_V4_MSGS_SRVS__SRV__DETAIL__TESTSERV__STRUCT_H_
