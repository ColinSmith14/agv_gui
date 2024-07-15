// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from amr_v4_msgs_srvs:msg/Pin.idl
// generated code does not contain a copyright notice
#include "amr_v4_msgs_srvs/msg/detail/pin__rosidl_typesupport_fastrtps_cpp.hpp"
#include "amr_v4_msgs_srvs/msg/detail/pin__functions.h"
#include "amr_v4_msgs_srvs/msg/detail/pin__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace amr_v4_msgs_srvs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amr_v4_msgs_srvs
cdr_serialize(
  const amr_v4_msgs_srvs::msg::Pin & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: pin_command
  cdr << ros_message.pin_command;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amr_v4_msgs_srvs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  amr_v4_msgs_srvs::msg::Pin & ros_message)
{
  // Member: pin_command
  cdr >> ros_message.pin_command;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amr_v4_msgs_srvs
get_serialized_size(
  const amr_v4_msgs_srvs::msg::Pin & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: pin_command
  {
    size_t item_size = sizeof(ros_message.pin_command);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_amr_v4_msgs_srvs
max_serialized_size_Pin(
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


  // Member: pin_command
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
    using DataType = amr_v4_msgs_srvs::msg::Pin;
    is_plain =
      (
      offsetof(DataType, pin_command) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Pin__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const amr_v4_msgs_srvs::msg::Pin *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Pin__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<amr_v4_msgs_srvs::msg::Pin *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Pin__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const amr_v4_msgs_srvs::msg::Pin *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Pin__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Pin(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Pin__callbacks = {
  "amr_v4_msgs_srvs::msg",
  "Pin",
  _Pin__cdr_serialize,
  _Pin__cdr_deserialize,
  _Pin__get_serialized_size,
  _Pin__max_serialized_size
};

static rosidl_message_type_support_t _Pin__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Pin__callbacks,
  get_message_typesupport_handle_function,
  &amr_v4_msgs_srvs__msg__Pin__get_type_hash,
  &amr_v4_msgs_srvs__msg__Pin__get_type_description,
  &amr_v4_msgs_srvs__msg__Pin__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace amr_v4_msgs_srvs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_amr_v4_msgs_srvs
const rosidl_message_type_support_t *
get_message_type_support_handle<amr_v4_msgs_srvs::msg::Pin>()
{
  return &amr_v4_msgs_srvs::msg::typesupport_fastrtps_cpp::_Pin__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, amr_v4_msgs_srvs, msg, Pin)() {
  return &amr_v4_msgs_srvs::msg::typesupport_fastrtps_cpp::_Pin__handle;
}

#ifdef __cplusplus
}
#endif
