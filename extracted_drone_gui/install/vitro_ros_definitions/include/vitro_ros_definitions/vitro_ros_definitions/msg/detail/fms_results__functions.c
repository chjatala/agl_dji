// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vitro_ros_definitions:msg/FMSResults.idl
// generated code does not contain a copyright notice
#include "vitro_ros_definitions/msg/detail/fms_results__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `results`
#include "vitro_ros_definitions/msg/detail/fms_result__functions.h"

bool
vitro_ros_definitions__msg__FMSResults__init(vitro_ros_definitions__msg__FMSResults * msg)
{
  if (!msg) {
    return false;
  }
  // results
  if (!vitro_ros_definitions__msg__FMSResult__Sequence__init(&msg->results, 0)) {
    vitro_ros_definitions__msg__FMSResults__fini(msg);
    return false;
  }
  return true;
}

void
vitro_ros_definitions__msg__FMSResults__fini(vitro_ros_definitions__msg__FMSResults * msg)
{
  if (!msg) {
    return;
  }
  // results
  vitro_ros_definitions__msg__FMSResult__Sequence__fini(&msg->results);
}

bool
vitro_ros_definitions__msg__FMSResults__are_equal(const vitro_ros_definitions__msg__FMSResults * lhs, const vitro_ros_definitions__msg__FMSResults * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // results
  if (!vitro_ros_definitions__msg__FMSResult__Sequence__are_equal(
      &(lhs->results), &(rhs->results)))
  {
    return false;
  }
  return true;
}

bool
vitro_ros_definitions__msg__FMSResults__copy(
  const vitro_ros_definitions__msg__FMSResults * input,
  vitro_ros_definitions__msg__FMSResults * output)
{
  if (!input || !output) {
    return false;
  }
  // results
  if (!vitro_ros_definitions__msg__FMSResult__Sequence__copy(
      &(input->results), &(output->results)))
  {
    return false;
  }
  return true;
}

vitro_ros_definitions__msg__FMSResults *
vitro_ros_definitions__msg__FMSResults__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__msg__FMSResults * msg = (vitro_ros_definitions__msg__FMSResults *)allocator.allocate(sizeof(vitro_ros_definitions__msg__FMSResults), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vitro_ros_definitions__msg__FMSResults));
  bool success = vitro_ros_definitions__msg__FMSResults__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vitro_ros_definitions__msg__FMSResults__destroy(vitro_ros_definitions__msg__FMSResults * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vitro_ros_definitions__msg__FMSResults__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vitro_ros_definitions__msg__FMSResults__Sequence__init(vitro_ros_definitions__msg__FMSResults__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__msg__FMSResults * data = NULL;

  if (size) {
    data = (vitro_ros_definitions__msg__FMSResults *)allocator.zero_allocate(size, sizeof(vitro_ros_definitions__msg__FMSResults), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vitro_ros_definitions__msg__FMSResults__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vitro_ros_definitions__msg__FMSResults__fini(&data[i - 1]);
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
vitro_ros_definitions__msg__FMSResults__Sequence__fini(vitro_ros_definitions__msg__FMSResults__Sequence * array)
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
      vitro_ros_definitions__msg__FMSResults__fini(&array->data[i]);
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

vitro_ros_definitions__msg__FMSResults__Sequence *
vitro_ros_definitions__msg__FMSResults__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__msg__FMSResults__Sequence * array = (vitro_ros_definitions__msg__FMSResults__Sequence *)allocator.allocate(sizeof(vitro_ros_definitions__msg__FMSResults__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vitro_ros_definitions__msg__FMSResults__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vitro_ros_definitions__msg__FMSResults__Sequence__destroy(vitro_ros_definitions__msg__FMSResults__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vitro_ros_definitions__msg__FMSResults__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vitro_ros_definitions__msg__FMSResults__Sequence__are_equal(const vitro_ros_definitions__msg__FMSResults__Sequence * lhs, const vitro_ros_definitions__msg__FMSResults__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vitro_ros_definitions__msg__FMSResults__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vitro_ros_definitions__msg__FMSResults__Sequence__copy(
  const vitro_ros_definitions__msg__FMSResults__Sequence * input,
  vitro_ros_definitions__msg__FMSResults__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vitro_ros_definitions__msg__FMSResults);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vitro_ros_definitions__msg__FMSResults * data =
      (vitro_ros_definitions__msg__FMSResults *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vitro_ros_definitions__msg__FMSResults__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vitro_ros_definitions__msg__FMSResults__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vitro_ros_definitions__msg__FMSResults__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
