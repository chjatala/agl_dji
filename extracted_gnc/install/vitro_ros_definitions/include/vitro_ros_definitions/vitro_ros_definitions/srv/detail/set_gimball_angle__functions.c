// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vitro_ros_definitions:srv/SetGimballAngle.idl
// generated code does not contain a copyright notice
#include "vitro_ros_definitions/srv/detail/set_gimball_angle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
vitro_ros_definitions__srv__SetGimballAngle_Request__init(vitro_ros_definitions__srv__SetGimballAngle_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pitch
  // speed
  msg->speed = -1.0f;
  return true;
}

void
vitro_ros_definitions__srv__SetGimballAngle_Request__fini(vitro_ros_definitions__srv__SetGimballAngle_Request * msg)
{
  if (!msg) {
    return;
  }
  // pitch
  // speed
}

bool
vitro_ros_definitions__srv__SetGimballAngle_Request__are_equal(const vitro_ros_definitions__srv__SetGimballAngle_Request * lhs, const vitro_ros_definitions__srv__SetGimballAngle_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  return true;
}

bool
vitro_ros_definitions__srv__SetGimballAngle_Request__copy(
  const vitro_ros_definitions__srv__SetGimballAngle_Request * input,
  vitro_ros_definitions__srv__SetGimballAngle_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pitch
  output->pitch = input->pitch;
  // speed
  output->speed = input->speed;
  return true;
}

vitro_ros_definitions__srv__SetGimballAngle_Request *
vitro_ros_definitions__srv__SetGimballAngle_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__srv__SetGimballAngle_Request * msg = (vitro_ros_definitions__srv__SetGimballAngle_Request *)allocator.allocate(sizeof(vitro_ros_definitions__srv__SetGimballAngle_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vitro_ros_definitions__srv__SetGimballAngle_Request));
  bool success = vitro_ros_definitions__srv__SetGimballAngle_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vitro_ros_definitions__srv__SetGimballAngle_Request__destroy(vitro_ros_definitions__srv__SetGimballAngle_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vitro_ros_definitions__srv__SetGimballAngle_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence__init(vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__srv__SetGimballAngle_Request * data = NULL;

  if (size) {
    data = (vitro_ros_definitions__srv__SetGimballAngle_Request *)allocator.zero_allocate(size, sizeof(vitro_ros_definitions__srv__SetGimballAngle_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vitro_ros_definitions__srv__SetGimballAngle_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vitro_ros_definitions__srv__SetGimballAngle_Request__fini(&data[i - 1]);
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
vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence__fini(vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence * array)
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
      vitro_ros_definitions__srv__SetGimballAngle_Request__fini(&array->data[i]);
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

vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence *
vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence * array = (vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence *)allocator.allocate(sizeof(vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence__destroy(vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence__are_equal(const vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence * lhs, const vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vitro_ros_definitions__srv__SetGimballAngle_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence__copy(
  const vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence * input,
  vitro_ros_definitions__srv__SetGimballAngle_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vitro_ros_definitions__srv__SetGimballAngle_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vitro_ros_definitions__srv__SetGimballAngle_Request * data =
      (vitro_ros_definitions__srv__SetGimballAngle_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vitro_ros_definitions__srv__SetGimballAngle_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vitro_ros_definitions__srv__SetGimballAngle_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vitro_ros_definitions__srv__SetGimballAngle_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
vitro_ros_definitions__srv__SetGimballAngle_Response__init(vitro_ros_definitions__srv__SetGimballAngle_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    vitro_ros_definitions__srv__SetGimballAngle_Response__fini(msg);
    return false;
  }
  return true;
}

void
vitro_ros_definitions__srv__SetGimballAngle_Response__fini(vitro_ros_definitions__srv__SetGimballAngle_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
vitro_ros_definitions__srv__SetGimballAngle_Response__are_equal(const vitro_ros_definitions__srv__SetGimballAngle_Response * lhs, const vitro_ros_definitions__srv__SetGimballAngle_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
vitro_ros_definitions__srv__SetGimballAngle_Response__copy(
  const vitro_ros_definitions__srv__SetGimballAngle_Response * input,
  vitro_ros_definitions__srv__SetGimballAngle_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

vitro_ros_definitions__srv__SetGimballAngle_Response *
vitro_ros_definitions__srv__SetGimballAngle_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__srv__SetGimballAngle_Response * msg = (vitro_ros_definitions__srv__SetGimballAngle_Response *)allocator.allocate(sizeof(vitro_ros_definitions__srv__SetGimballAngle_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vitro_ros_definitions__srv__SetGimballAngle_Response));
  bool success = vitro_ros_definitions__srv__SetGimballAngle_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vitro_ros_definitions__srv__SetGimballAngle_Response__destroy(vitro_ros_definitions__srv__SetGimballAngle_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vitro_ros_definitions__srv__SetGimballAngle_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence__init(vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__srv__SetGimballAngle_Response * data = NULL;

  if (size) {
    data = (vitro_ros_definitions__srv__SetGimballAngle_Response *)allocator.zero_allocate(size, sizeof(vitro_ros_definitions__srv__SetGimballAngle_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vitro_ros_definitions__srv__SetGimballAngle_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vitro_ros_definitions__srv__SetGimballAngle_Response__fini(&data[i - 1]);
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
vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence__fini(vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence * array)
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
      vitro_ros_definitions__srv__SetGimballAngle_Response__fini(&array->data[i]);
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

vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence *
vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence * array = (vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence *)allocator.allocate(sizeof(vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence__destroy(vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence__are_equal(const vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence * lhs, const vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vitro_ros_definitions__srv__SetGimballAngle_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence__copy(
  const vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence * input,
  vitro_ros_definitions__srv__SetGimballAngle_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vitro_ros_definitions__srv__SetGimballAngle_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vitro_ros_definitions__srv__SetGimballAngle_Response * data =
      (vitro_ros_definitions__srv__SetGimballAngle_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vitro_ros_definitions__srv__SetGimballAngle_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vitro_ros_definitions__srv__SetGimballAngle_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vitro_ros_definitions__srv__SetGimballAngle_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
