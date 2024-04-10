// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from amr_v4_msgs_srvs:srv/Testserv.idl
// generated code does not contain a copyright notice
#include "amr_v4_msgs_srvs/srv/detail/testserv__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "amr_v4_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amr_v4_msgs_srvs/srv/detail/testserv__struct.h"
#include "amr_v4_msgs_srvs/srv/detail/testserv__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Testserv_Request__ros_msg_type = amr_v4_msgs_srvs__srv__Testserv_Request;

static bool _Testserv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Testserv_Request__ros_msg_type * ros_message = static_cast<const _Testserv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pin_mode
  {
    cdr << (ros_message->pin_mode ? true : false);
  }

  return true;
}

static bool _Testserv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Testserv_Request__ros_msg_type * ros_message = static_cast<_Testserv_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pin_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pin_mode = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_v4_msgs_srvs
size_t get_serialized_size_amr_v4_msgs_srvs__srv__Testserv_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Testserv_Request__ros_msg_type * ros_message = static_cast<const _Testserv_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pin_mode
  {
    size_t item_size = sizeof(ros_message->pin_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Testserv_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amr_v4_msgs_srvs__srv__Testserv_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_v4_msgs_srvs
size_t max_serialized_size_amr_v4_msgs_srvs__srv__Testserv_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: pin_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_v4_msgs_srvs__srv__Testserv_Request;
    is_plain =
      (
      offsetof(DataType, pin_mode) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Testserv_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amr_v4_msgs_srvs__srv__Testserv_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Testserv_Request = {
  "amr_v4_msgs_srvs::srv",
  "Testserv_Request",
  _Testserv_Request__cdr_serialize,
  _Testserv_Request__cdr_deserialize,
  _Testserv_Request__get_serialized_size,
  _Testserv_Request__max_serialized_size
};

static rosidl_message_type_support_t _Testserv_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Testserv_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_v4_msgs_srvs, srv, Testserv_Request)() {
  return &_Testserv_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "amr_v4_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "amr_v4_msgs_srvs/srv/detail/testserv__struct.h"
// already included above
// #include "amr_v4_msgs_srvs/srv/detail/testserv__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Testserv_Response__ros_msg_type = amr_v4_msgs_srvs__srv__Testserv_Response;

static bool _Testserv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Testserv_Response__ros_msg_type * ros_message = static_cast<const _Testserv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _Testserv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Testserv_Response__ros_msg_type * ros_message = static_cast<_Testserv_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_v4_msgs_srvs
size_t get_serialized_size_amr_v4_msgs_srvs__srv__Testserv_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Testserv_Response__ros_msg_type * ros_message = static_cast<const _Testserv_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Testserv_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amr_v4_msgs_srvs__srv__Testserv_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_v4_msgs_srvs
size_t max_serialized_size_amr_v4_msgs_srvs__srv__Testserv_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_v4_msgs_srvs__srv__Testserv_Response;
    is_plain =
      (
      offsetof(DataType, structure_needs_at_least_one_member) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Testserv_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amr_v4_msgs_srvs__srv__Testserv_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Testserv_Response = {
  "amr_v4_msgs_srvs::srv",
  "Testserv_Response",
  _Testserv_Response__cdr_serialize,
  _Testserv_Response__cdr_deserialize,
  _Testserv_Response__get_serialized_size,
  _Testserv_Response__max_serialized_size
};

static rosidl_message_type_support_t _Testserv_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Testserv_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_v4_msgs_srvs, srv, Testserv_Response)() {
  return &_Testserv_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "amr_v4_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amr_v4_msgs_srvs/srv/testserv.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Testserv__callbacks = {
  "amr_v4_msgs_srvs::srv",
  "Testserv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_v4_msgs_srvs, srv, Testserv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_v4_msgs_srvs, srv, Testserv_Response)(),
};

static rosidl_service_type_support_t Testserv__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Testserv__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_v4_msgs_srvs, srv, Testserv)() {
  return &Testserv__handle;
}

#if defined(__cplusplus)
}
#endif
