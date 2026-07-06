// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wifi_msgs:msg/DiagnosticsRSSI.idl
// generated code does not contain a copyright notice
#include "wifi_msgs/msg/detail/diagnostics_rssi__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wifi_msgs__msg__DiagnosticsRSSI__init(wifi_msgs__msg__DiagnosticsRSSI * msg)
{
  if (!msg) {
    return false;
  }
  // rssi
  // a
  // n
  return true;
}

void
wifi_msgs__msg__DiagnosticsRSSI__fini(wifi_msgs__msg__DiagnosticsRSSI * msg)
{
  if (!msg) {
    return;
  }
  // rssi
  // a
  // n
}

bool
wifi_msgs__msg__DiagnosticsRSSI__are_equal(const wifi_msgs__msg__DiagnosticsRSSI * lhs, const wifi_msgs__msg__DiagnosticsRSSI * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rssi
  if (lhs->rssi != rhs->rssi) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // n
  if (lhs->n != rhs->n) {
    return false;
  }
  return true;
}

bool
wifi_msgs__msg__DiagnosticsRSSI__copy(
  const wifi_msgs__msg__DiagnosticsRSSI * input,
  wifi_msgs__msg__DiagnosticsRSSI * output)
{
  if (!input || !output) {
    return false;
  }
  // rssi
  output->rssi = input->rssi;
  // a
  output->a = input->a;
  // n
  output->n = input->n;
  return true;
}

wifi_msgs__msg__DiagnosticsRSSI *
wifi_msgs__msg__DiagnosticsRSSI__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifi_msgs__msg__DiagnosticsRSSI * msg = (wifi_msgs__msg__DiagnosticsRSSI *)allocator.allocate(sizeof(wifi_msgs__msg__DiagnosticsRSSI), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wifi_msgs__msg__DiagnosticsRSSI));
  bool success = wifi_msgs__msg__DiagnosticsRSSI__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wifi_msgs__msg__DiagnosticsRSSI__destroy(wifi_msgs__msg__DiagnosticsRSSI * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wifi_msgs__msg__DiagnosticsRSSI__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wifi_msgs__msg__DiagnosticsRSSI__Sequence__init(wifi_msgs__msg__DiagnosticsRSSI__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifi_msgs__msg__DiagnosticsRSSI * data = NULL;

  if (size) {
    data = (wifi_msgs__msg__DiagnosticsRSSI *)allocator.zero_allocate(size, sizeof(wifi_msgs__msg__DiagnosticsRSSI), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wifi_msgs__msg__DiagnosticsRSSI__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wifi_msgs__msg__DiagnosticsRSSI__fini(&data[i - 1]);
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
wifi_msgs__msg__DiagnosticsRSSI__Sequence__fini(wifi_msgs__msg__DiagnosticsRSSI__Sequence * array)
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
      wifi_msgs__msg__DiagnosticsRSSI__fini(&array->data[i]);
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

wifi_msgs__msg__DiagnosticsRSSI__Sequence *
wifi_msgs__msg__DiagnosticsRSSI__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifi_msgs__msg__DiagnosticsRSSI__Sequence * array = (wifi_msgs__msg__DiagnosticsRSSI__Sequence *)allocator.allocate(sizeof(wifi_msgs__msg__DiagnosticsRSSI__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wifi_msgs__msg__DiagnosticsRSSI__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wifi_msgs__msg__DiagnosticsRSSI__Sequence__destroy(wifi_msgs__msg__DiagnosticsRSSI__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wifi_msgs__msg__DiagnosticsRSSI__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wifi_msgs__msg__DiagnosticsRSSI__Sequence__are_equal(const wifi_msgs__msg__DiagnosticsRSSI__Sequence * lhs, const wifi_msgs__msg__DiagnosticsRSSI__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wifi_msgs__msg__DiagnosticsRSSI__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wifi_msgs__msg__DiagnosticsRSSI__Sequence__copy(
  const wifi_msgs__msg__DiagnosticsRSSI__Sequence * input,
  wifi_msgs__msg__DiagnosticsRSSI__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wifi_msgs__msg__DiagnosticsRSSI);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wifi_msgs__msg__DiagnosticsRSSI * data =
      (wifi_msgs__msg__DiagnosticsRSSI *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wifi_msgs__msg__DiagnosticsRSSI__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wifi_msgs__msg__DiagnosticsRSSI__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wifi_msgs__msg__DiagnosticsRSSI__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
