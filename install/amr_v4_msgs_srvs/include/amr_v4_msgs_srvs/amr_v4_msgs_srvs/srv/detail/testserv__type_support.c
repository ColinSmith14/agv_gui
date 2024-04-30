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
  NULL  // response message
  // amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_Response_message_type_support_handle
};

static rosidl_service_type_support_t amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_service_type_support_handle = {
  0,
  &amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, amr_v4_msgs_srvs, srv, Testserv_Response)();

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

  return &amr_v4_msgs_srvs__srv__detail__testserv__rosidl_typesupport_introspection_c__Testserv_service_type_support_handle;
}
