// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from amr_v4_msgs_srvs:msg/Motor.idl
// generated code does not contain a copyright notice
#include "amr_v4_msgs_srvs/msg/detail/motor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `output_current_right`
// Member `error_right`
// Member `output_current_left`
// Member `error_left`
// Member `output_current_pin`
// Member `error_pin`
#include "rosidl_runtime_c/string_functions.h"

bool
amr_v4_msgs_srvs__msg__Motor__init(amr_v4_msgs_srvs__msg__Motor * msg)
{
  if (!msg) {
    return false;
  }
  // output_current_right
  if (!rosidl_runtime_c__String__init(&msg->output_current_right)) {
    amr_v4_msgs_srvs__msg__Motor__fini(msg);
    return false;
  }
  // error_right
  if (!rosidl_runtime_c__String__init(&msg->error_right)) {
    amr_v4_msgs_srvs__msg__Motor__fini(msg);
    return false;
  }
  // output_current_left
  if (!rosidl_runtime_c__String__init(&msg->output_current_left)) {
    amr_v4_msgs_srvs__msg__Motor__fini(msg);
    return false;
  }
  // error_left
  if (!rosidl_runtime_c__String__init(&msg->error_left)) {
    amr_v4_msgs_srvs__msg__Motor__fini(msg);
    return false;
  }
  // output_current_pin
  if (!rosidl_runtime_c__String__init(&msg->output_current_pin)) {
    amr_v4_msgs_srvs__msg__Motor__fini(msg);
    return false;
  }
  // error_pin
  if (!rosidl_runtime_c__String__init(&msg->error_pin)) {
    amr_v4_msgs_srvs__msg__Motor__fini(msg);
    return false;
  }
  // target_pos_high
  // target_pos_low
  // current_pos
  return true;
}

void
amr_v4_msgs_srvs__msg__Motor__fini(amr_v4_msgs_srvs__msg__Motor * msg)
{
  if (!msg) {
    return;
  }
  // output_current_right
  rosidl_runtime_c__String__fini(&msg->output_current_right);
  // error_right
  rosidl_runtime_c__String__fini(&msg->error_right);
  // output_current_left
  rosidl_runtime_c__String__fini(&msg->output_current_left);
  // error_left
  rosidl_runtime_c__String__fini(&msg->error_left);
  // output_current_pin
  rosidl_runtime_c__String__fini(&msg->output_current_pin);
  // error_pin
  rosidl_runtime_c__String__fini(&msg->error_pin);
  // target_pos_high
  // target_pos_low
  // current_pos
}

bool
amr_v4_msgs_srvs__msg__Motor__are_equal(const amr_v4_msgs_srvs__msg__Motor * lhs, const amr_v4_msgs_srvs__msg__Motor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // output_current_right
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->output_current_right), &(rhs->output_current_right)))
  {
    return false;
  }
  // error_right
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_right), &(rhs->error_right)))
  {
    return false;
  }
  // output_current_left
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->output_current_left), &(rhs->output_current_left)))
  {
    return false;
  }
  // error_left
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_left), &(rhs->error_left)))
  {
    return false;
  }
  // output_current_pin
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->output_current_pin), &(rhs->output_current_pin)))
  {
    return false;
  }
  // error_pin
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_pin), &(rhs->error_pin)))
  {
    return false;
  }
  // target_pos_high
  if (lhs->target_pos_high != rhs->target_pos_high) {
    return false;
  }
  // target_pos_low
  if (lhs->target_pos_low != rhs->target_pos_low) {
    return false;
  }
  // current_pos
  if (lhs->current_pos != rhs->current_pos) {
    return false;
  }
  return true;
}

