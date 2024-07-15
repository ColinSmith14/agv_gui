// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amr_v4_msgs_srvs:msg/Motor.idl
// generated code does not contain a copyright notice

#include "amr_v4_msgs_srvs/msg/detail/motor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
const rosidl_type_hash_t *
amr_v4_msgs_srvs__msg__Motor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf0, 0xbb, 0xac, 0xf5, 0x3e, 0x42, 0x37, 0x54,
      0xfa, 0x11, 0x5d, 0xe7, 0x19, 0xe7, 0x6e, 0xe4,
      0xd9, 0x8c, 0x9b, 0x65, 0xfa, 0xd4, 0xc1, 0xba,
      0x8b, 0xa5, 0xa1, 0xac, 0xc1, 0xec, 0x8f, 0x76,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char amr_v4_msgs_srvs__msg__Motor__TYPE_NAME[] = "amr_v4_msgs_srvs/msg/Motor";

// Define type names, field names, and default values
static char amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__output_current_right[] = "output_current_right";
static char amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__error_right[] = "error_right";
static char amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__output_current_left[] = "output_current_left";
static char amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__error_left[] = "error_left";
static char amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__output_current_pin[] = "output_current_pin";
static char amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__error_pin[] = "error_pin";
static char amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__target_pos_high[] = "target_pos_high";
static char amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__target_pos_low[] = "target_pos_low";
static char amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__current_pos[] = "current_pos";

static rosidl_runtime_c__type_description__Field amr_v4_msgs_srvs__msg__Motor__FIELDS[] = {
  {
    {amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__output_current_right, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__error_right, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__output_current_left, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__error_left, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__output_current_pin, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__error_pin, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__target_pos_high, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__target_pos_low, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__msg__Motor__FIELD_NAME__current_pos, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amr_v4_msgs_srvs__msg__Motor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_v4_msgs_srvs__msg__Motor__TYPE_NAME, 26, 26},
      {amr_v4_msgs_srvs__msg__Motor__FIELDS, 9, 9},
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
  "string output_current_right\n"
  "string error_right\n"
  "\n"
  "string output_current_left\n"
  "string error_left\n"
  "\n"
  "string output_current_pin\n"
  "string error_pin\n"
  "float64 target_pos_high\n"
  "float64 target_pos_low\n"
  "float64 current_pos";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amr_v4_msgs_srvs__msg__Motor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_v4_msgs_srvs__msg__Motor__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 204, 204},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_v4_msgs_srvs__msg__Motor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_v4_msgs_srvs__msg__Motor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
