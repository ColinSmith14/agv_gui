// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from amr_v4_msgs_srvs:msg/Motor.idl
// generated code does not contain a copyright notice
#include "amr_v4_msgs_srvs/msg/detail/motor__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "amr_v4_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amr_v4_msgs_srvs/msg/detail/motor__struct.h"
#include "amr_v4_msgs_srvs/msg/detail/motor__functions.h"
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

#include "rosidl_runtime_c/string.h"  // error_left, error_pin, error_right, output_current_left, output_current_pin, output_current_right
#include "rosidl_runtime_c/string_functions.h"  // error_left, error_pin, error_right, output_current_left, output_current_pin, output_current_right

// forward declare type support functions


using _Motor__ros_msg_type = amr_v4_msgs_srvs__msg__Motor;

static bool _Motor__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Motor__ros_msg_type * ros_message = static_cast<const _Motor__ros_msg_type *>(untyped_ros_message);
  // Field name: output_current_right
  {
    const rosidl_runtime_c__String * str = &ros_message->output_current_right;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: error_right
  {
    const rosidl_runtime_c__String * str = &ros_message->error_right;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: output_current_left
  {
    const rosidl_runtime_c__String * str = &ros_message->output_current_left;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: error_left
  {
    const rosidl_runtime_c__String * str = &ros_message->error_left;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: output_current_pin
  {
    const rosidl_runtime_c__String * str = &ros_message->output_current_pin;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: error_pin
  {
    const rosidl_runtime_c__String * str = &ros_message->error_pin;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: target_pos_high
  {
    cdr << ros_message->target_pos_high;
  }

  // Field name: target_pos_low
  {
    cdr << ros_message->target_pos_low;
  }

  // Field name: current_pos
  {
    cdr << ros_message->current_pos;
  }

  return true;
}

static bool _Motor__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Motor__ros_msg_type * ros_message = static_cast<_Motor__ros_msg_type *>(untyped_ros_message);
  // Field name: output_current_right
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->output_current_right.data) {
      rosidl_runtime_c__String__init(&ros_message->output_current_right);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->output_current_right,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'output_current_right'\n");
      return false;
    }
  }

  // Field name: error_right
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_right.data) {
      rosidl_runtime_c__String__init(&ros_message->error_right);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_right,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_right'\n");
      return false;
    }
  }

  // Field name: output_current_left
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->output_current_left.data) {
      rosidl_runtime_c__String__init(&ros_message->output_current_left);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->output_current_left,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'output_current_left'\n");
      return false;
    }
  }

  // Field name: error_left
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_left.data) {
      rosidl_runtime_c__String__init(&ros_message->error_left);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_left,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_left'\n");
      return false;
    }
  }

  // Field name: output_current_pin
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->output_current_pin.data) {
      rosidl_runtime_c__String__init(&ros_message->output_current_pin);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->output_current_pin,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'output_current_pin'\n");
      return false;
    }
  }

  // Field name: error_pin
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_pin.data) {
      rosidl_runtime_c__String__init(&ros_message->error_pin);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_pin,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_pin'\n");
      return false;
    }
  }

  // Field name: target_pos_high
  {
    cdr >> ros_message->target_pos_high;
  }

  // Field name: target_pos_low
  {
    cdr >> ros_message->target_pos_low;
  }

  // Field name: current_pos
  {
    cdr >> ros_message->current_pos;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_v4_msgs_srvs
size_t get_serialized_size_amr_v4_msgs_srvs__msg__Motor(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Motor__ros_msg_type * ros_message = static_cast<const _Motor__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name output_current_right
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->output_current_right.size + 1);
  // field.name error_right
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_right.size + 1);
  // field.name output_current_left
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->output_current_left.size + 1);
  // field.name error_left
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_left.size + 1);
  // field.name output_current_pin
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->output_current_pin.size + 1);
  // field.name error_pin
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_pin.size + 1);
  // field.name target_pos_high
  {
    size_t item_size = sizeof(ros_message->target_pos_high);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_pos_low
  {
    size_t item_size = sizeof(ros_message->target_pos_low);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_pos
  {
    size_t item_size = sizeof(ros_message->current_pos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Motor__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amr_v4_msgs_srvs__msg__Motor(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_v4_msgs_srvs
size_t max_serialized_size_amr_v4_msgs_srvs__msg__Motor(
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

  // member: output_current_right
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: error_right
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: output_current_left
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: error_left
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: output_current_pin
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: error_pin
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: target_pos_high
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: target_pos_low
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: current_pos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = amr_v4_msgs_srvs__msg__Motor;
    is_plain =
      (
      offsetof(DataType, current_pos) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Motor__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_amr_v4_msgs_srvs__msg__Motor(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Motor = {
  "amr_v4_msgs_srvs::msg",
  "Motor",
  _Motor__cdr_serialize,
  _Motor__cdr_deserialize,
  _Motor__get_serialized_size,
  _Motor__max_serialized_size
};

static rosidl_message_type_support_t _Motor__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Motor,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_v4_msgs_srvs, msg, Motor)() {
  return &_Motor__type_support;
}

#if defined(__cplusplus)
}
#endif
