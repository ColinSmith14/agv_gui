// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_v4_msgs_srvs:msg/Robot.idl
// generated code does not contain a copyright notice
#include "amr_v4_msgs_srvs/msg/detail/robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_localization_status`
// Member `robot_active_status`
#include "rosidl_runtime_c/string_functions.h"

bool
amr_v4_msgs_srvs__msg__Robot__init(amr_v4_msgs_srvs__msg__Robot * msg)
{
  if (!msg) {
    return false;
  }
  // robot_localization_status
  if (!rosidl_runtime_c__String__init(&msg->robot_localization_status)) {
    amr_v4_msgs_srvs__msg__Robot__fini(msg);
    return false;
  }
  // localized
  // robot_active_status
  if (!rosidl_runtime_c__String__init(&msg->robot_active_status)) {
    amr_v4_msgs_srvs__msg__Robot__fini(msg);
    return false;
  }
  return true;
}

void
amr_v4_msgs_srvs__msg__Robot__fini(amr_v4_msgs_srvs__msg__Robot * msg)
{
  if (!msg) {
    return;
  }
  // robot_localization_status
  rosidl_runtime_c__String__fini(&msg->robot_localization_status);
  // localized
  // robot_active_status
  rosidl_runtime_c__String__fini(&msg->robot_active_status);
}

bool
amr_v4_msgs_srvs__msg__Robot__are_equal(const amr_v4_msgs_srvs__msg__Robot * lhs, const amr_v4_msgs_srvs__msg__Robot * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_localization_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_localization_status), &(rhs->robot_localization_status)))
  {
    return false;
  }
  // localized
  if (lhs->localized != rhs->localized) {
    return false;
  }
  // robot_active_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_active_status), &(rhs->robot_active_status)))
  {
    return false;
  }
  return true;
}

bool
amr_v4_msgs_srvs__msg__Robot__copy(
  const amr_v4_msgs_srvs__msg__Robot * input,
  amr_v4_msgs_srvs__msg__Robot * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_localization_status
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_localization_status), &(output->robot_localization_status)))
  {
    return false;
  }
  // localized
  output->localized = input->localized;
  // robot_active_status
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_active_status), &(output->robot_active_status)))
  {
    return false;
  }
  return true;
}

amr_v4_msgs_srvs__msg__Robot *
amr_v4_msgs_srvs__msg__Robot__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__msg__Robot * msg = (amr_v4_msgs_srvs__msg__Robot *)allocator.allocate(sizeof(amr_v4_msgs_srvs__msg__Robot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_v4_msgs_srvs__msg__Robot));
  bool success = amr_v4_msgs_srvs__msg__Robot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
amr_v4_msgs_srvs__msg__Robot__destroy(amr_v4_msgs_srvs__msg__Robot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    amr_v4_msgs_srvs__msg__Robot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
amr_v4_msgs_srvs__msg__Robot__Sequence__init(amr_v4_msgs_srvs__msg__Robot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__msg__Robot * data = NULL;

  if (size) {
    data = (amr_v4_msgs_srvs__msg__Robot *)allocator.zero_allocate(size, sizeof(amr_v4_msgs_srvs__msg__Robot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_v4_msgs_srvs__msg__Robot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_v4_msgs_srvs__msg__Robot__fini(&data[i - 1]);
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
amr_v4_msgs_srvs__msg__Robot__Sequence__fini(amr_v4_msgs_srvs__msg__Robot__Sequence * array)
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
      amr_v4_msgs_srvs__msg__Robot__fini(&array->data[i]);
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

amr_v4_msgs_srvs__msg__Robot__Sequence *
amr_v4_msgs_srvs__msg__Robot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  amr_v4_msgs_srvs__msg__Robot__Sequence * array = (amr_v4_msgs_srvs__msg__Robot__Sequence *)allocator.allocate(sizeof(amr_v4_msgs_srvs__msg__Robot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = amr_v4_msgs_srvs__msg__Robot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
amr_v4_msgs_srvs__msg__Robot__Sequence__destroy(amr_v4_msgs_srvs__msg__Robot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    amr_v4_msgs_srvs__msg__Robot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
amr_v4_msgs_srvs__msg__Robot__Sequence__are_equal(const amr_v4_msgs_srvs__msg__Robot__Sequence * lhs, const amr_v4_msgs_srvs__msg__Robot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_v4_msgs_srvs__msg__Robot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_v4_msgs_srvs__msg__Robot__Sequence__copy(
  const amr_v4_msgs_srvs__msg__Robot__Sequence * input,
  amr_v4_msgs_srvs__msg__Robot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(amr_v4_msgs_srvs__msg__Robot);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    amr_v4_msgs_srvs__msg__Robot * data =
      (amr_v4_msgs_srvs__msg__Robot *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_v4_msgs_srvs__msg__Robot__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          amr_v4_msgs_srvs__msg__Robot__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!amr_v4_msgs_srvs__msg__Robot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
