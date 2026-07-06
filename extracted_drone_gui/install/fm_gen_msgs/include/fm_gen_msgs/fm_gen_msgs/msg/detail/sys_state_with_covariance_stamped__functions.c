// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fm_gen_msgs:msg/SysStateWithCovarianceStamped.idl
// generated code does not contain a copyright notice
#include "fm_gen_msgs/msg/detail/sys_state_with_covariance_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `state_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `state`
// Member `covariance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
fm_gen_msgs__msg__SysStateWithCovarianceStamped__init(fm_gen_msgs__msg__SysStateWithCovarianceStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fm_gen_msgs__msg__SysStateWithCovarianceStamped__fini(msg);
    return false;
  }
  // dim
  // state_name
  if (!rosidl_runtime_c__String__Sequence__init(&msg->state_name, 0)) {
    fm_gen_msgs__msg__SysStateWithCovarianceStamped__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__double__Sequence__init(&msg->state, 0)) {
    fm_gen_msgs__msg__SysStateWithCovarianceStamped__fini(msg);
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__init(&msg->covariance, 0)) {
    fm_gen_msgs__msg__SysStateWithCovarianceStamped__fini(msg);
    return false;
  }
  return true;
}

void
fm_gen_msgs__msg__SysStateWithCovarianceStamped__fini(fm_gen_msgs__msg__SysStateWithCovarianceStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // dim
  // state_name
  rosidl_runtime_c__String__Sequence__fini(&msg->state_name);
  // state
  rosidl_runtime_c__double__Sequence__fini(&msg->state);
  // covariance
  rosidl_runtime_c__double__Sequence__fini(&msg->covariance);
}

bool
fm_gen_msgs__msg__SysStateWithCovarianceStamped__are_equal(const fm_gen_msgs__msg__SysStateWithCovarianceStamped * lhs, const fm_gen_msgs__msg__SysStateWithCovarianceStamped * rhs)
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
  // dim
  if (lhs->dim != rhs->dim) {
    return false;
  }
  // state_name
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->state_name), &(rhs->state_name)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->covariance), &(rhs->covariance)))
  {
    return false;
  }
  return true;
}

bool
fm_gen_msgs__msg__SysStateWithCovarianceStamped__copy(
  const fm_gen_msgs__msg__SysStateWithCovarianceStamped * input,
  fm_gen_msgs__msg__SysStateWithCovarianceStamped * output)
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
  // dim
  output->dim = input->dim;
  // state_name
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->state_name), &(output->state_name)))
  {
    return false;
  }
  // state
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // covariance
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->covariance), &(output->covariance)))
  {
    return false;
  }
  return true;
}

fm_gen_msgs__msg__SysStateWithCovarianceStamped *
fm_gen_msgs__msg__SysStateWithCovarianceStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__SysStateWithCovarianceStamped * msg = (fm_gen_msgs__msg__SysStateWithCovarianceStamped *)allocator.allocate(sizeof(fm_gen_msgs__msg__SysStateWithCovarianceStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fm_gen_msgs__msg__SysStateWithCovarianceStamped));
  bool success = fm_gen_msgs__msg__SysStateWithCovarianceStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fm_gen_msgs__msg__SysStateWithCovarianceStamped__destroy(fm_gen_msgs__msg__SysStateWithCovarianceStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fm_gen_msgs__msg__SysStateWithCovarianceStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence__init(fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__SysStateWithCovarianceStamped * data = NULL;

  if (size) {
    data = (fm_gen_msgs__msg__SysStateWithCovarianceStamped *)allocator.zero_allocate(size, sizeof(fm_gen_msgs__msg__SysStateWithCovarianceStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fm_gen_msgs__msg__SysStateWithCovarianceStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fm_gen_msgs__msg__SysStateWithCovarianceStamped__fini(&data[i - 1]);
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
fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence__fini(fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence * array)
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
      fm_gen_msgs__msg__SysStateWithCovarianceStamped__fini(&array->data[i]);
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

fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence *
fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence * array = (fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence *)allocator.allocate(sizeof(fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence__destroy(fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence__are_equal(const fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence * lhs, const fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fm_gen_msgs__msg__SysStateWithCovarianceStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence__copy(
  const fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence * input,
  fm_gen_msgs__msg__SysStateWithCovarianceStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fm_gen_msgs__msg__SysStateWithCovarianceStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fm_gen_msgs__msg__SysStateWithCovarianceStamped * data =
      (fm_gen_msgs__msg__SysStateWithCovarianceStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fm_gen_msgs__msg__SysStateWithCovarianceStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fm_gen_msgs__msg__SysStateWithCovarianceStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fm_gen_msgs__msg__SysStateWithCovarianceStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
