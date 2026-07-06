// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vitro_ros_definitions:srv/GetInspectionObject.idl
// generated code does not contain a copyright notice

#ifndef VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_INSPECTION_OBJECT__FUNCTIONS_H_
#define VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_INSPECTION_OBJECT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vitro_ros_definitions/msg/rosidl_generator_c__visibility_control.h"

#include "vitro_ros_definitions/srv/detail/get_inspection_object__struct.h"

/// Initialize srv/GetInspectionObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vitro_ros_definitions__srv__GetInspectionObject_Request
 * )) before or use
 * vitro_ros_definitions__srv__GetInspectionObject_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
bool
vitro_ros_definitions__srv__GetInspectionObject_Request__init(vitro_ros_definitions__srv__GetInspectionObject_Request * msg);

/// Finalize srv/GetInspectionObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
void
vitro_ros_definitions__srv__GetInspectionObject_Request__fini(vitro_ros_definitions__srv__GetInspectionObject_Request * msg);

/// Create srv/GetInspectionObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vitro_ros_definitions__srv__GetInspectionObject_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
vitro_ros_definitions__srv__GetInspectionObject_Request *
vitro_ros_definitions__srv__GetInspectionObject_Request__create();

/// Destroy srv/GetInspectionObject message.
/**
 * It calls
 * vitro_ros_definitions__srv__GetInspectionObject_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
void
vitro_ros_definitions__srv__GetInspectionObject_Request__destroy(vitro_ros_definitions__srv__GetInspectionObject_Request * msg);

/// Check for srv/GetInspectionObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
bool
vitro_ros_definitions__srv__GetInspectionObject_Request__are_equal(const vitro_ros_definitions__srv__GetInspectionObject_Request * lhs, const vitro_ros_definitions__srv__GetInspectionObject_Request * rhs);

/// Copy a srv/GetInspectionObject message.
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
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
bool
vitro_ros_definitions__srv__GetInspectionObject_Request__copy(
  const vitro_ros_definitions__srv__GetInspectionObject_Request * input,
  vitro_ros_definitions__srv__GetInspectionObject_Request * output);

/// Initialize array of srv/GetInspectionObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * vitro_ros_definitions__srv__GetInspectionObject_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
bool
vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence__init(vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence * array, size_t size);

/// Finalize array of srv/GetInspectionObject messages.
/**
 * It calls
 * vitro_ros_definitions__srv__GetInspectionObject_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
void
vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence__fini(vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence * array);

/// Create array of srv/GetInspectionObject messages.
/**
 * It allocates the memory for the array and calls
 * vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence *
vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence__create(size_t size);

/// Destroy array of srv/GetInspectionObject messages.
/**
 * It calls
 * vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
void
vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence__destroy(vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence * array);

/// Check for srv/GetInspectionObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
bool
vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence__are_equal(const vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence * lhs, const vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence * rhs);

/// Copy an array of srv/GetInspectionObject messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
bool
vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence__copy(
  const vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence * input,
  vitro_ros_definitions__srv__GetInspectionObject_Request__Sequence * output);

/// Initialize srv/GetInspectionObject message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vitro_ros_definitions__srv__GetInspectionObject_Response
 * )) before or use
 * vitro_ros_definitions__srv__GetInspectionObject_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
bool
vitro_ros_definitions__srv__GetInspectionObject_Response__init(vitro_ros_definitions__srv__GetInspectionObject_Response * msg);

/// Finalize srv/GetInspectionObject message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
void
vitro_ros_definitions__srv__GetInspectionObject_Response__fini(vitro_ros_definitions__srv__GetInspectionObject_Response * msg);

/// Create srv/GetInspectionObject message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vitro_ros_definitions__srv__GetInspectionObject_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
vitro_ros_definitions__srv__GetInspectionObject_Response *
vitro_ros_definitions__srv__GetInspectionObject_Response__create();

/// Destroy srv/GetInspectionObject message.
/**
 * It calls
 * vitro_ros_definitions__srv__GetInspectionObject_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
void
vitro_ros_definitions__srv__GetInspectionObject_Response__destroy(vitro_ros_definitions__srv__GetInspectionObject_Response * msg);

/// Check for srv/GetInspectionObject message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
bool
vitro_ros_definitions__srv__GetInspectionObject_Response__are_equal(const vitro_ros_definitions__srv__GetInspectionObject_Response * lhs, const vitro_ros_definitions__srv__GetInspectionObject_Response * rhs);

/// Copy a srv/GetInspectionObject message.
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
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
bool
vitro_ros_definitions__srv__GetInspectionObject_Response__copy(
  const vitro_ros_definitions__srv__GetInspectionObject_Response * input,
  vitro_ros_definitions__srv__GetInspectionObject_Response * output);

/// Initialize array of srv/GetInspectionObject messages.
/**
 * It allocates the memory for the number of elements and calls
 * vitro_ros_definitions__srv__GetInspectionObject_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
bool
vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence__init(vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence * array, size_t size);

/// Finalize array of srv/GetInspectionObject messages.
/**
 * It calls
 * vitro_ros_definitions__srv__GetInspectionObject_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
void
vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence__fini(vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence * array);

/// Create array of srv/GetInspectionObject messages.
/**
 * It allocates the memory for the array and calls
 * vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence *
vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence__create(size_t size);

/// Destroy array of srv/GetInspectionObject messages.
/**
 * It calls
 * vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
void
vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence__destroy(vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence * array);

/// Check for srv/GetInspectionObject message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
bool
vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence__are_equal(const vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence * lhs, const vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence * rhs);

/// Copy an array of srv/GetInspectionObject messages.
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
ROSIDL_GENERATOR_C_PUBLIC_vitro_ros_definitions
bool
vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence__copy(
  const vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence * input,
  vitro_ros_definitions__srv__GetInspectionObject_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VITRO_ROS_DEFINITIONS__SRV__DETAIL__GET_INSPECTION_OBJECT__FUNCTIONS_H_
