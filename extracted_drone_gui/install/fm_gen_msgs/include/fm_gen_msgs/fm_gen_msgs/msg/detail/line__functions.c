// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fm_gen_msgs:msg/Line.idl
// generated code does not contain a copyright notice
#include "fm_gen_msgs/msg/detail/line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `line_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `line_1`
// Member `line_2`
// Member `line_c`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
fm_gen_msgs__msg__Line__init(fm_gen_msgs__msg__Line * msg)
{
  if (!msg) {
    return false;
  }
  // line_type
  if (!rosidl_runtime_c__String__init(&msg->line_type)) {
    fm_gen_msgs__msg__Line__fini(msg);
    return false;
  }
  // certainty
  // line_1
  if (!rosidl_runtime_c__float__Sequence__init(&msg->line_1, 0)) {
    fm_gen_msgs__msg__Line__fini(msg);
    return false;
  }
  // line_2
  if (!rosidl_runtime_c__float__Sequence__init(&msg->line_2, 0)) {
    fm_gen_msgs__msg__Line__fini(msg);
    return false;
  }
  // line_c
  if (!rosidl_runtime_c__float__Sequence__init(&msg->line_c, 0)) {
    fm_gen_msgs__msg__Line__fini(msg);
    return false;
  }
  return true;
}

void
fm_gen_msgs__msg__Line__fini(fm_gen_msgs__msg__Line * msg)
{
  if (!msg) {
    return;
  }
  // line_type
  rosidl_runtime_c__String__fini(&msg->line_type);
  // certainty
  // line_1
  rosidl_runtime_c__float__Sequence__fini(&msg->line_1);
  // line_2
  rosidl_runtime_c__float__Sequence__fini(&msg->line_2);
  // line_c
  rosidl_runtime_c__float__Sequence__fini(&msg->line_c);
}

bool
fm_gen_msgs__msg__Line__are_equal(const fm_gen_msgs__msg__Line * lhs, const fm_gen_msgs__msg__Line * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // line_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->line_type), &(rhs->line_type)))
  {
    return false;
  }
  // certainty
  if (lhs->certainty != rhs->certainty) {
    return false;
  }
  // line_1
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->line_1), &(rhs->line_1)))
  {
    return false;
  }
  // line_2
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->line_2), &(rhs->line_2)))
  {
    return false;
  }
  // line_c
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->line_c), &(rhs->line_c)))
  {
    return false;
  }
  return true;
}

bool
fm_gen_msgs__msg__Line__copy(
  const fm_gen_msgs__msg__Line * input,
  fm_gen_msgs__msg__Line * output)
{
  if (!input || !output) {
    return false;
  }
  // line_type
  if (!rosidl_runtime_c__String__copy(
      &(input->line_type), &(output->line_type)))
  {
    return false;
  }
  // certainty
  output->certainty = input->certainty;
  // line_1
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->line_1), &(output->line_1)))
  {
    return false;
  }
  // line_2
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->line_2), &(output->line_2)))
  {
    return false;
  }
  // line_c
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->line_c), &(output->line_c)))
  {
    return false;
  }
  return true;
}

fm_gen_msgs__msg__Line *
fm_gen_msgs__msg__Line__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__Line * msg = (fm_gen_msgs__msg__Line *)allocator.allocate(sizeof(fm_gen_msgs__msg__Line), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fm_gen_msgs__msg__Line));
  bool success = fm_gen_msgs__msg__Line__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fm_gen_msgs__msg__Line__destroy(fm_gen_msgs__msg__Line * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fm_gen_msgs__msg__Line__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fm_gen_msgs__msg__Line__Sequence__init(fm_gen_msgs__msg__Line__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__Line * data = NULL;

  if (size) {
    data = (fm_gen_msgs__msg__Line *)allocator.zero_allocate(size, sizeof(fm_gen_msgs__msg__Line), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fm_gen_msgs__msg__Line__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fm_gen_msgs__msg__Line__fini(&data[i - 1]);
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
fm_gen_msgs__msg__Line__Sequence__fini(fm_gen_msgs__msg__Line__Sequence * array)
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
      fm_gen_msgs__msg__Line__fini(&array->data[i]);
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

fm_gen_msgs__msg__Line__Sequence *
fm_gen_msgs__msg__Line__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__Line__Sequence * array = (fm_gen_msgs__msg__Line__Sequence *)allocator.allocate(sizeof(fm_gen_msgs__msg__Line__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fm_gen_msgs__msg__Line__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fm_gen_msgs__msg__Line__Sequence__destroy(fm_gen_msgs__msg__Line__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fm_gen_msgs__msg__Line__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fm_gen_msgs__msg__Line__Sequence__are_equal(const fm_gen_msgs__msg__Line__Sequence * lhs, const fm_gen_msgs__msg__Line__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fm_gen_msgs__msg__Line__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fm_gen_msgs__msg__Line__Sequence__copy(
  const fm_gen_msgs__msg__Line__Sequence * input,
  fm_gen_msgs__msg__Line__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fm_gen_msgs__msg__Line);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fm_gen_msgs__msg__Line * data =
      (fm_gen_msgs__msg__Line *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fm_gen_msgs__msg__Line__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fm_gen_msgs__msg__Line__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fm_gen_msgs__msg__Line__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
