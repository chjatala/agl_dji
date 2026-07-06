// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uwb_msgs:msg/RangeArray.idl
// generated code does not contain a copyright notice
#include "uwb_msgs/msg/detail/range_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `tagid`
#include "rosidl_runtime_c/string_functions.h"
// Member `tag_position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `ranges`
#include "uwb_msgs/msg/detail/range__functions.h"

bool
uwb_msgs__msg__RangeArray__init(uwb_msgs__msg__RangeArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    uwb_msgs__msg__RangeArray__fini(msg);
    return false;
  }
  // tagid
  if (!rosidl_runtime_c__String__init(&msg->tagid)) {
    uwb_msgs__msg__RangeArray__fini(msg);
    return false;
  }
  // tag_position
  if (!geometry_msgs__msg__Point__init(&msg->tag_position)) {
    uwb_msgs__msg__RangeArray__fini(msg);
    return false;
  }
  // ranges
  if (!uwb_msgs__msg__Range__Sequence__init(&msg->ranges, 0)) {
    uwb_msgs__msg__RangeArray__fini(msg);
    return false;
  }
  return true;
}

void
uwb_msgs__msg__RangeArray__fini(uwb_msgs__msg__RangeArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tagid
  rosidl_runtime_c__String__fini(&msg->tagid);
  // tag_position
  geometry_msgs__msg__Point__fini(&msg->tag_position);
  // ranges
  uwb_msgs__msg__Range__Sequence__fini(&msg->ranges);
}

bool
uwb_msgs__msg__RangeArray__are_equal(const uwb_msgs__msg__RangeArray * lhs, const uwb_msgs__msg__RangeArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // tagid
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tagid), &(rhs->tagid)))
  {
    return false;
  }
  // tag_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->tag_position), &(rhs->tag_position)))
  {
    return false;
  }
  // ranges
  if (!uwb_msgs__msg__Range__Sequence__are_equal(
      &(lhs->ranges), &(rhs->ranges)))
  {
    return false;
  }
  return true;
}

bool
uwb_msgs__msg__RangeArray__copy(
  const uwb_msgs__msg__RangeArray * input,
  uwb_msgs__msg__RangeArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // tagid
  if (!rosidl_runtime_c__String__copy(
      &(input->tagid), &(output->tagid)))
  {
    return false;
  }
  // tag_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->tag_position), &(output->tag_position)))
  {
    return false;
  }
  // ranges
  if (!uwb_msgs__msg__Range__Sequence__copy(
      &(input->ranges), &(output->ranges)))
  {
    return false;
  }
  return true;
}

uwb_msgs__msg__RangeArray *
uwb_msgs__msg__RangeArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uwb_msgs__msg__RangeArray * msg = (uwb_msgs__msg__RangeArray *)allocator.allocate(sizeof(uwb_msgs__msg__RangeArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uwb_msgs__msg__RangeArray));
  bool success = uwb_msgs__msg__RangeArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uwb_msgs__msg__RangeArray__destroy(uwb_msgs__msg__RangeArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uwb_msgs__msg__RangeArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uwb_msgs__msg__RangeArray__Sequence__init(uwb_msgs__msg__RangeArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uwb_msgs__msg__RangeArray * data = NULL;

  if (size) {
    data = (uwb_msgs__msg__RangeArray *)allocator.zero_allocate(size, sizeof(uwb_msgs__msg__RangeArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uwb_msgs__msg__RangeArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uwb_msgs__msg__RangeArray__fini(&data[i - 1]);
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
uwb_msgs__msg__RangeArray__Sequence__fini(uwb_msgs__msg__RangeArray__Sequence * array)
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
      uwb_msgs__msg__RangeArray__fini(&array->data[i]);
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

uwb_msgs__msg__RangeArray__Sequence *
uwb_msgs__msg__RangeArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uwb_msgs__msg__RangeArray__Sequence * array = (uwb_msgs__msg__RangeArray__Sequence *)allocator.allocate(sizeof(uwb_msgs__msg__RangeArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uwb_msgs__msg__RangeArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uwb_msgs__msg__RangeArray__Sequence__destroy(uwb_msgs__msg__RangeArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uwb_msgs__msg__RangeArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uwb_msgs__msg__RangeArray__Sequence__are_equal(const uwb_msgs__msg__RangeArray__Sequence * lhs, const uwb_msgs__msg__RangeArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uwb_msgs__msg__RangeArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uwb_msgs__msg__RangeArray__Sequence__copy(
  const uwb_msgs__msg__RangeArray__Sequence * input,
  uwb_msgs__msg__RangeArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uwb_msgs__msg__RangeArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uwb_msgs__msg__RangeArray * data =
      (uwb_msgs__msg__RangeArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uwb_msgs__msg__RangeArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uwb_msgs__msg__RangeArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uwb_msgs__msg__RangeArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
