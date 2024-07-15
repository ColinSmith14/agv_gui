// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from amr_v4_msgs_srvs:srv/Testserv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "amr_v4_msgs_srvs/srv/detail/testserv__rosidl_typesupport_introspection_c.h"
#include "amr_v4_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "amr_v4_msgs_srvs/srv/detail/testserv__functions.h"
#include "amr_v4_msgs_srvs/srv/detail/testserv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void amr_v4_msgs_srvs__srv__Testserv_Request__rosidl_typesupport_introspection_c__Testserv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_v4_msgs_srvs__srv__Testserv_Request__init(message_memory);
}

void amr_v4_msgs_srvs__srv__Testserv_Request__rosidl_typesupport_introspection_c__Testserv_Request_fini_function(void * message_memory)
{
  amr_v4_msgs_srvs__srv__Testserv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember amr_v4_msgs_srvs__srv__Testserv_Request__rosidl_typesupport_introspection_c__Testserv_Request_message_member_array[1] = {
  {
    "pin_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs__srv__Testserv_Request, pin_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amr_v4_msgs_srvs__srv__Testserv_Request__rosidl_typesupport_introspection_c__Testserv_Request_message_members = {
  "amr_v4_msgs_srvs__srv",  // message namespace
  "Testserv_Request",  // message name
  1,  // number of fields
  sizeof(amr_v4_msgs_srvs__srv__Testserv_Request),
  amr_v4_msgs_srvs__srv__Testserv_Request__rosidl_typesupport_introspection_c__Testserv_Request_message_member_array,  // message members
  amr_v4_msgs_srvs__srv__Testserv_Request__rosidl_typesupport_introspection_c__Testserv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  amr_v4_msgs_srvs__srv__Testserv_Request__rosidl_typesupport_introspection_c__Testserv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amr_v4_msgs_srvs__srv__Testserv_Request__rosidl_typesupport_introspection_c__Testserv_Request_message_type_support_handle = {
  0,
  &amr_v4_msgs_srvs__srv__Testserv_Request__rosidl_typesupport_introspection_c__Testserv_Request_message_members,
  get_message_typesupport_handle_function,
  &amr_v4_msgs_srvs__srv__Testserv_Request__get_type_hash,
  &amr_v4_msgs_srvs__srv__Testserv_Request__get_type_description,
  &amr_v4_msgs_srvs__srv__Testserv_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_v4_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv_Request)() {
  if (!amr_v4_msgs_srvs__srv__Testserv_Request__rosidl_typesupport_introspection_c__Testserv_Request_message_type_support_handle.typesupport_identifier) {
    amr_v4_msgs_srvs__srv__Testserv_Request__rosidl_typesupport_introspection_c__Testserv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amr_v4_msgs_srvs__srv__Testserv_Request__rosidl_typesupport_introspection_c__Testserv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "amr_v4_msgs_srvs/srv/detail/testserv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "amr_v4_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "amr_v4_msgs_srvs/srv/detail/testserv__functions.h"
// already included above
// #include "amr_v4_msgs_srvs/srv/detail/testserv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void amr_v4_msgs_srvs__srv__Testserv_Response__rosidl_typesupport_introspection_c__Testserv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_v4_msgs_srvs__srv__Testserv_Response__init(message_memory);
}

void amr_v4_msgs_srvs__srv__Testserv_Response__rosidl_typesupport_introspection_c__Testserv_Response_fini_function(void * message_memory)
{
  amr_v4_msgs_srvs__srv__Testserv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember amr_v4_msgs_srvs__srv__Testserv_Response__rosidl_typesupport_introspection_c__Testserv_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs__srv__Testserv_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amr_v4_msgs_srvs__srv__Testserv_Response__rosidl_typesupport_introspection_c__Testserv_Response_message_members = {
  "amr_v4_msgs_srvs__srv",  // message namespace
  "Testserv_Response",  // message name
  1,  // number of fields
  sizeof(amr_v4_msgs_srvs__srv__Testserv_Response),
  amr_v4_msgs_srvs__srv__Testserv_Response__rosidl_typesupport_introspection_c__Testserv_Response_message_member_array,  // message members
  amr_v4_msgs_srvs__srv__Testserv_Response__rosidl_typesupport_introspection_c__Testserv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  amr_v4_msgs_srvs__srv__Testserv_Response__rosidl_typesupport_introspection_c__Testserv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amr_v4_msgs_srvs__srv__Testserv_Response__rosidl_typesupport_introspection_c__Testserv_Response_message_type_support_handle = {
  0,
  &amr_v4_msgs_srvs__srv__Testserv_Response__rosidl_typesupport_introspection_c__Testserv_Response_message_members,
  get_message_typesupport_handle_function,
  &amr_v4_msgs_srvs__srv__Testserv_Response__get_type_hash,
  &amr_v4_msgs_srvs__srv__Testserv_Response__get_type_description,
  &amr_v4_msgs_srvs__srv__Testserv_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_v4_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv_Response)() {
  if (!amr_v4_msgs_srvs__srv__Testserv_Response__rosidl_typesupport_introspection_c__Testserv_Response_message_type_support_handle.typesupport_identifier) {
    amr_v4_msgs_srvs__srv__Testserv_Response__rosidl_typesupport_introspection_c__Testserv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amr_v4_msgs_srvs__srv__Testserv_Response__rosidl_typesupport_introspection_c__Testserv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "amr_v4_msgs_srvs/srv/detail/testserv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "amr_v4_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "amr_v4_msgs_srvs/srv/detail/testserv__functions.h"
// already included above
// #include "amr_v4_msgs_srvs/srv/detail/testserv__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "amr_v4_msgs_srvs/srv/testserv.h"
// Member `request`
// Member `response`
// already included above
// #include "amr_v4_msgs_srvs/srv/detail/testserv__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  amr_v4_msgs_srvs__srv__Testserv_Event__init(message_memory);
}

void amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_fini_function(void * message_memory)
{
  amr_v4_msgs_srvs__srv__Testserv_Event__fini(message_memory);
}

size_t amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__size_function__Testserv_Event__request(
  const void * untyped_member)
{
  const amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * member =
    (const amr_v4_msgs_srvs__srv__Testserv_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__get_const_function__Testserv_Event__request(
  const void * untyped_member, size_t index)
{
  const amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * member =
    (const amr_v4_msgs_srvs__srv__Testserv_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__get_function__Testserv_Event__request(
  void * untyped_member, size_t index)
{
  amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * member =
    (amr_v4_msgs_srvs__srv__Testserv_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__fetch_function__Testserv_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const amr_v4_msgs_srvs__srv__Testserv_Request * item =
    ((const amr_v4_msgs_srvs__srv__Testserv_Request *)
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__get_const_function__Testserv_Event__request(untyped_member, index));
  amr_v4_msgs_srvs__srv__Testserv_Request * value =
    (amr_v4_msgs_srvs__srv__Testserv_Request *)(untyped_value);
  *value = *item;
}

void amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__assign_function__Testserv_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  amr_v4_msgs_srvs__srv__Testserv_Request * item =
    ((amr_v4_msgs_srvs__srv__Testserv_Request *)
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__get_function__Testserv_Event__request(untyped_member, index));
  const amr_v4_msgs_srvs__srv__Testserv_Request * value =
    (const amr_v4_msgs_srvs__srv__Testserv_Request *)(untyped_value);
  *item = *value;
}

bool amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__resize_function__Testserv_Event__request(
  void * untyped_member, size_t size)
{
  amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * member =
    (amr_v4_msgs_srvs__srv__Testserv_Request__Sequence *)(untyped_member);
  amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__fini(member);
  return amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__init(member, size);
}

size_t amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__size_function__Testserv_Event__response(
  const void * untyped_member)
{
  const amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * member =
    (const amr_v4_msgs_srvs__srv__Testserv_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__get_const_function__Testserv_Event__response(
  const void * untyped_member, size_t index)
{
  const amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * member =
    (const amr_v4_msgs_srvs__srv__Testserv_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__get_function__Testserv_Event__response(
  void * untyped_member, size_t index)
{
  amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * member =
    (amr_v4_msgs_srvs__srv__Testserv_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__fetch_function__Testserv_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const amr_v4_msgs_srvs__srv__Testserv_Response * item =
    ((const amr_v4_msgs_srvs__srv__Testserv_Response *)
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__get_const_function__Testserv_Event__response(untyped_member, index));
  amr_v4_msgs_srvs__srv__Testserv_Response * value =
    (amr_v4_msgs_srvs__srv__Testserv_Response *)(untyped_value);
  *value = *item;
}

void amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__assign_function__Testserv_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  amr_v4_msgs_srvs__srv__Testserv_Response * item =
    ((amr_v4_msgs_srvs__srv__Testserv_Response *)
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__get_function__Testserv_Event__response(untyped_member, index));
  const amr_v4_msgs_srvs__srv__Testserv_Response * value =
    (const amr_v4_msgs_srvs__srv__Testserv_Response *)(untyped_value);
  *item = *value;
}

bool amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__resize_function__Testserv_Event__response(
  void * untyped_member, size_t size)
{
  amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * member =
    (amr_v4_msgs_srvs__srv__Testserv_Response__Sequence *)(untyped_member);
  amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__fini(member);
  return amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(amr_v4_msgs_srvs__srv__Testserv_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(amr_v4_msgs_srvs__srv__Testserv_Event, request),  // bytes offset in struct
    NULL,  // default value
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__size_function__Testserv_Event__request,  // size() function pointer
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__get_const_function__Testserv_Event__request,  // get_const(index) function pointer
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__get_function__Testserv_Event__request,  // get(index) function pointer
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__fetch_function__Testserv_Event__request,  // fetch(index, &value) function pointer
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__assign_function__Testserv_Event__request,  // assign(index, value) function pointer
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__resize_function__Testserv_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(amr_v4_msgs_srvs__srv__Testserv_Event, response),  // bytes offset in struct
    NULL,  // default value
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__size_function__Testserv_Event__response,  // size() function pointer
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__get_const_function__Testserv_Event__response,  // get_const(index) function pointer
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__get_function__Testserv_Event__response,  // get(index) function pointer
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__fetch_function__Testserv_Event__response,  // fetch(index, &value) function pointer
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__assign_function__Testserv_Event__response,  // assign(index, value) function pointer
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__resize_function__Testserv_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_message_members = {
  "amr_v4_msgs_srvs__srv",  // message namespace
  "Testserv_Event",  // message name
  3,  // number of fields
  sizeof(amr_v4_msgs_srvs__srv__Testserv_Event),
  amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_message_member_array,  // message members
  amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_message_type_support_handle = {
  0,
  &amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_message_members,
  get_message_typesupport_handle_function,
  &amr_v4_msgs_srvs__srv__Testserv_Event__get_type_hash,
  &amr_v4_msgs_srvs__srv__Testserv_Event__get_type_description,
  &amr_v4_msgs_srvs__srv__Testserv_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_v4_msgs_srvs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv_Event)() {
  amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv_Request)();
  amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv_Response)();
  if (!amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_message_type_support_handle.typesupport_identifier) {
    amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "amr_v4_msgs_srvs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "amr_v4_msgs_srvs/srv/detail/testserv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_service_members = {
  "amr_v4_msgs_srvs__srv",  // service namespace
  "Testserv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_Request_message_type_support_handle,
  NULL,  // response message
  // amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_Response_message_type_support_handle
  NULL  // event_message
  // amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_Response_message_type_support_handle
};


static rosidl_service_type_support_t amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_service_type_support_handle = {
  0,
  &amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_service_members,
  get_service_typesupport_handle_function,
  &amr_v4_msgs_srvs__srv__Testserv_Request__rosidl_typesupport_introspection_c__Testserv_Request_message_type_support_handle,
  &amr_v4_msgs_srvs__srv__Testserv_Response__rosidl_typesupport_introspection_c__Testserv_Response_message_type_support_handle,
  &amr_v4_msgs_srvs__srv__Testserv_Event__rosidl_typesupport_introspection_c__Testserv_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    amr_v4_msgs_srvs,
    srv,
    Testserv
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    amr_v4_msgs_srvs,
    srv,
    Testserv
  ),
  &amr_v4_msgs_srvs__srv__Testserv__get_type_hash,
  &amr_v4_msgs_srvs__srv__Testserv__get_type_description,
  &amr_v4_msgs_srvs__srv__Testserv__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_amr_v4_msgs_srvs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv)() {
  if (!amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_service_type_support_handle.typesupport_identifier) {
    amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv_Event)()->data;
  }

  return &amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_service_type_support_handle;
}
