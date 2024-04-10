// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_v4_msgs_srvs:msg/Robot.idl
// generated code does not contain a copyright notice
#include "amr_v4_msgs_srvs/msg/detail/robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


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
  amr_v4_msgs_srvs__msg__Robot * msg = (amr_v4_msgs_srvs__msg__Robot *)malloc(sizeof(amr_v4_msgs_srvs__msg__Robot));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_v4_msgs_srvs__msg__Robot));
  bool success = amr_v4_msgs_srvs__msg__Robot__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
amr_v4_msgs_srvs__msg__Robot__destroy(amr_v4_msgs_srvs__msg__Robot * msg)
{
  if (msg) {
    amr_v4_msgs_srvs__msg__Robot__fini(msg);
  }
  free(msg);
}


bool
amr_v4_msgs_srvs__msg__Robot__Sequence__init(amr_v4_msgs_srvs__msg__Robot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  amr_v4_msgs_srvs__msg__Robot * data = NULL;
  if (size) {
    data = (amr_v4_msgs_srvs__msg__Robot *)calloc(size, sizeof(amr_v4_msgs_srvs__msg__Robot));
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
      free(data);
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
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      amr_v4_msgs_srvs__msg__Robot__fini(&array->data[i]);
    }
    free(array->data);
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
  amr_v4_msgs_srvs__msg__Robot__Sequence * array = (amr_v4_msgs_srvs__msg__Robot__Sequence *)malloc(sizeof(amr_v4_msgs_srvs__msg__Robot__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = amr_v4_msgs_srvs__msg__Robot__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
amr_v4_msgs_srvs__msg__Robot__Sequence__destroy(amr_v4_msgs_srvs__msg__Robot__Sequence * array)
{
  if (array) {
    amr_v4_msgs_srvs__msg__Robot__Sequence__fini(array);
  }
  free(array);
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
    amr_v4_msgs_srvs__msg__Robot * data =
      (amr_v4_msgs_srvs__msg__Robot *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_v4_msgs_srvs__msg__Robot__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          amr_v4_msgs_srvs__msg__Robot__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
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
