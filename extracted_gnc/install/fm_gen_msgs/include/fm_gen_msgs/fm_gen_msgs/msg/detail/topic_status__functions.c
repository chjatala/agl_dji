// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fm_gen_msgs:msg/TopicStatus.idl
// generated code does not contain a copyright notice
#include "fm_gen_msgs/msg/detail/topic_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `topic_name`
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"
// Member `error_code`
// Member `error_value`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
fm_gen_msgs__msg__TopicStatus__init(fm_gen_msgs__msg__TopicStatus * msg)
{
  if (!msg) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__init(&msg->topic_name)) {
    fm_gen_msgs__msg__TopicStatus__fini(msg);
    return false;
  }
  // topic_is_ok
  // error_message
  if (!rosidl_runtime_c__String__Sequence__init(&msg->error_message, 0)) {
    fm_gen_msgs__msg__TopicStatus__fini(msg);
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->error_code, 0)) {
    fm_gen_msgs__msg__TopicStatus__fini(msg);
    return false;
  }
  // error_value
  if (!rosidl_runtime_c__double__Sequence__init(&msg->error_value, 0)) {
    fm_gen_msgs__msg__TopicStatus__fini(msg);
    return false;
  }
  return true;
}

void
fm_gen_msgs__msg__TopicStatus__fini(fm_gen_msgs__msg__TopicStatus * msg)
{
  if (!msg) {
    return;
  }
  // topic_name
  rosidl_runtime_c__String__fini(&msg->topic_name);
  // topic_is_ok
  // error_message
  rosidl_runtime_c__String__Sequence__fini(&msg->error_message);
  // error_code
  rosidl_runtime_c__uint32__Sequence__fini(&msg->error_code);
  // error_value
  rosidl_runtime_c__double__Sequence__fini(&msg->error_value);
}

bool
fm_gen_msgs__msg__TopicStatus__are_equal(const fm_gen_msgs__msg__TopicStatus * lhs, const fm_gen_msgs__msg__TopicStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic_name), &(rhs->topic_name)))
  {
    return false;
  }
  // topic_is_ok
  if (lhs->topic_is_ok != rhs->topic_is_ok) {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->error_code), &(rhs->error_code)))
  {
    return false;
  }
  // error_value
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->error_value), &(rhs->error_value)))
  {
    return false;
  }
  return true;
}

bool
fm_gen_msgs__msg__TopicStatus__copy(
  const fm_gen_msgs__msg__TopicStatus * input,
  fm_gen_msgs__msg__TopicStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // topic_name
  if (!rosidl_runtime_c__String__copy(
      &(input->topic_name), &(output->topic_name)))
  {
    return false;
  }
  // topic_is_ok
  output->topic_is_ok = input->topic_is_ok;
  // error_message
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->error_code), &(output->error_code)))
  {
    return false;
  }
  // error_value
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->error_value), &(output->error_value)))
  {
    return false;
  }
  return true;
}

fm_gen_msgs__msg__TopicStatus *
fm_gen_msgs__msg__TopicStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__TopicStatus * msg = (fm_gen_msgs__msg__TopicStatus *)allocator.allocate(sizeof(fm_gen_msgs__msg__TopicStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fm_gen_msgs__msg__TopicStatus));
  bool success = fm_gen_msgs__msg__TopicStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fm_gen_msgs__msg__TopicStatus__destroy(fm_gen_msgs__msg__TopicStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fm_gen_msgs__msg__TopicStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fm_gen_msgs__msg__TopicStatus__Sequence__init(fm_gen_msgs__msg__TopicStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__TopicStatus * data = NULL;

  if (size) {
    data = (fm_gen_msgs__msg__TopicStatus *)allocator.zero_allocate(size, sizeof(fm_gen_msgs__msg__TopicStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fm_gen_msgs__msg__TopicStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fm_gen_msgs__msg__TopicStatus__fini(&data[i - 1]);
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
fm_gen_msgs__msg__TopicStatus__Sequence__fini(fm_gen_msgs__msg__TopicStatus__Sequence * array)
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
      fm_gen_msgs__msg__TopicStatus__fini(&array->data[i]);
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

fm_gen_msgs__msg__TopicStatus__Sequence *
fm_gen_msgs__msg__TopicStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__TopicStatus__Sequence * array = (fm_gen_msgs__msg__TopicStatus__Sequence *)allocator.allocate(sizeof(fm_gen_msgs__msg__TopicStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fm_gen_msgs__msg__TopicStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fm_gen_msgs__msg__TopicStatus__Sequence__destroy(fm_gen_msgs__msg__TopicStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fm_gen_msgs__msg__TopicStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fm_gen_msgs__msg__TopicStatus__Sequence__are_equal(const fm_gen_msgs__msg__TopicStatus__Sequence * lhs, const fm_gen_msgs__msg__TopicStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fm_gen_msgs__msg__TopicStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fm_gen_msgs__msg__TopicStatus__Sequence__copy(
  const fm_gen_msgs__msg__TopicStatus__Sequence * input,
  fm_gen_msgs__msg__TopicStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fm_gen_msgs__msg__TopicStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fm_gen_msgs__msg__TopicStatus * data =
      (fm_gen_msgs__msg__TopicStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fm_gen_msgs__msg__TopicStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fm_gen_msgs__msg__TopicStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fm_gen_msgs__msg__TopicStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
