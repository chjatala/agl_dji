// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fm_gen_msgs:msg/PoseInCorridor.idl
// generated code does not contain a copyright notice

#ifndef FM_GEN_MSGS__MSG__DETAIL__POSE_IN_CORRIDOR__FUNCTIONS_H_
#define FM_GEN_MSGS__MSG__DETAIL__POSE_IN_CORRIDOR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fm_gen_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "fm_gen_msgs/msg/detail/pose_in_corridor__struct.h"

/// Initialize msg/PoseInCorridor message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fm_gen_msgs__msg__PoseInCorridor
 * )) before or use
 * fm_gen_msgs__msg__PoseInCorridor__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fm_gen_msgs
bool
fm_gen_msgs__msg__PoseInCorridor__init(fm_gen_msgs__msg__PoseInCorridor * msg);

/// Finalize msg/PoseInCorridor message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fm_gen_msgs
void
fm_gen_msgs__msg__PoseInCorridor__fini(fm_gen_msgs__msg__PoseInCorridor * msg);

/// Create msg/PoseInCorridor message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fm_gen_msgs__msg__PoseInCorridor__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fm_gen_msgs
fm_gen_msgs__msg__PoseInCorridor *
fm_gen_msgs__msg__PoseInCorridor__create();

/// Destroy msg/PoseInCorridor message.
/**
 * It calls
 * fm_gen_msgs__msg__PoseInCorridor__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fm_gen_msgs
void
fm_gen_msgs__msg__PoseInCorridor__destroy(fm_gen_msgs__msg__PoseInCorridor * msg);

/// Check for msg/PoseInCorridor message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fm_gen_msgs
bool
fm_gen_msgs__msg__PoseInCorridor__are_equal(const fm_gen_msgs__msg__PoseInCorridor * lhs, const fm_gen_msgs__msg__PoseInCorridor * rhs);

/// Copy a msg/PoseInCorridor message.
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
ROSIDL_GENERATOR_C_PUBLIC_fm_gen_msgs
bool
fm_gen_msgs__msg__PoseInCorridor__copy(
  const fm_gen_msgs__msg__PoseInCorridor * input,
  fm_gen_msgs__msg__PoseInCorridor * output);

/// Initialize array of msg/PoseInCorridor messages.
/**
 * It allocates the memory for the number of elements and calls
 * fm_gen_msgs__msg__PoseInCorridor__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fm_gen_msgs
bool
fm_gen_msgs__msg__PoseInCorridor__Sequence__init(fm_gen_msgs__msg__PoseInCorridor__Sequence * array, size_t size);

/// Finalize array of msg/PoseInCorridor messages.
/**
 * It calls
 * fm_gen_msgs__msg__PoseInCorridor__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fm_gen_msgs
void
fm_gen_msgs__msg__PoseInCorridor__Sequence__fini(fm_gen_msgs__msg__PoseInCorridor__Sequence * array);

/// Create array of msg/PoseInCorridor messages.
/**
 * It allocates the memory for the array and calls
 * fm_gen_msgs__msg__PoseInCorridor__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fm_gen_msgs
fm_gen_msgs__msg__PoseInCorridor__Sequence *
fm_gen_msgs__msg__PoseInCorridor__Sequence__create(size_t size);

/// Destroy array of msg/PoseInCorridor messages.
/**
 * It calls
 * fm_gen_msgs__msg__PoseInCorridor__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fm_gen_msgs
void
fm_gen_msgs__msg__PoseInCorridor__Sequence__destroy(fm_gen_msgs__msg__PoseInCorridor__Sequence * array);

/// Check for msg/PoseInCorridor message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fm_gen_msgs
bool
fm_gen_msgs__msg__PoseInCorridor__Sequence__are_equal(const fm_gen_msgs__msg__PoseInCorridor__Sequence * lhs, const fm_gen_msgs__msg__PoseInCorridor__Sequence * rhs);

/// Copy an array of msg/PoseInCorridor messages.
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
ROSIDL_GENERATOR_C_PUBLIC_fm_gen_msgs
bool
fm_gen_msgs__msg__PoseInCorridor__Sequence__copy(
  const fm_gen_msgs__msg__PoseInCorridor__Sequence * input,
  fm_gen_msgs__msg__PoseInCorridor__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FM_GEN_MSGS__MSG__DETAIL__POSE_IN_CORRIDOR__FUNCTIONS_H_
