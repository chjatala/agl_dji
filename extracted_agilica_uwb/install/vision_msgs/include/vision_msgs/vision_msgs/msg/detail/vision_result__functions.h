// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vision_msgs:msg/VisionResult.idl
// generated code does not contain a copyright notice

#ifndef VISION_MSGS__MSG__DETAIL__VISION_RESULT__FUNCTIONS_H_
#define VISION_MSGS__MSG__DETAIL__VISION_RESULT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vision_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "vision_msgs/msg/detail/vision_result__struct.h"

/// Initialize msg/VisionResult message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vision_msgs__msg__VisionResult
 * )) before or use
 * vision_msgs__msg__VisionResult__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs
bool
vision_msgs__msg__VisionResult__init(vision_msgs__msg__VisionResult * msg);

/// Finalize msg/VisionResult message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs
void
vision_msgs__msg__VisionResult__fini(vision_msgs__msg__VisionResult * msg);

/// Create msg/VisionResult message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vision_msgs__msg__VisionResult__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs
vision_msgs__msg__VisionResult *
vision_msgs__msg__VisionResult__create();

/// Destroy msg/VisionResult message.
/**
 * It calls
 * vision_msgs__msg__VisionResult__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs
void
vision_msgs__msg__VisionResult__destroy(vision_msgs__msg__VisionResult * msg);

/// Check for msg/VisionResult message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs
bool
vision_msgs__msg__VisionResult__are_equal(const vision_msgs__msg__VisionResult * lhs, const vision_msgs__msg__VisionResult * rhs);

/// Copy a msg/VisionResult message.
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
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs
bool
vision_msgs__msg__VisionResult__copy(
  const vision_msgs__msg__VisionResult * input,
  vision_msgs__msg__VisionResult * output);

/// Initialize array of msg/VisionResult messages.
/**
 * It allocates the memory for the number of elements and calls
 * vision_msgs__msg__VisionResult__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs
bool
vision_msgs__msg__VisionResult__Sequence__init(vision_msgs__msg__VisionResult__Sequence * array, size_t size);

/// Finalize array of msg/VisionResult messages.
/**
 * It calls
 * vision_msgs__msg__VisionResult__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs
void
vision_msgs__msg__VisionResult__Sequence__fini(vision_msgs__msg__VisionResult__Sequence * array);

/// Create array of msg/VisionResult messages.
/**
 * It allocates the memory for the array and calls
 * vision_msgs__msg__VisionResult__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs
vision_msgs__msg__VisionResult__Sequence *
vision_msgs__msg__VisionResult__Sequence__create(size_t size);

/// Destroy array of msg/VisionResult messages.
/**
 * It calls
 * vision_msgs__msg__VisionResult__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs
void
vision_msgs__msg__VisionResult__Sequence__destroy(vision_msgs__msg__VisionResult__Sequence * array);

/// Check for msg/VisionResult message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs
bool
vision_msgs__msg__VisionResult__Sequence__are_equal(const vision_msgs__msg__VisionResult__Sequence * lhs, const vision_msgs__msg__VisionResult__Sequence * rhs);

/// Copy an array of msg/VisionResult messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vision_msgs
bool
vision_msgs__msg__VisionResult__Sequence__copy(
  const vision_msgs__msg__VisionResult__Sequence * input,
  vision_msgs__msg__VisionResult__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VISION_MSGS__MSG__DETAIL__VISION_RESULT__FUNCTIONS_H_