bool
amr_v4_msgs_srvs__msg__Motor__copy(
  const amr_v4_msgs_srvs__msg__Motor * input,
  amr_v4_msgs_srvs__msg__Motor * output)
{
  if (!input || !output) {
    return false;
  }
  // output_current_right
  if (!rosidl_runtime_c__String__copy(
      &(input->output_current_right), &(output->output_current_right)))
  {
    return false;
  }
  // error_right
  if (!rosidl_runtime_c__String__copy(
      &(input->error_right), &(output->error_right)))
  {
    return false;
  }
  // output_current_left
  if (!rosidl_runtime_c__String__copy(
      &(input->output_current_left), &(output->output_current_left)))
  {
    return false;
  }
  // error_left
  if (!rosidl_runtime_c__String__copy(
      &(input->error_left), &(output->error_left)))
  {
    return false;
  }
  // output_current_pin
  if (!rosidl_runtime_c__String__copy(
      &(input->output_current_pin), &(output->output_current_pin)))
  {
    return false;
  }
  // error_pin
  if (!rosidl_runtime_c__String__copy(
      &(input->error_pin), &(output->error_pin)))
  {
    return false;
  }
  // target_pos_high
  output->target_pos_high = input->target_pos_high;
  // target_pos_low
  output->target_pos_low = input->target_pos_low;
  // current_pos
  output->current_pos = input->current_pos;
  return true;
}

amr_v4_msgs_srvs__msg__Motor *
amr_v4_msgs_srvs__msg__Motor__create()
{
  amr_v4_msgs_srvs__msg__Motor * msg = (amr_v4_msgs_srvs__msg__Motor *)malloc(sizeof(amr_v4_msgs_srvs__msg__Motor));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(amr_v4_msgs_srvs__msg__Motor));
  bool success = amr_v4_msgs_srvs__msg__Motor__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
amr_v4_msgs_srvs__msg__Motor__destroy(amr_v4_msgs_srvs__msg__Motor * msg)
{
  if (msg) {
    amr_v4_msgs_srvs__msg__Motor__fini(msg);
  }
  free(msg);
}


bool
amr_v4_msgs_srvs__msg__Motor__Sequence__init(amr_v4_msgs_srvs__msg__Motor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  amr_v4_msgs_srvs__msg__Motor * data = NULL;
  if (size) {
    data = (amr_v4_msgs_srvs__msg__Motor *)calloc(size, sizeof(amr_v4_msgs_srvs__msg__Motor));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = amr_v4_msgs_srvs__msg__Motor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        amr_v4_msgs_srvs__msg__Motor__fini(&data[i - 1]);
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
amr_v4_msgs_srvs__msg__Motor__Sequence__fini(amr_v4_msgs_srvs__msg__Motor__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      amr_v4_msgs_srvs__msg__Motor__fini(&array->data[i]);
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

amr_v4_msgs_srvs__msg__Motor__Sequence *
amr_v4_msgs_srvs__msg__Motor__Sequence__create(size_t size)
{
  amr_v4_msgs_srvs__msg__Motor__Sequence * array = (amr_v4_msgs_srvs__msg__Motor__Sequence *)malloc(sizeof(amr_v4_msgs_srvs__msg__Motor__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = amr_v4_msgs_srvs__msg__Motor__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
amr_v4_msgs_srvs__msg__Motor__Sequence__destroy(amr_v4_msgs_srvs__msg__Motor__Sequence * array)
{
  if (array) {
    amr_v4_msgs_srvs__msg__Motor__Sequence__fini(array);
  }
  free(array);
}

bool
amr_v4_msgs_srvs__msg__Motor__Sequence__are_equal(const amr_v4_msgs_srvs__msg__Motor__Sequence * lhs, const amr_v4_msgs_srvs__msg__Motor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!amr_v4_msgs_srvs__msg__Motor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
amr_v4_msgs_srvs__msg__Motor__Sequence__copy(
  const amr_v4_msgs_srvs__msg__Motor__Sequence * input,
  amr_v4_msgs_srvs__msg__Motor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(amr_v4_msgs_srvs__msg__Motor);
    amr_v4_msgs_srvs__msg__Motor * data =
      (amr_v4_msgs_srvs__msg__Motor *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!amr_v4_msgs_srvs__msg__Motor__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          amr_v4_msgs_srvs__msg__Motor__fini(&data[i]);
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
    if (!amr_v4_msgs_srvs__msg__Motor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
