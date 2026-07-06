// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fm_gen_msgs:msg/DiagnosticStatus.idl
// generated code does not contain a copyright notice
#include "fm_gen_msgs/msg/detail/diagnostic_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `diagnoiser_name`
// Member `message`
// Member `component_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `values`
#include "fm_gen_msgs/msg/detail/key_value__functions.h"

bool
fm_gen_msgs__msg__DiagnosticStatus__init(fm_gen_msgs__msg__DiagnosticStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fm_gen_msgs__msg__DiagnosticStatus__fini(msg);
    return false;
  }
  // level
  // diagnoiser_name
  if (!rosidl_runtime_c__String__init(&msg->diagnoiser_name)) {
    fm_gen_msgs__msg__DiagnosticStatus__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    fm_gen_msgs__msg__DiagnosticStatus__fini(msg);
    return false;
  }
  // component_id
  if (!rosidl_runtime_c__String__init(&msg->component_id)) {
    fm_gen_msgs__msg__DiagnosticStatus__fini(msg);
    return false;
  }
  // num_status
  // values
  if (!fm_gen_msgs__msg__KeyValue__Sequence__init(&msg->values, 0)) {
    fm_gen_msgs__msg__DiagnosticStatus__fini(msg);
    return false;
  }
  return true;
}

void
fm_gen_msgs__msg__DiagnosticStatus__fini(fm_gen_msgs__msg__DiagnosticStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // level
  // diagnoiser_name
  rosidl_runtime_c__String__fini(&msg->diagnoiser_name);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // component_id
  rosidl_runtime_c__String__fini(&msg->component_id);
  // num_status
  // values
  fm_gen_msgs__msg__KeyValue__Sequence__fini(&msg->values);
}

bool
fm_gen_msgs__msg__DiagnosticStatus__are_equal(const fm_gen_msgs__msg__DiagnosticStatus * lhs, const fm_gen_msgs__msg__DiagnosticStatus * rhs)
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
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  // diagnoiser_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->diagnoiser_name), &(rhs->diagnoiser_name)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // component_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->component_id), &(rhs->component_id)))
  {
    return false;
  }
  // num_status
  if (lhs->num_status != rhs->num_status) {
    return false;
  }
  // values
  if (!fm_gen_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->values), &(rhs->values)))
  {
    return false;
  }
  return true;
}

bool
fm_gen_msgs__msg__DiagnosticStatus__copy(
  const fm_gen_msgs__msg__DiagnosticStatus * input,
  fm_gen_msgs__msg__DiagnosticStatus * output)
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
  // level
  output->level = input->level;
  // diagnoiser_name
  if (!rosidl_runtime_c__String__copy(
      &(input->diagnoiser_name), &(output->diagnoiser_name)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // component_id
  if (!rosidl_runtime_c__String__copy(
      &(input->component_id), &(output->component_id)))
  {
    return false;
  }
  // num_status
  output->num_status = input->num_status;
  // values
  if (!fm_gen_msgs__msg__KeyValue__Sequence__copy(
      &(input->values), &(output->values)))
  {
    return false;
  }
  return true;
}

fm_gen_msgs__msg__DiagnosticStatus *
fm_gen_msgs__msg__DiagnosticStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__DiagnosticStatus * msg = (fm_gen_msgs__msg__DiagnosticStatus *)allocator.allocate(sizeof(fm_gen_msgs__msg__DiagnosticStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fm_gen_msgs__msg__DiagnosticStatus));
  bool success = fm_gen_msgs__msg__DiagnosticStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fm_gen_msgs__msg__DiagnosticStatus__destroy(fm_gen_msgs__msg__DiagnosticStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fm_gen_msgs__msg__DiagnosticStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fm_gen_msgs__msg__DiagnosticStatus__Sequence__init(fm_gen_msgs__msg__DiagnosticStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__DiagnosticStatus * data = NULL;

  if (size) {
    data = (fm_gen_msgs__msg__DiagnosticStatus *)allocator.zero_allocate(size, sizeof(fm_gen_msgs__msg__DiagnosticStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fm_gen_msgs__msg__DiagnosticStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fm_gen_msgs__msg__DiagnosticStatus__fini(&data[i - 1]);
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
fm_gen_msgs__msg__DiagnosticStatus__Sequence__fini(fm_gen_msgs__msg__DiagnosticStatus__Sequence * array)
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
      fm_gen_msgs__msg__DiagnosticStatus__fini(&array->data[i]);
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

fm_gen_msgs__msg__DiagnosticStatus__Sequence *
fm_gen_msgs__msg__DiagnosticStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__DiagnosticStatus__Sequence * array = (fm_gen_msgs__msg__DiagnosticStatus__Sequence *)allocator.allocate(sizeof(fm_gen_msgs__msg__DiagnosticStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fm_gen_msgs__msg__DiagnosticStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fm_gen_msgs__msg__DiagnosticStatus__Sequence__destroy(fm_gen_msgs__msg__DiagnosticStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fm_gen_msgs__msg__DiagnosticStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fm_gen_msgs__msg__DiagnosticStatus__Sequence__are_equal(const fm_gen_msgs__msg__DiagnosticStatus__Sequence * lhs, const fm_gen_msgs__msg__DiagnosticStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fm_gen_msgs__msg__DiagnosticStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fm_gen_msgs__msg__DiagnosticStatus__Sequence__copy(
  const fm_gen_msgs__msg__DiagnosticStatus__Sequence * input,
  fm_gen_msgs__msg__DiagnosticStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fm_gen_msgs__msg__DiagnosticStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fm_gen_msgs__msg__DiagnosticStatus * data =
      (fm_gen_msgs__msg__DiagnosticStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fm_gen_msgs__msg__DiagnosticStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fm_gen_msgs__msg__DiagnosticStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fm_gen_msgs__msg__DiagnosticStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
