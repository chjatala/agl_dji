// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wifi_msgs:msg/RangeRSSI.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__RANGE_RSSI__FUNCTIONS_H_
#define WIFI_MSGS__MSG__DETAIL__RANGE_RSSI__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wifi_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wifi_msgs/msg/detail/range_rssi__struct.h"

/// Initialize msg/RangeRSSI message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wifi_msgs__msg__RangeRSSI
 * )) before or use
 * wifi_msgs__msg__RangeRSSI__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
bool
wifi_msgs__msg__RangeRSSI__init(wifi_msgs__msg__RangeRSSI * msg);

/// Finalize msg/RangeRSSI message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
void
wifi_msgs__msg__RangeRSSI__fini(wifi_msgs__msg__RangeRSSI * msg);

/// Create msg/RangeRSSI message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wifi_msgs__msg__RangeRSSI__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
wifi_msgs__msg__RangeRSSI *
wifi_msgs__msg__RangeRSSI__create();

/// Destroy msg/RangeRSSI message.
/**
 * It calls
 * wifi_msgs__msg__RangeRSSI__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
void
wifi_msgs__msg__RangeRSSI__destroy(wifi_msgs__msg__RangeRSSI * msg);

/// Check for msg/RangeRSSI message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
bool
wifi_msgs__msg__RangeRSSI__are_equal(const wifi_msgs__msg__RangeRSSI * lhs, const wifi_msgs__msg__RangeRSSI * rhs);

/// Copy a msg/RangeRSSI message.
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
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
bool
wifi_msgs__msg__RangeRSSI__copy(
  const wifi_msgs__msg__RangeRSSI * input,
  wifi_msgs__msg__RangeRSSI * output);

/// Initialize array of msg/RangeRSSI messages.
/**
 * It allocates the memory for the number of elements and calls
 * wifi_msgs__msg__RangeRSSI__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
bool
wifi_msgs__msg__RangeRSSI__Sequence__init(wifi_msgs__msg__RangeRSSI__Sequence * array, size_t size);

/// Finalize array of msg/RangeRSSI messages.
/**
 * It calls
 * wifi_msgs__msg__RangeRSSI__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
void
wifi_msgs__msg__RangeRSSI__Sequence__fini(wifi_msgs__msg__RangeRSSI__Sequence * array);

/// Create array of msg/RangeRSSI messages.
/**
 * It allocates the memory for the array and calls
 * wifi_msgs__msg__RangeRSSI__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
wifi_msgs__msg__RangeRSSI__Sequence *
wifi_msgs__msg__RangeRSSI__Sequence__create(size_t size);

/// Destroy array of msg/RangeRSSI messages.
/**
 * It calls
 * wifi_msgs__msg__RangeRSSI__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
void
wifi_msgs__msg__RangeRSSI__Sequence__destroy(wifi_msgs__msg__RangeRSSI__Sequence * array);

/// Check for msg/RangeRSSI message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
bool
wifi_msgs__msg__RangeRSSI__Sequence__are_equal(const wifi_msgs__msg__RangeRSSI__Sequence * lhs, const wifi_msgs__msg__RangeRSSI__Sequence * rhs);

/// Copy an array of msg/RangeRSSI messages.
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
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
bool
wifi_msgs__msg__RangeRSSI__Sequence__copy(
  const wifi_msgs__msg__RangeRSSI__Sequence * input,
  wifi_msgs__msg__RangeRSSI__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WIFI_MSGS__MSG__DETAIL__RANGE_RSSI__FUNCTIONS_H_
