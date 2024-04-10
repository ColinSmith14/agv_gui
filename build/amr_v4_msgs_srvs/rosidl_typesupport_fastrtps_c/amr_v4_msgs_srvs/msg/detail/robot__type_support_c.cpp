// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from amr_v4_msgs_srvs:msg/Robot.idl
// generated code does not contain a copyright notice
#include "amr_v4_msgs_srvs/msg/detail/robot__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "amr_v4_msgs_srvs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "amr_v4_msgs_srvs/msg/detail/robot__struct.h"
#include "amr_v4_msgs_srvs/msg/detail/robot__functions.h"
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

#include "rosidl_runtime_c/string.h"  // robot_active_status, robot_localization_status
#include "rosidl_runtime_c/string_functions.h"  // robot_active_status, robot_localization_status

// forward declare type support functions


using _Robot__ros_msg_type = amr_v4_msgs_srvs__msg__Robot;

static bool _Robot__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Robot__ros_msg_type * ros_message = static_cast<const _Robot__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_localization_status
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_localization_status;
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

  // Field name: localized
  {
    cdr << (ros_message->localized ? true : false);
  }

  // Field name: robot_active_status
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_active_status;
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

  return true;
}

static bool _Robot__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Robot__ros_msg_type * ros_message = static_cast<_Robot__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_localization_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->robot_localization_status.data) {
      rosidl_runtime_c__String__init(&ros_message->robot_localization_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->robot_localization_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'robot_localization_status'\n");
      return false;
    }
  }

  // Field name: localized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->localized = tmp ? true : false;
  }

  // Field name: robot_active_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->robot_active_status.data) {
      rosidl_runtime_c__String__init(&ros_message->robot_active_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->robot_active_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'robot_active_status'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_v4_msgs_srvs
size_t get_serialized_size_amr_v4_msgs_srvs__msg__Robot(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Robot__ros_msg_type * ros_message = static_cast<const _Robot__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_localization_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_localization_status.size + 1);
  // field.name localized
  {
    size_t item_size = sizeof(ros_message->localized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_active_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_active_status.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Robot__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_amr_v4_msgs_srvs__msg__Robot(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_amr_v4_msgs_srvs
size_t max_serialized_size_amr_v4_msgs_srvs__msg__Robot(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robot_localization_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: localized
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: robot_active_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _Robot__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_amr_v4_msgs_srvs__msg__Robot(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Robot = {
  "amr_v4_msgs_srvs::msg",
  "Robot",
  _Robot__cdr_serialize,
  _Robot__cdr_deserialize,
  _Robot__get_serialized_size,
  _Robot__max_serialized_size
};

static rosidl_message_type_support_t _Robot__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Robot,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, amr_v4_msgs_srvs, msg, Robot)() {
  return &_Robot__type_support;
}

#if defined(__cplusplus)
}
#endif
