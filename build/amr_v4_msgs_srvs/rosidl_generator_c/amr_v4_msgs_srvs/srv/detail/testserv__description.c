// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from amr_v4_msgs_srvs:srv/Testserv.idl
// generated code does not contain a copyright notice

#include "amr_v4_msgs_srvs/srv/detail/testserv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
const rosidl_type_hash_t *
amr_v4_msgs_srvs__srv__Testserv__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x42, 0xc4, 0x26, 0xf1, 0xe2, 0xa7, 0x50, 0x8b,
      0xed, 0xed, 0x5d, 0x34, 0xdb, 0x1b, 0x24, 0xdc,
      0xd6, 0x06, 0x8e, 0xc1, 0x46, 0xea, 0xb6, 0x92,
      0xc7, 0xd6, 0x3f, 0x52, 0x50, 0xa4, 0x04, 0x76,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
const rosidl_type_hash_t *
amr_v4_msgs_srvs__srv__Testserv_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0xfd, 0x1d, 0xb6, 0x28, 0xd7, 0xd1, 0x66,
      0x96, 0xf4, 0xb0, 0x14, 0x5c, 0xde, 0x5a, 0x16,
      0xaa, 0x19, 0x44, 0x2b, 0x7e, 0x88, 0x08, 0x33,
      0x5b, 0x7a, 0xdb, 0x0e, 0x68, 0x28, 0xa3, 0xe4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
const rosidl_type_hash_t *
amr_v4_msgs_srvs__srv__Testserv_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd8, 0x52, 0xb2, 0x78, 0xa9, 0x96, 0xae, 0x43,
      0x33, 0x7f, 0xc8, 0xdd, 0xbc, 0x76, 0xef, 0x84,
      0x6b, 0x92, 0x94, 0x98, 0x6d, 0xd6, 0xde, 0x6d,
      0xe4, 0x2f, 0x96, 0x1a, 0x7e, 0xf2, 0x9a, 0x9a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
const rosidl_type_hash_t *
amr_v4_msgs_srvs__srv__Testserv_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7e, 0x60, 0x78, 0x21, 0x76, 0x3a, 0xbd, 0x3a,
      0xd3, 0x9f, 0xf0, 0xd0, 0xab, 0xc0, 0xf0, 0xed,
      0x67, 0xa2, 0x29, 0xa8, 0xee, 0xbf, 0x93, 0xc1,
      0x2b, 0x36, 0xef, 0x6a, 0x79, 0xda, 0x82, 0x70,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char amr_v4_msgs_srvs__srv__Testserv__TYPE_NAME[] = "amr_v4_msgs_srvs/srv/Testserv";
