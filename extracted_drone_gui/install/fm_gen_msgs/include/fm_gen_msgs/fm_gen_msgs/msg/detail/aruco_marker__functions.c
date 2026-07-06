// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fm_gen_msgs:msg/ArucoMarker.idl
// generated code does not contain a copyright notice
#include "fm_gen_msgs/msg/detail/aruco_marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `corner`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
fm_gen_msgs__msg__ArucoMarker__init(fm_gen_msgs__msg__ArucoMarker * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // corner
  if (!rosidl_runtime_c__float__Sequence__init(&msg->corner, 0)) {
    fm_gen_msgs__msg__ArucoMarker__fini(msg);
    return false;
  }
  return true;
}

void
fm_gen_msgs__msg__ArucoMarker__fini(fm_gen_msgs__msg__ArucoMarker * msg)
{
  if (!msg) {
    return;
  }
  // id
  // corner
  rosidl_runtime_c__float__Sequence__fini(&msg->corner);
}

bool
fm_gen_msgs__msg__ArucoMarker__are_equal(const fm_gen_msgs__msg__ArucoMarker * lhs, const fm_gen_msgs__msg__ArucoMarker * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // corner
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->corner), &(rhs->corner)))
  {
    return false;
  }
  return true;
}

bool
fm_gen_msgs__msg__ArucoMarker__copy(
  const fm_gen_msgs__msg__ArucoMarker * input,
  fm_gen_msgs__msg__ArucoMarker * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // corner
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->corner), &(output->corner)))
  {
    return false;
  }
  return true;
}

fm_gen_msgs__msg__ArucoMarker *
fm_gen_msgs__msg__ArucoMarker__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__ArucoMarker * msg = (fm_gen_msgs__msg__ArucoMarker *)allocator.allocate(sizeof(fm_gen_msgs__msg__ArucoMarker), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fm_gen_msgs__msg__ArucoMarker));
  bool success = fm_gen_msgs__msg__ArucoMarker__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fm_gen_msgs__msg__ArucoMarker__destroy(fm_gen_msgs__msg__ArucoMarker * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fm_gen_msgs__msg__ArucoMarker__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fm_gen_msgs__msg__ArucoMarker__Sequence__init(fm_gen_msgs__msg__ArucoMarker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__ArucoMarker * data = NULL;

  if (size) {
    data = (fm_gen_msgs__msg__ArucoMarker *)allocator.zero_allocate(size, sizeof(fm_gen_msgs__msg__ArucoMarker), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fm_gen_msgs__msg__ArucoMarker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fm_gen_msgs__msg__ArucoMarker__fini(&data[i - 1]);
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
fm_gen_msgs__msg__ArucoMarker__Sequence__fini(fm_gen_msgs__msg__ArucoMarker__Sequence * array)
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
      fm_gen_msgs__msg__ArucoMarker__fini(&array->data[i]);
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

fm_gen_msgs__msg__ArucoMarker__Sequence *
fm_gen_msgs__msg__ArucoMarker__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__ArucoMarker__Sequence * array = (fm_gen_msgs__msg__ArucoMarker__Sequence *)allocator.allocate(sizeof(fm_gen_msgs__msg__ArucoMarker__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fm_gen_msgs__msg__ArucoMarker__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fm_gen_msgs__msg__ArucoMarker__Sequence__destroy(fm_gen_msgs__msg__ArucoMarker__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fm_gen_msgs__msg__ArucoMarker__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fm_gen_msgs__msg__ArucoMarker__Sequence__are_equal(const fm_gen_msgs__msg__ArucoMarker__Sequence * lhs, const fm_gen_msgs__msg__ArucoMarker__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fm_gen_msgs__msg__ArucoMarker__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fm_gen_msgs__msg__ArucoMarker__Sequence__copy(
  const fm_gen_msgs__msg__ArucoMarker__Sequence * input,
  fm_gen_msgs__msg__ArucoMarker__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fm_gen_msgs__msg__ArucoMarker);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fm_gen_msgs__msg__ArucoMarker * data =
      (fm_gen_msgs__msg__ArucoMarker *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fm_gen_msgs__msg__ArucoMarker__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fm_gen_msgs__msg__ArucoMarker__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fm_gen_msgs__msg__ArucoMarker__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
