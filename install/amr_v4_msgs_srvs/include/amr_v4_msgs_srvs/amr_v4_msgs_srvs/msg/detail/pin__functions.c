// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_v4_msgs_srvs:msg/Pin.idl
// generated code does not contain a copyright notice
#include "amr_v4_msgs_srvs/msg/detail/pin__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
amr_v4_msgs_srvs__msg__Pin__init(amr_v4_msgs_srvs__msg__Pin * msg)
{
  if (!msg) {
    return false;
  }
  // pin_command
  return true;
}

void
amr_v4_msgs_srvs__msg__Pin__fini(amr_v4_msgs_srvs__msg__Pin * msg)
{
  if (!msg) {
    return;
  }
  // pin_command
}

bool
amr_v4_msgs_srvs__msg__Pin__are_equal(const amr_v4_msgs_srvs__msg__Pin * lhs, const amr_v4_msgs_srvs__msg__Pin * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pin_command
  if (lhs->pin_command != rhs->pin_command) {
    return false;
  }
  return true;
}

bool
amr_v4_msgs_srvs__msg__Pin__copy(
  const amr_v4_msgs_srvs__msg__Pin * input,
  amr_v4_msgs_srvs__msg__Pin * output)
{
  if (!input || !output) {
    return false;
  }
  // pin_command
  output->pin_command = input->pin_command;
  return true;
}

amr_v4_msgs_srvs__msg__Pin *
amr_v4_msgs_srvs__msg__Pin__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__msg__Pin * msg = (amr_v4_msgs_srvs__msg__Pin *)allocator.allocate(sizeof(amr_v4_msgs_srvs__msg__Pin), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_v4_msgs_srvs__msg__Pin));
  bool success = amr_v4_msgs_srvs__msg__Pin__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_v4_msgs_srvs__msg__Pin__destroy(amr_v4_msgs_srvs__msg__Pin * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_v4_msgs_srvs__msg__Pin__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_v4_msgs_srvs__msg__Pin__Sequence__init(amr_v4_msgs_srvs__msg__Pin__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__msg__Pin * data = NULL;

  if (size) {
    data = (amr_v4_msgs_srvs__msg__Pin *)allocator.zero_allocate(size, sizeof(amr_v4_msgs_srvs__msg__Pin), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_v4_msgs_srvs__msg__Pin__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_v4_msgs_srvs__msg__Pin__fini(&data[i - 1]);
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
amr_v4_msgs_srvs__msg__Pin__Sequence__fini(amr_v4_msgs_srvs__msg__Pin__Sequence * array)
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
      amr_v4_msgs_srvs__msg__Pin__fini(&array->data[i]);
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

amr_v4_msgs_srvs__msg__Pin__Sequence *
amr_v4_msgs_srvs__msg__Pin__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__msg__Pin__Sequence * array = (amr_v4_msgs_srvs__msg__Pin__Sequence *)allocator.allocate(sizeof(amr_v4_msgs_srvs__msg__Pin__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_v4_msgs_srvs__msg__Pin__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_v4_msgs_srvs__msg__Pin__Sequence__destroy(amr_v4_msgs_srvs__msg__Pin__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_v4_msgs_srvs__msg__Pin__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_v4_msgs_srvs__msg__Pin__Sequence__are_equal(const amr_v4_msgs_srvs__msg__Pin__Sequence * lhs, const amr_v4_msgs_srvs__msg__Pin__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_v4_msgs_srvs__msg__Pin__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_v4_msgs_srvs__msg__Pin__Sequence__copy(
  const amr_v4_msgs_srvs__msg__Pin__Sequence * input,
  amr_v4_msgs_srvs__msg__Pin__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(amr_v4_msgs_srvs__msg__Pin);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_v4_msgs_srvs__msg__Pin * data =
      (amr_v4_msgs_srvs__msg__Pin *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_v4_msgs_srvs__msg__Pin__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_v4_msgs_srvs__msg__Pin__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_v4_msgs_srvs__msg__Pin__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
