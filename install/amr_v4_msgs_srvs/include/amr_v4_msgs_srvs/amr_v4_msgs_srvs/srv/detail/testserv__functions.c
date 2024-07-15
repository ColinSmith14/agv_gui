// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_v4_msgs_srvs:srv/Testserv.idl
// generated code does not contain a copyright notice
#include "amr_v4_msgs_srvs/srv/detail/testserv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
amr_v4_msgs_srvs__srv__Testserv_Request__init(amr_v4_msgs_srvs__srv__Testserv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pin_mode
  return true;
}

void
amr_v4_msgs_srvs__srv__Testserv_Request__fini(amr_v4_msgs_srvs__srv__Testserv_Request * msg)
{
  if (!msg) {
    return;
  }
  // pin_mode
}

bool
amr_v4_msgs_srvs__srv__Testserv_Request__are_equal(const amr_v4_msgs_srvs__srv__Testserv_Request * lhs, const amr_v4_msgs_srvs__srv__Testserv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pin_mode
  if (lhs->pin_mode != rhs->pin_mode) {
    return false;
  }
  return true;
}

bool
amr_v4_msgs_srvs__srv__Testserv_Request__copy(
  const amr_v4_msgs_srvs__srv__Testserv_Request * input,
  amr_v4_msgs_srvs__srv__Testserv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pin_mode
  output->pin_mode = input->pin_mode;
  return true;
}

