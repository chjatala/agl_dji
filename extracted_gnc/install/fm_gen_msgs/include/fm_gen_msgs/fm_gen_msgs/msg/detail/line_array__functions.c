// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fm_gen_msgs:msg/LineArray.idl
// generated code does not contain a copyright notice
#include "fm_gen_msgs/msg/detail/line_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `camera_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `lines`
#include "fm_gen_msgs/msg/detail/line__functions.h"

bool
fm_gen_msgs__msg__LineArray__init(fm_gen_msgs__msg__LineArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fm_gen_msgs__msg__LineArray__fini(msg);
    return false;
  }
  // num_detection
  // camera_id
  if (!rosidl_runtime_c__String__init(&msg->camera_id)) {
    fm_gen_msgs__msg__LineArray__fini(msg);
    return false;
  }
  // time_captured
  // lines
  if (!fm_gen_msgs__msg__Line__Sequence__init(&msg->lines, 0)) {
    fm_gen_msgs__msg__LineArray__fini(msg);
    return false;
  }
  return true;
}

void
fm_gen_msgs__msg__LineArray__fini(fm_gen_msgs__msg__LineArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // num_detection
  // camera_id
  rosidl_runtime_c__String__fini(&msg->camera_id);
  // time_captured
  // lines
  fm_gen_msgs__msg__Line__Sequence__fini(&msg->lines);
}

bool
fm_gen_msgs__msg__LineArray__are_equal(const fm_gen_msgs__msg__LineArray * lhs, const fm_gen_msgs__msg__LineArray * rhs)
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
  // num_detection
  if (lhs->num_detection != rhs->num_detection) {
    return false;
  }
  // camera_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->camera_id), &(rhs->camera_id)))
  {
    return false;
  }
  // time_captured
  if (lhs->time_captured != rhs->time_captured) {
    return false;
  }
  // lines
  if (!fm_gen_msgs__msg__Line__Sequence__are_equal(
      &(lhs->lines), &(rhs->lines)))
  {
    return false;
  }
  return true;
}

bool
fm_gen_msgs__msg__LineArray__copy(
  const fm_gen_msgs__msg__LineArray * input,
  fm_gen_msgs__msg__LineArray * output)
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
  // num_detection
  output->num_detection = input->num_detection;
  // camera_id
  if (!rosidl_runtime_c__String__copy(
      &(input->camera_id), &(output->camera_id)))
  {
    return false;
  }
  // time_captured
  output->time_captured = input->time_captured;
  // lines
  if (!fm_gen_msgs__msg__Line__Sequence__copy(
      &(input->lines), &(output->lines)))
  {
    return false;
  }
  return true;
}

fm_gen_msgs__msg__LineArray *
fm_gen_msgs__msg__LineArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__LineArray * msg = (fm_gen_msgs__msg__LineArray *)allocator.allocate(sizeof(fm_gen_msgs__msg__LineArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fm_gen_msgs__msg__LineArray));
  bool success = fm_gen_msgs__msg__LineArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fm_gen_msgs__msg__LineArray__destroy(fm_gen_msgs__msg__LineArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fm_gen_msgs__msg__LineArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fm_gen_msgs__msg__LineArray__Sequence__init(fm_gen_msgs__msg__LineArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__LineArray * data = NULL;

  if (size) {
    data = (fm_gen_msgs__msg__LineArray *)allocator.zero_allocate(size, sizeof(fm_gen_msgs__msg__LineArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fm_gen_msgs__msg__LineArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fm_gen_msgs__msg__LineArray__fini(&data[i - 1]);
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
fm_gen_msgs__msg__LineArray__Sequence__fini(fm_gen_msgs__msg__LineArray__Sequence * array)
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
      fm_gen_msgs__msg__LineArray__fini(&array->data[i]);
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

fm_gen_msgs__msg__LineArray__Sequence *
fm_gen_msgs__msg__LineArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__LineArray__Sequence * array = (fm_gen_msgs__msg__LineArray__Sequence *)allocator.allocate(sizeof(fm_gen_msgs__msg__LineArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fm_gen_msgs__msg__LineArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fm_gen_msgs__msg__LineArray__Sequence__destroy(fm_gen_msgs__msg__LineArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fm_gen_msgs__msg__LineArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fm_gen_msgs__msg__LineArray__Sequence__are_equal(const fm_gen_msgs__msg__LineArray__Sequence * lhs, const fm_gen_msgs__msg__LineArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fm_gen_msgs__msg__LineArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fm_gen_msgs__msg__LineArray__Sequence__copy(
  const fm_gen_msgs__msg__LineArray__Sequence * input,
  fm_gen_msgs__msg__LineArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fm_gen_msgs__msg__LineArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fm_gen_msgs__msg__LineArray * data =
      (fm_gen_msgs__msg__LineArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fm_gen_msgs__msg__LineArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fm_gen_msgs__msg__LineArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fm_gen_msgs__msg__LineArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
