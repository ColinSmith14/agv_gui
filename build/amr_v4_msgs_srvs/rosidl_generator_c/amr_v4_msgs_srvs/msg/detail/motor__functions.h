// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from amr_v4_msgs_srvs:msg/Motor.idl
// generated code does not contain a copyright notice

#ifndef AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__FUNCTIONS_H_
#define AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "amr_v4_msgs_srvs/msg/rosidl_generator_c__visibility_control.h"

#include "amr_v4_msgs_srvs/msg/detail/motor__struct.h"

/// Initialize msg/Motor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * amr_v4_msgs_srvs__msg__Motor
 * )) before or use
 * amr_v4_msgs_srvs__msg__Motor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
bool
amr_v4_msgs_srvs__msg__Motor__init(amr_v4_msgs_srvs__msg__Motor * msg);

/// Finalize msg/Motor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
void
amr_v4_msgs_srvs__msg__Motor__fini(amr_v4_msgs_srvs__msg__Motor * msg);

/// Create msg/Motor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * amr_v4_msgs_srvs__msg__Motor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
amr_v4_msgs_srvs__msg__Motor *
amr_v4_msgs_srvs__msg__Motor__create();

/// Destroy msg/Motor message.
/**
 * It calls
 * amr_v4_msgs_srvs__msg__Motor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
void
amr_v4_msgs_srvs__msg__Motor__destroy(amr_v4_msgs_srvs__msg__Motor * msg);

/// Check for msg/Motor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
bool
amr_v4_msgs_srvs__msg__Motor__are_equal(const amr_v4_msgs_srvs__msg__Motor * lhs, const amr_v4_msgs_srvs__msg__Motor * rhs);

/// Copy a msg/Motor message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
bool
amr_v4_msgs_srvs__msg__Motor__copy(
  const amr_v4_msgs_srvs__msg__Motor * input,
  amr_v4_msgs_srvs__msg__Motor * output);

/// Initialize array of msg/Motor messages.
/**
 * It allocates the memory for the number of elements and calls
 * amr_v4_msgs_srvs__msg__Motor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
bool
amr_v4_msgs_srvs__msg__Motor__Sequence__init(amr_v4_msgs_srvs__msg__Motor__Sequence * array, size_t size);

/// Finalize array of msg/Motor messages.
/**
 * It calls
 * amr_v4_msgs_srvs__msg__Motor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
void
amr_v4_msgs_srvs__msg__Motor__Sequence__fini(amr_v4_msgs_srvs__msg__Motor__Sequence * array);

/// Create array of msg/Motor messages.
/**
 * It allocates the memory for the array and calls
 * amr_v4_msgs_srvs__msg__Motor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
amr_v4_msgs_srvs__msg__Motor__Sequence *
amr_v4_msgs_srvs__msg__Motor__Sequence__create(size_t size);

/// Destroy array of msg/Motor messages.
/**
 * It calls
 * amr_v4_msgs_srvs__msg__Motor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
void
amr_v4_msgs_srvs__msg__Motor__Sequence__destroy(amr_v4_msgs_srvs__msg__Motor__Sequence * array);

/// Check for msg/Motor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
bool
amr_v4_msgs_srvs__msg__Motor__Sequence__are_equal(const amr_v4_msgs_srvs__msg__Motor__Sequence * lhs, const amr_v4_msgs_srvs__msg__Motor__Sequence * rhs);

/// Copy an array of msg/Motor messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_amr_v4_msgs_srvs
bool
amr_v4_msgs_srvs__msg__Motor__Sequence__copy(
  const amr_v4_msgs_srvs__msg__Motor__Sequence * input,
  amr_v4_msgs_srvs__msg__Motor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AMR_V4_MSGS_SRVS__MSG__DETAIL__MOTOR__FUNCTIONS_H_