static char amr_v4_msgs_srvs__srv__Testserv_Event__TYPE_NAME[] = "amr_v4_msgs_srvs/srv/Testserv_Event";
static char amr_v4_msgs_srvs__srv__Testserv_Request__TYPE_NAME[] = "amr_v4_msgs_srvs/srv/Testserv_Request";
static char amr_v4_msgs_srvs__srv__Testserv_Response__TYPE_NAME[] = "amr_v4_msgs_srvs/srv/Testserv_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char amr_v4_msgs_srvs__srv__Testserv__FIELD_NAME__request_message[] = "request_message";
static char amr_v4_msgs_srvs__srv__Testserv__FIELD_NAME__response_message[] = "response_message";
static char amr_v4_msgs_srvs__srv__Testserv__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field amr_v4_msgs_srvs__srv__Testserv__FIELDS[] = {
  {
    {amr_v4_msgs_srvs__srv__Testserv__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {amr_v4_msgs_srvs__srv__Testserv_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__srv__Testserv__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {amr_v4_msgs_srvs__srv__Testserv_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__srv__Testserv__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {amr_v4_msgs_srvs__srv__Testserv_Event__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription amr_v4_msgs_srvs__srv__Testserv__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {amr_v4_msgs_srvs__srv__Testserv_Event__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__srv__Testserv_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__srv__Testserv_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amr_v4_msgs_srvs__srv__Testserv__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_v4_msgs_srvs__srv__Testserv__TYPE_NAME, 29, 29},
      {amr_v4_msgs_srvs__srv__Testserv__FIELDS, 3, 3},
    },
    {amr_v4_msgs_srvs__srv__Testserv__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = amr_v4_msgs_srvs__srv__Testserv_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = amr_v4_msgs_srvs__srv__Testserv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = amr_v4_msgs_srvs__srv__Testserv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char amr_v4_msgs_srvs__srv__Testserv_Request__FIELD_NAME__pin_mode[] = "pin_mode";

static rosidl_runtime_c__type_description__Field amr_v4_msgs_srvs__srv__Testserv_Request__FIELDS[] = {
  {
    {amr_v4_msgs_srvs__srv__Testserv_Request__FIELD_NAME__pin_mode, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amr_v4_msgs_srvs__srv__Testserv_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_v4_msgs_srvs__srv__Testserv_Request__TYPE_NAME, 37, 37},
      {amr_v4_msgs_srvs__srv__Testserv_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char amr_v4_msgs_srvs__srv__Testserv_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field amr_v4_msgs_srvs__srv__Testserv_Response__FIELDS[] = {
  {
    {amr_v4_msgs_srvs__srv__Testserv_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amr_v4_msgs_srvs__srv__Testserv_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_v4_msgs_srvs__srv__Testserv_Response__TYPE_NAME, 38, 38},
      {amr_v4_msgs_srvs__srv__Testserv_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char amr_v4_msgs_srvs__srv__Testserv_Event__FIELD_NAME__info[] = "info";
static char amr_v4_msgs_srvs__srv__Testserv_Event__FIELD_NAME__request[] = "request";
static char amr_v4_msgs_srvs__srv__Testserv_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field amr_v4_msgs_srvs__srv__Testserv_Event__FIELDS[] = {
  {
    {amr_v4_msgs_srvs__srv__Testserv_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__srv__Testserv_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {amr_v4_msgs_srvs__srv__Testserv_Request__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__srv__Testserv_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {amr_v4_msgs_srvs__srv__Testserv_Response__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription amr_v4_msgs_srvs__srv__Testserv_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {amr_v4_msgs_srvs__srv__Testserv_Request__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {amr_v4_msgs_srvs__srv__Testserv_Response__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
amr_v4_msgs_srvs__srv__Testserv_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {amr_v4_msgs_srvs__srv__Testserv_Event__TYPE_NAME, 35, 35},
      {amr_v4_msgs_srvs__srv__Testserv_Event__FIELDS, 3, 3},
    },
    {amr_v4_msgs_srvs__srv__Testserv_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = amr_v4_msgs_srvs__srv__Testserv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = amr_v4_msgs_srvs__srv__Testserv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool pin_mode\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
amr_v4_msgs_srvs__srv__Testserv__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_v4_msgs_srvs__srv__Testserv__TYPE_NAME, 29, 29},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 17, 17},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
amr_v4_msgs_srvs__srv__Testserv_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_v4_msgs_srvs__srv__Testserv_Request__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
amr_v4_msgs_srvs__srv__Testserv_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_v4_msgs_srvs__srv__Testserv_Response__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
amr_v4_msgs_srvs__srv__Testserv_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {amr_v4_msgs_srvs__srv__Testserv_Event__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_v4_msgs_srvs__srv__Testserv__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_v4_msgs_srvs__srv__Testserv__get_individual_type_description_source(NULL),
    sources[1] = *amr_v4_msgs_srvs__srv__Testserv_Event__get_individual_type_description_source(NULL);
    sources[2] = *amr_v4_msgs_srvs__srv__Testserv_Request__get_individual_type_description_source(NULL);
    sources[3] = *amr_v4_msgs_srvs__srv__Testserv_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_v4_msgs_srvs__srv__Testserv_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_v4_msgs_srvs__srv__Testserv_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_v4_msgs_srvs__srv__Testserv_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_v4_msgs_srvs__srv__Testserv_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
amr_v4_msgs_srvs__srv__Testserv_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *amr_v4_msgs_srvs__srv__Testserv_Event__get_individual_type_description_source(NULL),
    sources[1] = *amr_v4_msgs_srvs__srv__Testserv_Request__get_individual_type_description_source(NULL);
    sources[2] = *amr_v4_msgs_srvs__srv__Testserv_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
