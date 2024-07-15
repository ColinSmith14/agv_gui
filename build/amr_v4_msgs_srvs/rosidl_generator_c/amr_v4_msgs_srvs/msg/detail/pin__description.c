// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amr_v4_msgs_srvs:msg/Pin.idl
// generated code does not contain a copyright notice

#include "amr_v4_msgs_srvs/msg/detail/pin__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
const rosidl_type_hash_t *
amr_v4_msgs_srvs__msg__Pin__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe0, 0xbe, 0xd4, 0x19, 0x30, 0x3f, 0x1a, 0xa7,
      0xb0, 0x6d, 0x93, 0x0a, 0x05, 0x72, 0xd4, 0x50,
      0x54, 0x49, 0x4d, 0xc0, 0x5f, 0x61, 0x85, 0x85,
      0x6d, 0x8c, 0xd4, 0x97, 0x17, 0x38, 0x66, 0x86,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char amr_v4_msgs_srvs__msg__Pin__TYPE_NAME[] = "amr_v4_msgs_srvs/msg/Pin";

// Define type names, field names, and default values
static char amr_v4_msgs_srvs__msg__Pin__FIELD_NAME__pin_command[] = "pin_command";

static rosidl_runtime_c__type_description__Field amr_v4_msgs_srvs__msg__Pin__FIELDS[] = {
  {
    {amr_v4_msgs_srvs__msg__Pin__FIELD_NAME__pin_command, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amr_v4_msgs_srvs__msg__Pin__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_v4_msgs_srvs__msg__Pin__TYPE_NAME, 24, 24},
      {amr_v4_msgs_srvs__msg__Pin__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 pin_command";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amr_v4_msgs_srvs__msg__Pin__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_v4_msgs_srvs__msg__Pin__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 16, 16},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_v4_msgs_srvs__msg__Pin__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_v4_msgs_srvs__msg__Pin__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
