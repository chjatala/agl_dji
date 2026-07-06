// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wifi_msgs:msg/RangeRTT.idl
// generated code does not contain a copyright notice
#include "wifi_msgs/msg/detail/range_rtt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `ap_mac`
#include "rosidl_runtime_c/string_functions.h"
// Member `ap_position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `diagnostics`
#include "wifi_msgs/msg/detail/diagnostics_rtt__functions.h"

bool
wifi_msgs__msg__RangeRTT__init(wifi_msgs__msg__RangeRTT * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    wifi_msgs__msg__RangeRTT__fini(msg);
    return false;
  }
  // ap_mac
  if (!rosidl_runtime_c__String__init(&msg->ap_mac)) {
    wifi_msgs__msg__RangeRTT__fini(msg);
    return false;
  }
  // valid_ap_position
  // ap_position
  if (!geometry_msgs__msg__Point__init(&msg->ap_position)) {
    wifi_msgs__msg__RangeRTT__fini(msg);
    return false;
  }
  // valid_range
  // distance
  // diagnostics
  if (!wifi_msgs__msg__DiagnosticsRTT__init(&msg->diagnostics)) {
    wifi_msgs__msg__RangeRTT__fini(msg);
    return false;
  }
  return true;
}

void
wifi_msgs__msg__RangeRTT__fini(wifi_msgs__msg__RangeRTT * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // ap_mac
  rosidl_runtime_c__String__fini(&msg->ap_mac);
  // valid_ap_position
  // ap_position
  geometry_msgs__msg__Point__fini(&msg->ap_position);
  // valid_range
  // distance
  // diagnostics
  wifi_msgs__msg__DiagnosticsRTT__fini(&msg->diagnostics);
}

bool
wifi_msgs__msg__RangeRTT__are_equal(const wifi_msgs__msg__RangeRTT * lhs, const wifi_msgs__msg__RangeRTT * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  // ap_mac
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ap_mac), &(rhs->ap_mac)))
  {
    return false;
  }
  // valid_ap_position
  if (lhs->valid_ap_position != rhs->valid_ap_position) {
    return false;
  }
  // ap_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->ap_position), &(rhs->ap_position)))
  {
    return false;
  }
  // valid_range
  if (lhs->valid_range != rhs->valid_range) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // diagnostics
  if (!wifi_msgs__msg__DiagnosticsRTT__are_equal(
      &(lhs->diagnostics), &(rhs->diagnostics)))
  {
    return false;
  }
  return true;
}

bool
wifi_msgs__msg__RangeRTT__copy(
  const wifi_msgs__msg__RangeRTT * input,
  wifi_msgs__msg__RangeRTT * output)
{
  if (!input || !output) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  // ap_mac
  if (!rosidl_runtime_c__String__copy(
      &(input->ap_mac), &(output->ap_mac)))
  {
    return false;
  }
  // valid_ap_position
  output->valid_ap_position = input->valid_ap_position;
  // ap_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->ap_position), &(output->ap_position)))
  {
    return false;
  }
  // valid_range
  output->valid_range = input->valid_range;
  // distance
  output->distance = input->distance;
  // diagnostics
  if (!wifi_msgs__msg__DiagnosticsRTT__copy(
      &(input->diagnostics), &(output->diagnostics)))
  {
    return false;
  }
  return true;
}

wifi_msgs__msg__RangeRTT *
wifi_msgs__msg__RangeRTT__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifi_msgs__msg__RangeRTT * msg = (wifi_msgs__msg__RangeRTT *)allocator.allocate(sizeof(wifi_msgs__msg__RangeRTT), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wifi_msgs__msg__RangeRTT));
  bool success = wifi_msgs__msg__RangeRTT__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wifi_msgs__msg__RangeRTT__destroy(wifi_msgs__msg__RangeRTT * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wifi_msgs__msg__RangeRTT__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wifi_msgs__msg__RangeRTT__Sequence__init(wifi_msgs__msg__RangeRTT__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifi_msgs__msg__RangeRTT * data = NULL;

  if (size) {
    data = (wifi_msgs__msg__RangeRTT *)allocator.zero_allocate(size, sizeof(wifi_msgs__msg__RangeRTT), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wifi_msgs__msg__RangeRTT__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wifi_msgs__msg__RangeRTT__fini(&data[i - 1]);
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
wifi_msgs__msg__RangeRTT__Sequence__fini(wifi_msgs__msg__RangeRTT__Sequence * array)
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
      wifi_msgs__msg__RangeRTT__fini(&array->data[i]);
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

wifi_msgs__msg__RangeRTT__Sequence *
wifi_msgs__msg__RangeRTT__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifi_msgs__msg__RangeRTT__Sequence * array = (wifi_msgs__msg__RangeRTT__Sequence *)allocator.allocate(sizeof(wifi_msgs__msg__RangeRTT__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wifi_msgs__msg__RangeRTT__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wifi_msgs__msg__RangeRTT__Sequence__destroy(wifi_msgs__msg__RangeRTT__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wifi_msgs__msg__RangeRTT__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wifi_msgs__msg__RangeRTT__Sequence__are_equal(const wifi_msgs__msg__RangeRTT__Sequence * lhs, const wifi_msgs__msg__RangeRTT__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wifi_msgs__msg__RangeRTT__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wifi_msgs__msg__RangeRTT__Sequence__copy(
  const wifi_msgs__msg__RangeRTT__Sequence * input,
  wifi_msgs__msg__RangeRTT__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wifi_msgs__msg__RangeRTT);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wifi_msgs__msg__RangeRTT * data =
      (wifi_msgs__msg__RangeRTT *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wifi_msgs__msg__RangeRTT__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wifi_msgs__msg__RangeRTT__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wifi_msgs__msg__RangeRTT__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
