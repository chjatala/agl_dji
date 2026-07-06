// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wifi_msgs:msg/DiagnosticsRTT.idl
// generated code does not contain a copyright notice

#ifndef WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__FUNCTIONS_H_
#define WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wifi_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "wifi_msgs/msg/detail/diagnostics_rtt__struct.h"

/// Initialize msg/DiagnosticsRTT message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wifi_msgs__msg__DiagnosticsRTT
 * )) before or use
 * wifi_msgs__msg__DiagnosticsRTT__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
bool
wifi_msgs__msg__DiagnosticsRTT__init(wifi_msgs__msg__DiagnosticsRTT * msg);

/// Finalize msg/DiagnosticsRTT message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
void
wifi_msgs__msg__DiagnosticsRTT__fini(wifi_msgs__msg__DiagnosticsRTT * msg);

/// Create msg/DiagnosticsRTT message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wifi_msgs__msg__DiagnosticsRTT__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
wifi_msgs__msg__DiagnosticsRTT *
wifi_msgs__msg__DiagnosticsRTT__create();

/// Destroy msg/DiagnosticsRTT message.
/**
 * It calls
 * wifi_msgs__msg__DiagnosticsRTT__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
void
wifi_msgs__msg__DiagnosticsRTT__destroy(wifi_msgs__msg__DiagnosticsRTT * msg);

/// Check for msg/DiagnosticsRTT message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
bool
wifi_msgs__msg__DiagnosticsRTT__are_equal(const wifi_msgs__msg__DiagnosticsRTT * lhs, const wifi_msgs__msg__DiagnosticsRTT * rhs);

/// Copy a msg/DiagnosticsRTT message.
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
wifi_msgs__msg__DiagnosticsRTT__copy(
  const wifi_msgs__msg__DiagnosticsRTT * input,
  wifi_msgs__msg__DiagnosticsRTT * output);

/// Initialize array of msg/DiagnosticsRTT messages.
/**
 * It allocates the memory for the number of elements and calls
 * wifi_msgs__msg__DiagnosticsRTT__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
bool
wifi_msgs__msg__DiagnosticsRTT__Sequence__init(wifi_msgs__msg__DiagnosticsRTT__Sequence * array, size_t size);

/// Finalize array of msg/DiagnosticsRTT messages.
/**
 * It calls
 * wifi_msgs__msg__DiagnosticsRTT__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
void
wifi_msgs__msg__DiagnosticsRTT__Sequence__fini(wifi_msgs__msg__DiagnosticsRTT__Sequence * array);

/// Create array of msg/DiagnosticsRTT messages.
/**
 * It allocates the memory for the array and calls
 * wifi_msgs__msg__DiagnosticsRTT__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
wifi_msgs__msg__DiagnosticsRTT__Sequence *
wifi_msgs__msg__DiagnosticsRTT__Sequence__create(size_t size);

/// Destroy array of msg/DiagnosticsRTT messages.
/**
 * It calls
 * wifi_msgs__msg__DiagnosticsRTT__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
void
wifi_msgs__msg__DiagnosticsRTT__Sequence__destroy(wifi_msgs__msg__DiagnosticsRTT__Sequence * array);

/// Check for msg/DiagnosticsRTT message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wifi_msgs
bool
wifi_msgs__msg__DiagnosticsRTT__Sequence__are_equal(const wifi_msgs__msg__DiagnosticsRTT__Sequence * lhs, const wifi_msgs__msg__DiagnosticsRTT__Sequence * rhs);

/// Copy an array of msg/DiagnosticsRTT messages.
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
wifi_msgs__msg__DiagnosticsRTT__Sequence__copy(
  const wifi_msgs__msg__DiagnosticsRTT__Sequence * input,
  wifi_msgs__msg__DiagnosticsRTT__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WIFI_MSGS__MSG__DETAIL__DIAGNOSTICS_RTT__FUNCTIONS_H_