amr_v4_msgs_srvs__srv__Testserv_Request *
amr_v4_msgs_srvs__srv__Testserv_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__srv__Testserv_Request * msg = (amr_v4_msgs_srvs__srv__Testserv_Request *)allocator.allocate(sizeof(amr_v4_msgs_srvs__srv__Testserv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_v4_msgs_srvs__srv__Testserv_Request));
  bool success = amr_v4_msgs_srvs__srv__Testserv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_v4_msgs_srvs__srv__Testserv_Request__destroy(amr_v4_msgs_srvs__srv__Testserv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_v4_msgs_srvs__srv__Testserv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__init(amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__srv__Testserv_Request * data = NULL;

  if (size) {
    data = (amr_v4_msgs_srvs__srv__Testserv_Request *)allocator.zero_allocate(size, sizeof(amr_v4_msgs_srvs__srv__Testserv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_v4_msgs_srvs__srv__Testserv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_v4_msgs_srvs__srv__Testserv_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__fini(amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      amr_v4_msgs_srvs__srv__Testserv_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

amr_v4_msgs_srvs__srv__Testserv_Request__Sequence *
amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * array = (amr_v4_msgs_srvs__srv__Testserv_Request__Sequence *)allocator.allocate(sizeof(amr_v4_msgs_srvs__srv__Testserv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__destroy(amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__are_equal(const amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * lhs, const amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_v4_msgs_srvs__srv__Testserv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__copy(
  const amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * input,
  amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(amr_v4_msgs_srvs__srv__Testserv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_v4_msgs_srvs__srv__Testserv_Request * data =
      (amr_v4_msgs_srvs__srv__Testserv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_v4_msgs_srvs__srv__Testserv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_v4_msgs_srvs__srv__Testserv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_v4_msgs_srvs__srv__Testserv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
amr_v4_msgs_srvs__srv__Testserv_Response__init(amr_v4_msgs_srvs__srv__Testserv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
amr_v4_msgs_srvs__srv__Testserv_Response__fini(amr_v4_msgs_srvs__srv__Testserv_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
amr_v4_msgs_srvs__srv__Testserv_Response__are_equal(const amr_v4_msgs_srvs__srv__Testserv_Response * lhs, const amr_v4_msgs_srvs__srv__Testserv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
amr_v4_msgs_srvs__srv__Testserv_Response__copy(
  const amr_v4_msgs_srvs__srv__Testserv_Response * input,
  amr_v4_msgs_srvs__srv__Testserv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

amr_v4_msgs_srvs__srv__Testserv_Response *
amr_v4_msgs_srvs__srv__Testserv_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__srv__Testserv_Response * msg = (amr_v4_msgs_srvs__srv__Testserv_Response *)allocator.allocate(sizeof(amr_v4_msgs_srvs__srv__Testserv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_v4_msgs_srvs__srv__Testserv_Response));
  bool success = amr_v4_msgs_srvs__srv__Testserv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_v4_msgs_srvs__srv__Testserv_Response__destroy(amr_v4_msgs_srvs__srv__Testserv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_v4_msgs_srvs__srv__Testserv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__init(amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__srv__Testserv_Response * data = NULL;

  if (size) {
    data = (amr_v4_msgs_srvs__srv__Testserv_Response *)allocator.zero_allocate(size, sizeof(amr_v4_msgs_srvs__srv__Testserv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_v4_msgs_srvs__srv__Testserv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_v4_msgs_srvs__srv__Testserv_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__fini(amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      amr_v4_msgs_srvs__srv__Testserv_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

amr_v4_msgs_srvs__srv__Testserv_Response__Sequence *
amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * array = (amr_v4_msgs_srvs__srv__Testserv_Response__Sequence *)allocator.allocate(sizeof(amr_v4_msgs_srvs__srv__Testserv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__destroy(amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__are_equal(const amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * lhs, const amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_v4_msgs_srvs__srv__Testserv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__copy(
  const amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * input,
  amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(amr_v4_msgs_srvs__srv__Testserv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_v4_msgs_srvs__srv__Testserv_Response * data =
      (amr_v4_msgs_srvs__srv__Testserv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_v4_msgs_srvs__srv__Testserv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_v4_msgs_srvs__srv__Testserv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_v4_msgs_srvs__srv__Testserv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "amr_v4_msgs_srvs/srv/detail/testserv__functions.h"

bool
amr_v4_msgs_srvs__srv__Testserv_Event__init(amr_v4_msgs_srvs__srv__Testserv_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    amr_v4_msgs_srvs__srv__Testserv_Event__fini(msg);
    return false;
  }
  // request
  if (!amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__init(&msg->request, 0)) {
    amr_v4_msgs_srvs__srv__Testserv_Event__fini(msg);
    return false;
  }
  // response
  if (!amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__init(&msg->response, 0)) {
    amr_v4_msgs_srvs__srv__Testserv_Event__fini(msg);
    return false;
  }
  return true;
}

void
amr_v4_msgs_srvs__srv__Testserv_Event__fini(amr_v4_msgs_srvs__srv__Testserv_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__fini(&msg->request);
  // response
  amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__fini(&msg->response);
}

bool
amr_v4_msgs_srvs__srv__Testserv_Event__are_equal(const amr_v4_msgs_srvs__srv__Testserv_Event * lhs, const amr_v4_msgs_srvs__srv__Testserv_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
amr_v4_msgs_srvs__srv__Testserv_Event__copy(
  const amr_v4_msgs_srvs__srv__Testserv_Event * input,
  amr_v4_msgs_srvs__srv__Testserv_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

amr_v4_msgs_srvs__srv__Testserv_Event *
amr_v4_msgs_srvs__srv__Testserv_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__srv__Testserv_Event * msg = (amr_v4_msgs_srvs__srv__Testserv_Event *)allocator.allocate(sizeof(amr_v4_msgs_srvs__srv__Testserv_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_v4_msgs_srvs__srv__Testserv_Event));
  bool success = amr_v4_msgs_srvs__srv__Testserv_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_v4_msgs_srvs__srv__Testserv_Event__destroy(amr_v4_msgs_srvs__srv__Testserv_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_v4_msgs_srvs__srv__Testserv_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_v4_msgs_srvs__srv__Testserv_Event__Sequence__init(amr_v4_msgs_srvs__srv__Testserv_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__srv__Testserv_Event * data = NULL;

  if (size) {
    data = (amr_v4_msgs_srvs__srv__Testserv_Event *)allocator.zero_allocate(size, sizeof(amr_v4_msgs_srvs__srv__Testserv_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_v4_msgs_srvs__srv__Testserv_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_v4_msgs_srvs__srv__Testserv_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
amr_v4_msgs_srvs__srv__Testserv_Event__Sequence__fini(amr_v4_msgs_srvs__srv__Testserv_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      amr_v4_msgs_srvs__srv__Testserv_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

amr_v4_msgs_srvs__srv__Testserv_Event__Sequence *
amr_v4_msgs_srvs__srv__Testserv_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__srv__Testserv_Event__Sequence * array = (amr_v4_msgs_srvs__srv__Testserv_Event__Sequence *)allocator.allocate(sizeof(amr_v4_msgs_srvs__srv__Testserv_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_v4_msgs_srvs__srv__Testserv_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_v4_msgs_srvs__srv__Testserv_Event__Sequence__destroy(amr_v4_msgs_srvs__srv__Testserv_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_v4_msgs_srvs__srv__Testserv_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_v4_msgs_srvs__srv__Testserv_Event__Sequence__are_equal(const amr_v4_msgs_srvs__srv__Testserv_Event__Sequence * lhs, const amr_v4_msgs_srvs__srv__Testserv_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_v4_msgs_srvs__srv__Testserv_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_v4_msgs_srvs__srv__Testserv_Event__Sequence__copy(
  const amr_v4_msgs_srvs__srv__Testserv_Event__Sequence * input,
  amr_v4_msgs_srvs__srv__Testserv_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(amr_v4_msgs_srvs__srv__Testserv_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_v4_msgs_srvs__srv__Testserv_Event * data =
      (amr_v4_msgs_srvs__srv__Testserv_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_v4_msgs_srvs__srv__Testserv_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_v4_msgs_srvs__srv__Testserv_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_v4_msgs_srvs__srv__Testserv_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
