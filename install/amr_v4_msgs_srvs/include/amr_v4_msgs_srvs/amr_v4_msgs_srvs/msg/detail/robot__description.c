// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amr_v4_msgs_srvs:msg/Robot.idl
// generated code does not contain a copyright notice

#include "amr_v4_msgs_srvs/msg/detail/robot__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
const rosidl_type_hash_t *
amr_v4_msgs_srvs__msg__Robot__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0xec, 0x81, 0xad, 0xd7, 0x9c, 0x68, 0x57,
      0x98, 0xdb, 0xaa, 0xd6, 0x4c, 0x77, 0x0d, 0x06,
      0xca, 0xb8, 0x49, 0xf2, 0x33, 0x10, 0xbe, 0x65,
      0x43, 0x32, 0x59, 0xc2, 0x3b, 0xca, 0xa4, 0x7c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char amr_v4_msgs_srvs__msg__Robot__TYPE_NAME[] = "amr_v4_msgs_srvs/msg/Robot";

// Define type names, field names, and default values
static char amr_v4_msgs_srvs__msg__Robot__FIELD_NAME__robot_localization_status[] = "robot_localization_status";
static char amr_v4_msgs_srvs__msg__Robot__FIELD_NAME__localized[] = "localized";
static char amr_v4_msgs_srvs__msg__Robot__FIELD_NAME__robot_active_status[] = "robot_active_status";

static rosidl_runtime_c__type_description__Field amr_v4_msgs_srvs__msg__Robot__FIELDS[] = {
  {
    {amr_v4_msgs_srvs__msg__Robot__FIELD_NAME__robot_localization_status, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__msg__Robot__FIELD_NAME__localized, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__msg__Robot__FIELD_NAME__robot_active_status, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amr_v4_msgs_srvs__msg__Robot__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_v4_msgs_srvs__msg__Robot__TYPE_NAME, 26, 26},
      {amr_v4_msgs_srvs__msg__Robot__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "string robot_localization_status\n"
  "bool localized\n"
  "string robot_active_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amr_v4_msgs_srvs__msg__Robot__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_v4_msgs_srvs__msg__Robot__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 75, 75},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_v4_msgs_srvs__msg__Robot__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_v4_msgs_srvs__msg__Robot__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
