// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_v4_msgs_srvs:srv/Testserv.idl
// generated code does not contain a copyright notice
#include "amr_v4_msgs_srvs/srv/detail/testserv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

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
  amr_v4_msgs_srvs__srv__Testserv_Request * msg = (amr_v4_msgs_srvs__srv__Testserv_Request *)malloc(sizeof(amr_v4_msgs_srvs__srv__Testserv_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_v4_msgs_srvs__srv__Testserv_Request));
  bool success = amr_v4_msgs_srvs__srv__Testserv_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
amr_v4_msgs_srvs__srv__Testserv_Request__destroy(amr_v4_msgs_srvs__srv__Testserv_Request * msg)
{
  if (msg) {
    amr_v4_msgs_srvs__srv__Testserv_Request__fini(msg);
  }
  free(msg);
}


bool
amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__init(amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  amr_v4_msgs_srvs__srv__Testserv_Request * data = NULL;
  if (size) {
    data = (amr_v4_msgs_srvs__srv__Testserv_Request *)calloc(size, sizeof(amr_v4_msgs_srvs__srv__Testserv_Request));
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
amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__fini(amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      amr_v4_msgs_srvs__srv__Testserv_Request__fini(&array->data[i]);
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

amr_v4_msgs_srvs__srv__Testserv_Request__Sequence *
amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__create(size_t size)
{
  amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * array = (amr_v4_msgs_srvs__srv__Testserv_Request__Sequence *)malloc(sizeof(amr_v4_msgs_srvs__srv__Testserv_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__destroy(amr_v4_msgs_srvs__srv__Testserv_Request__Sequence * array)
{
  if (array) {
    amr_v4_msgs_srvs__srv__Testserv_Request__Sequence__fini(array);
  }
  free(array);
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
    amr_v4_msgs_srvs__srv__Testserv_Request * data =
      (amr_v4_msgs_srvs__srv__Testserv_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_v4_msgs_srvs__srv__Testserv_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          amr_v4_msgs_srvs__srv__Testserv_Request__fini(&data[i]);
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
  amr_v4_msgs_srvs__srv__Testserv_Response * msg = (amr_v4_msgs_srvs__srv__Testserv_Response *)malloc(sizeof(amr_v4_msgs_srvs__srv__Testserv_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_v4_msgs_srvs__srv__Testserv_Response));
  bool success = amr_v4_msgs_srvs__srv__Testserv_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
amr_v4_msgs_srvs__srv__Testserv_Response__destroy(amr_v4_msgs_srvs__srv__Testserv_Response * msg)
{
  if (msg) {
    amr_v4_msgs_srvs__srv__Testserv_Response__fini(msg);
  }
  free(msg);
}


bool
amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__init(amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  amr_v4_msgs_srvs__srv__Testserv_Response * data = NULL;
  if (size) {
    data = (amr_v4_msgs_srvs__srv__Testserv_Response *)calloc(size, sizeof(amr_v4_msgs_srvs__srv__Testserv_Response));
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
amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__fini(amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      amr_v4_msgs_srvs__srv__Testserv_Response__fini(&array->data[i]);
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

amr_v4_msgs_srvs__srv__Testserv_Response__Sequence *
amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__create(size_t size)
{
  amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * array = (amr_v4_msgs_srvs__srv__Testserv_Response__Sequence *)malloc(sizeof(amr_v4_msgs_srvs__srv__Testserv_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__destroy(amr_v4_msgs_srvs__srv__Testserv_Response__Sequence * array)
{
  if (array) {
    amr_v4_msgs_srvs__srv__Testserv_Response__Sequence__fini(array);
  }
  free(array);
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
    amr_v4_msgs_srvs__srv__Testserv_Response * data =
      (amr_v4_msgs_srvs__srv__Testserv_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_v4_msgs_srvs__srv__Testserv_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          amr_v4_msgs_srvs__srv__Testserv_Response__fini(&data[i]);
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
    if (!amr_v4_msgs_srvs__srv__Testserv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
