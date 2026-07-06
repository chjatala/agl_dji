// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uwb_msgs:msg/Diagnostics.idl
// generated code does not contain a copyright notice
#include "uwb_msgs/msg/detail/diagnostics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cir_magnitude`
// Member `cir_phase`
// Member `cir_imag`
// Member `cir_real`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
uwb_msgs__msg__Diagnostics__init(uwb_msgs__msg__Diagnostics * msg)
{
  if (!msg) {
    return false;
  }
  // cir_power
  // cir_magnitude
  if (!rosidl_runtime_c__float__Sequence__init(&msg->cir_magnitude, 0)) {
    uwb_msgs__msg__Diagnostics__fini(msg);
    return false;
  }
  // cir_phase
  if (!rosidl_runtime_c__float__Sequence__init(&msg->cir_phase, 0)) {
    uwb_msgs__msg__Diagnostics__fini(msg);
    return false;
  }
  // cir_imag
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->cir_imag, 0)) {
    uwb_msgs__msg__Diagnostics__fini(msg);
    return false;
  }
  // cir_real
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->cir_real, 0)) {
    uwb_msgs__msg__Diagnostics__fini(msg);
    return false;
  }
  // preamble_count
  // fppl
  // rssi
  // index_fp
  // msgdelay_ms
  return true;
}

void
uwb_msgs__msg__Diagnostics__fini(uwb_msgs__msg__Diagnostics * msg)
{
  if (!msg) {
    return;
  }
  // cir_power
  // cir_magnitude
  rosidl_runtime_c__float__Sequence__fini(&msg->cir_magnitude);
  // cir_phase
  rosidl_runtime_c__float__Sequence__fini(&msg->cir_phase);
  // cir_imag
  rosidl_runtime_c__int16__Sequence__fini(&msg->cir_imag);
  // cir_real
  rosidl_runtime_c__int16__Sequence__fini(&msg->cir_real);
  // preamble_count
  // fppl
  // rssi
  // index_fp
  // msgdelay_ms
}

bool
uwb_msgs__msg__Diagnostics__are_equal(const uwb_msgs__msg__Diagnostics * lhs, const uwb_msgs__msg__Diagnostics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cir_power
  if (lhs->cir_power != rhs->cir_power) {
    return false;
  }
  // cir_magnitude
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->cir_magnitude), &(rhs->cir_magnitude)))
  {
    return false;
  }
  // cir_phase
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->cir_phase), &(rhs->cir_phase)))
  {
    return false;
  }
  // cir_imag
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->cir_imag), &(rhs->cir_imag)))
  {
    return false;
  }
  // cir_real
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->cir_real), &(rhs->cir_real)))
  {
    return false;
  }
  // preamble_count
  if (lhs->preamble_count != rhs->preamble_count) {
    return false;
  }
  // fppl
  if (lhs->fppl != rhs->fppl) {
    return false;
  }
  // rssi
  if (lhs->rssi != rhs->rssi) {
    return false;
  }
  // index_fp
  if (lhs->index_fp != rhs->index_fp) {
    return false;
  }
  // msgdelay_ms
  if (lhs->msgdelay_ms != rhs->msgdelay_ms) {
    return false;
  }
  return true;
}

bool
uwb_msgs__msg__Diagnostics__copy(
  const uwb_msgs__msg__Diagnostics * input,
  uwb_msgs__msg__Diagnostics * output)
{
  if (!input || !output) {
    return false;
  }
  // cir_power
  output->cir_power = input->cir_power;
  // cir_magnitude
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->cir_magnitude), &(output->cir_magnitude)))
  {
    return false;
  }
  // cir_phase
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->cir_phase), &(output->cir_phase)))
  {
    return false;
  }
  // cir_imag
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->cir_imag), &(output->cir_imag)))
  {
    return false;
  }
  // cir_real
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->cir_real), &(output->cir_real)))
  {
    return false;
  }
  // preamble_count
  output->preamble_count = input->preamble_count;
  // fppl
  output->fppl = input->fppl;
  // rssi
  output->rssi = input->rssi;
  // index_fp
  output->index_fp = input->index_fp;
  // msgdelay_ms
  output->msgdelay_ms = input->msgdelay_ms;
  return true;
}

uwb_msgs__msg__Diagnostics *
uwb_msgs__msg__Diagnostics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uwb_msgs__msg__Diagnostics * msg = (uwb_msgs__msg__Diagnostics *)allocator.allocate(sizeof(uwb_msgs__msg__Diagnostics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uwb_msgs__msg__Diagnostics));
  bool success = uwb_msgs__msg__Diagnostics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uwb_msgs__msg__Diagnostics__destroy(uwb_msgs__msg__Diagnostics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uwb_msgs__msg__Diagnostics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uwb_msgs__msg__Diagnostics__Sequence__init(uwb_msgs__msg__Diagnostics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uwb_msgs__msg__Diagnostics * data = NULL;

  if (size) {
    data = (uwb_msgs__msg__Diagnostics *)allocator.zero_allocate(size, sizeof(uwb_msgs__msg__Diagnostics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uwb_msgs__msg__Diagnostics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uwb_msgs__msg__Diagnostics__fini(&data[i - 1]);
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
uwb_msgs__msg__Diagnostics__Sequence__fini(uwb_msgs__msg__Diagnostics__Sequence * array)
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
      uwb_msgs__msg__Diagnostics__fini(&array->data[i]);
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

uwb_msgs__msg__Diagnostics__Sequence *
uwb_msgs__msg__Diagnostics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uwb_msgs__msg__Diagnostics__Sequence * array = (uwb_msgs__msg__Diagnostics__Sequence *)allocator.allocate(sizeof(uwb_msgs__msg__Diagnostics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uwb_msgs__msg__Diagnostics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uwb_msgs__msg__Diagnostics__Sequence__destroy(uwb_msgs__msg__Diagnostics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uwb_msgs__msg__Diagnostics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uwb_msgs__msg__Diagnostics__Sequence__are_equal(const uwb_msgs__msg__Diagnostics__Sequence * lhs, const uwb_msgs__msg__Diagnostics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uwb_msgs__msg__Diagnostics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uwb_msgs__msg__Diagnostics__Sequence__copy(
  const uwb_msgs__msg__Diagnostics__Sequence * input,
  uwb_msgs__msg__Diagnostics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uwb_msgs__msg__Diagnostics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uwb_msgs__msg__Diagnostics * data =
      (uwb_msgs__msg__Diagnostics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uwb_msgs__msg__Diagnostics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uwb_msgs__msg__Diagnostics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uwb_msgs__msg__Diagnostics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
