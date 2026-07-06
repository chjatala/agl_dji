// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vitro_ros_definitions:srv/GetArucoDir.idl
// generated code does not contain a copyright notice
#include "vitro_ros_definitions/srv/detail/get_aruco_dir__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
vitro_ros_definitions__srv__GetArucoDir_Request__init(vitro_ros_definitions__srv__GetArucoDir_Request * msg)
{
  if (!msg) {
    return false;
  }
  // id
  return true;
}

void
vitro_ros_definitions__srv__GetArucoDir_Request__fini(vitro_ros_definitions__srv__GetArucoDir_Request * msg)
{
  if (!msg) {
    return;
  }
  // id
}

bool
vitro_ros_definitions__srv__GetArucoDir_Request__are_equal(const vitro_ros_definitions__srv__GetArucoDir_Request * lhs, const vitro_ros_definitions__srv__GetArucoDir_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
vitro_ros_definitions__srv__GetArucoDir_Request__copy(
  const vitro_ros_definitions__srv__GetArucoDir_Request * input,
  vitro_ros_definitions__srv__GetArucoDir_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  return true;
}

vitro_ros_definitions__srv__GetArucoDir_Request *
vitro_ros_definitions__srv__GetArucoDir_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__srv__GetArucoDir_Request * msg = (vitro_ros_definitions__srv__GetArucoDir_Request *)allocator.allocate(sizeof(vitro_ros_definitions__srv__GetArucoDir_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vitro_ros_definitions__srv__GetArucoDir_Request));
  bool success = vitro_ros_definitions__srv__GetArucoDir_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vitro_ros_definitions__srv__GetArucoDir_Request__destroy(vitro_ros_definitions__srv__GetArucoDir_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vitro_ros_definitions__srv__GetArucoDir_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vitro_ros_definitions__srv__GetArucoDir_Request__Sequence__init(vitro_ros_definitions__srv__GetArucoDir_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__srv__GetArucoDir_Request * data = NULL;

  if (size) {
    data = (vitro_ros_definitions__srv__GetArucoDir_Request *)allocator.zero_allocate(size, sizeof(vitro_ros_definitions__srv__GetArucoDir_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vitro_ros_definitions__srv__GetArucoDir_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vitro_ros_definitions__srv__GetArucoDir_Request__fini(&data[i - 1]);
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
vitro_ros_definitions__srv__GetArucoDir_Request__Sequence__fini(vitro_ros_definitions__srv__GetArucoDir_Request__Sequence * array)
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
      vitro_ros_definitions__srv__GetArucoDir_Request__fini(&array->data[i]);
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

vitro_ros_definitions__srv__GetArucoDir_Request__Sequence *
vitro_ros_definitions__srv__GetArucoDir_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__srv__GetArucoDir_Request__Sequence * array = (vitro_ros_definitions__srv__GetArucoDir_Request__Sequence *)allocator.allocate(sizeof(vitro_ros_definitions__srv__GetArucoDir_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vitro_ros_definitions__srv__GetArucoDir_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vitro_ros_definitions__srv__GetArucoDir_Request__Sequence__destroy(vitro_ros_definitions__srv__GetArucoDir_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vitro_ros_definitions__srv__GetArucoDir_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vitro_ros_definitions__srv__GetArucoDir_Request__Sequence__are_equal(const vitro_ros_definitions__srv__GetArucoDir_Request__Sequence * lhs, const vitro_ros_definitions__srv__GetArucoDir_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vitro_ros_definitions__srv__GetArucoDir_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vitro_ros_definitions__srv__GetArucoDir_Request__Sequence__copy(
  const vitro_ros_definitions__srv__GetArucoDir_Request__Sequence * input,
  vitro_ros_definitions__srv__GetArucoDir_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vitro_ros_definitions__srv__GetArucoDir_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vitro_ros_definitions__srv__GetArucoDir_Request * data =
      (vitro_ros_definitions__srv__GetArucoDir_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vitro_ros_definitions__srv__GetArucoDir_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vitro_ros_definitions__srv__GetArucoDir_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vitro_ros_definitions__srv__GetArucoDir_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

bool
vitro_ros_definitions__srv__GetArucoDir_Response__init(vitro_ros_definitions__srv__GetArucoDir_Response * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__init(&msg->direction)) {
    vitro_ros_definitions__srv__GetArucoDir_Response__fini(msg);
    return false;
  }
  return true;
}

void
vitro_ros_definitions__srv__GetArucoDir_Response__fini(vitro_ros_definitions__srv__GetArucoDir_Response * msg)
{
  if (!msg) {
    return;
  }
  // direction
  rosidl_runtime_c__String__fini(&msg->direction);
}

bool
vitro_ros_definitions__srv__GetArucoDir_Response__are_equal(const vitro_ros_definitions__srv__GetArucoDir_Response * lhs, const vitro_ros_definitions__srv__GetArucoDir_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  return true;
}

bool
vitro_ros_definitions__srv__GetArucoDir_Response__copy(
  const vitro_ros_definitions__srv__GetArucoDir_Response * input,
  vitro_ros_definitions__srv__GetArucoDir_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  return true;
}

vitro_ros_definitions__srv__GetArucoDir_Response *
vitro_ros_definitions__srv__GetArucoDir_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__srv__GetArucoDir_Response * msg = (vitro_ros_definitions__srv__GetArucoDir_Response *)allocator.allocate(sizeof(vitro_ros_definitions__srv__GetArucoDir_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vitro_ros_definitions__srv__GetArucoDir_Response));
  bool success = vitro_ros_definitions__srv__GetArucoDir_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vitro_ros_definitions__srv__GetArucoDir_Response__destroy(vitro_ros_definitions__srv__GetArucoDir_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vitro_ros_definitions__srv__GetArucoDir_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vitro_ros_definitions__srv__GetArucoDir_Response__Sequence__init(vitro_ros_definitions__srv__GetArucoDir_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__srv__GetArucoDir_Response * data = NULL;

  if (size) {
    data = (vitro_ros_definitions__srv__GetArucoDir_Response *)allocator.zero_allocate(size, sizeof(vitro_ros_definitions__srv__GetArucoDir_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vitro_ros_definitions__srv__GetArucoDir_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vitro_ros_definitions__srv__GetArucoDir_Response__fini(&data[i - 1]);
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
vitro_ros_definitions__srv__GetArucoDir_Response__Sequence__fini(vitro_ros_definitions__srv__GetArucoDir_Response__Sequence * array)
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
      vitro_ros_definitions__srv__GetArucoDir_Response__fini(&array->data[i]);
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

vitro_ros_definitions__srv__GetArucoDir_Response__Sequence *
vitro_ros_definitions__srv__GetArucoDir_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__srv__GetArucoDir_Response__Sequence * array = (vitro_ros_definitions__srv__GetArucoDir_Response__Sequence *)allocator.allocate(sizeof(vitro_ros_definitions__srv__GetArucoDir_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vitro_ros_definitions__srv__GetArucoDir_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vitro_ros_definitions__srv__GetArucoDir_Response__Sequence__destroy(vitro_ros_definitions__srv__GetArucoDir_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vitro_ros_definitions__srv__GetArucoDir_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vitro_ros_definitions__srv__GetArucoDir_Response__Sequence__are_equal(const vitro_ros_definitions__srv__GetArucoDir_Response__Sequence * lhs, const vitro_ros_definitions__srv__GetArucoDir_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vitro_ros_definitions__srv__GetArucoDir_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vitro_ros_definitions__srv__GetArucoDir_Response__Sequence__copy(
  const vitro_ros_definitions__srv__GetArucoDir_Response__Sequence * input,
  vitro_ros_definitions__srv__GetArucoDir_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vitro_ros_definitions__srv__GetArucoDir_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vitro_ros_definitions__srv__GetArucoDir_Response * data =
      (vitro_ros_definitions__srv__GetArucoDir_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vitro_ros_definitions__srv__GetArucoDir_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vitro_ros_definitions__srv__GetArucoDir_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vitro_ros_definitions__srv__GetArucoDir_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
