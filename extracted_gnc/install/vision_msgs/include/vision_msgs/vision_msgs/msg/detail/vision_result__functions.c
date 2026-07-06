// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vision_msgs:msg/VisionResult.idl
// generated code does not contain a copyright notice
#include "vision_msgs/msg/detail/vision_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `points`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `additional_info`
#include "rosidl_runtime_c/string_functions.h"

bool
vision_msgs__msg__VisionResult__init(vision_msgs__msg__VisionResult * msg)
{
  if (!msg) {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->points, 0)) {
    vision_msgs__msg__VisionResult__fini(msg);
    return false;
  }
  // confidence
  // additional_info
  if (!rosidl_runtime_c__String__init(&msg->additional_info)) {
    vision_msgs__msg__VisionResult__fini(msg);
    return false;
  }
  return true;
}

void
vision_msgs__msg__VisionResult__fini(vision_msgs__msg__VisionResult * msg)
{
  if (!msg) {
    return;
  }
  // points
  geometry_msgs__msg__Point__Sequence__fini(&msg->points);
  // confidence
  // additional_info
  rosidl_runtime_c__String__fini(&msg->additional_info);
}

bool
vision_msgs__msg__VisionResult__are_equal(const vision_msgs__msg__VisionResult * lhs, const vision_msgs__msg__VisionResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // additional_info
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->additional_info), &(rhs->additional_info)))
  {
    return false;
  }
  return true;
}

bool
vision_msgs__msg__VisionResult__copy(
  const vision_msgs__msg__VisionResult * input,
  vision_msgs__msg__VisionResult * output)
{
  if (!input || !output) {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // additional_info
  if (!rosidl_runtime_c__String__copy(
      &(input->additional_info), &(output->additional_info)))
  {
    return false;
  }
  return true;
}

vision_msgs__msg__VisionResult *
vision_msgs__msg__VisionResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs__msg__VisionResult * msg = (vision_msgs__msg__VisionResult *)allocator.allocate(sizeof(vision_msgs__msg__VisionResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vision_msgs__msg__VisionResult));
  bool success = vision_msgs__msg__VisionResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vision_msgs__msg__VisionResult__destroy(vision_msgs__msg__VisionResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vision_msgs__msg__VisionResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vision_msgs__msg__VisionResult__Sequence__init(vision_msgs__msg__VisionResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs__msg__VisionResult * data = NULL;

  if (size) {
    data = (vision_msgs__msg__VisionResult *)allocator.zero_allocate(size, sizeof(vision_msgs__msg__VisionResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vision_msgs__msg__VisionResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vision_msgs__msg__VisionResult__fini(&data[i - 1]);
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
vision_msgs__msg__VisionResult__Sequence__fini(vision_msgs__msg__VisionResult__Sequence * array)
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
      vision_msgs__msg__VisionResult__fini(&array->data[i]);
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

vision_msgs__msg__VisionResult__Sequence *
vision_msgs__msg__VisionResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vision_msgs__msg__VisionResult__Sequence * array = (vision_msgs__msg__VisionResult__Sequence *)allocator.allocate(sizeof(vision_msgs__msg__VisionResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vision_msgs__msg__VisionResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vision_msgs__msg__VisionResult__Sequence__destroy(vision_msgs__msg__VisionResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vision_msgs__msg__VisionResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vision_msgs__msg__VisionResult__Sequence__are_equal(const vision_msgs__msg__VisionResult__Sequence * lhs, const vision_msgs__msg__VisionResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vision_msgs__msg__VisionResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vision_msgs__msg__VisionResult__Sequence__copy(
  const vision_msgs__msg__VisionResult__Sequence * input,
  vision_msgs__msg__VisionResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vision_msgs__msg__VisionResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vision_msgs__msg__VisionResult * data =
      (vision_msgs__msg__VisionResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vision_msgs__msg__VisionResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vision_msgs__msg__VisionResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vision_msgs__msg__VisionResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
