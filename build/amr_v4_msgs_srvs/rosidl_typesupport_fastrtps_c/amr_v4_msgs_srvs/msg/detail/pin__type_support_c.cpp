// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from amr_v4_msgs_srvs:msg/Pin.idl
// generated code does not contain a copyright notice
#include "amr_v4_msgs_srvs/msg/detail/pin__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "amr_v4_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amr_v4_msgs_srvs/msg/detail/pin__struct.h"
#include "amr_v4_msgs_srvs/msg/detail/pin__functions.h"
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


using _Pin__ros_msg_type = amr_v4_msgs_srvs__msg__Pin;

static bool _Pin__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Pin__ros_msg_type * ros_message = static_cast<const _Pin__ros_msg_type *>(untyped_ros_message);
  // Field name: pin_command
  {
    cdr << ros_message->pin_command;
  }

  return true;
}

static bool _Pin__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Pin__ros_msg_type * ros_message = static_cast<_Pin__ros_msg_type *>(untyped_ros_message);
  // Field name: pin_command
  {
    cdr >> ros_message->pin_command;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_v4_msgs_srvs
size_t get_serialized_size_amr_v4_msgs_srvs__msg__Pin(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Pin__ros_msg_type * ros_message = static_cast<const _Pin__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pin_command
  {
    size_t item_size = sizeof(ros_message->pin_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Pin__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amr_v4_msgs_srvs__msg__Pin(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_v4_msgs_srvs
size_t max_serialized_size_amr_v4_msgs_srvs__msg__Pin(
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

  // member: pin_command
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
    using DataType = amr_v4_msgs_srvs__msg__Pin;
    is_plain =
      (
      offsetof(DataType, pin_command) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Pin__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amr_v4_msgs_srvs__msg__Pin(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Pin = {
  "amr_v4_msgs_srvs::msg",
  "Pin",
  _Pin__cdr_serialize,
  _Pin__cdr_deserialize,
  _Pin__get_serialized_size,
  _Pin__max_serialized_size
};

static rosidl_message_type_support_t _Pin__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Pin,
  get_message_typesupport_handle_function,
  &amr_v4_msgs_srvs__msg__Pin__get_type_hash,
  &amr_v4_msgs_srvs__msg__Pin__get_type_description,
  &amr_v4_msgs_srvs__msg__Pin__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_v4_msgs_srvs, msg, Pin)() {
  return &_Pin__type_support;
}

#if defined(__cplusplus)
}
#endif
