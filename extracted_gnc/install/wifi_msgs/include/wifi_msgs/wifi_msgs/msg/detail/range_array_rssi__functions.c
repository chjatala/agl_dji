// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wifi_msgs:msg/RangeArrayRSSI.idl
// generated code does not contain a copyright notice
#include "wifi_msgs/msg/detail/range_array_rssi__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `tag_mac`
#include "rosidl_runtime_c/string_functions.h"
// Member `tag_position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `ranges`
#include "wifi_msgs/msg/detail/range_rssi__functions.h"

bool
wifi_msgs__msg__RangeArrayRSSI__init(wifi_msgs__msg__RangeArrayRSSI * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    wifi_msgs__msg__RangeArrayRSSI__fini(msg);
    return false;
  }
  // tag_mac
  if (!rosidl_runtime_c__String__init(&msg->tag_mac)) {
    wifi_msgs__msg__RangeArrayRSSI__fini(msg);
    return false;
  }
  // tag_position
  if (!geometry_msgs__msg__Point__init(&msg->tag_position)) {
    wifi_msgs__msg__RangeArrayRSSI__fini(msg);
    return false;
  }
  // ranges
  if (!wifi_msgs__msg__RangeRSSI__Sequence__init(&msg->ranges, 0)) {
    wifi_msgs__msg__RangeArrayRSSI__fini(msg);
    return false;
  }
  return true;
}

void
wifi_msgs__msg__RangeArrayRSSI__fini(wifi_msgs__msg__RangeArrayRSSI * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tag_mac
  rosidl_runtime_c__String__fini(&msg->tag_mac);
  // tag_position
  geometry_msgs__msg__Point__fini(&msg->tag_position);
  // ranges
  wifi_msgs__msg__RangeRSSI__Sequence__fini(&msg->ranges);
}

bool
wifi_msgs__msg__RangeArrayRSSI__are_equal(const wifi_msgs__msg__RangeArrayRSSI * lhs, const wifi_msgs__msg__RangeArrayRSSI * rhs)
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
  // tag_mac
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tag_mac), &(rhs->tag_mac)))
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
  if (!wifi_msgs__msg__RangeRSSI__Sequence__are_equal(
      &(lhs->ranges), &(rhs->ranges)))
  {
    return false;
  }
  return true;
}

bool
wifi_msgs__msg__RangeArrayRSSI__copy(
  const wifi_msgs__msg__RangeArrayRSSI * input,
  wifi_msgs__msg__RangeArrayRSSI * output)
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
  // tag_mac
  if (!rosidl_runtime_c__String__copy(
      &(input->tag_mac), &(output->tag_mac)))
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
  if (!wifi_msgs__msg__RangeRSSI__Sequence__copy(
      &(input->ranges), &(output->ranges)))
  {
    return false;
  }
  return true;
}

wifi_msgs__msg__RangeArrayRSSI *
wifi_msgs__msg__RangeArrayRSSI__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifi_msgs__msg__RangeArrayRSSI * msg = (wifi_msgs__msg__RangeArrayRSSI *)allocator.allocate(sizeof(wifi_msgs__msg__RangeArrayRSSI), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wifi_msgs__msg__RangeArrayRSSI));
  bool success = wifi_msgs__msg__RangeArrayRSSI__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wifi_msgs__msg__RangeArrayRSSI__destroy(wifi_msgs__msg__RangeArrayRSSI * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wifi_msgs__msg__RangeArrayRSSI__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wifi_msgs__msg__RangeArrayRSSI__Sequence__init(wifi_msgs__msg__RangeArrayRSSI__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifi_msgs__msg__RangeArrayRSSI * data = NULL;

  if (size) {
    data = (wifi_msgs__msg__RangeArrayRSSI *)allocator.zero_allocate(size, sizeof(wifi_msgs__msg__RangeArrayRSSI), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wifi_msgs__msg__RangeArrayRSSI__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wifi_msgs__msg__RangeArrayRSSI__fini(&data[i - 1]);
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
wifi_msgs__msg__RangeArrayRSSI__Sequence__fini(wifi_msgs__msg__RangeArrayRSSI__Sequence * array)
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
      wifi_msgs__msg__RangeArrayRSSI__fini(&array->data[i]);
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

wifi_msgs__msg__RangeArrayRSSI__Sequence *
wifi_msgs__msg__RangeArrayRSSI__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifi_msgs__msg__RangeArrayRSSI__Sequence * array = (wifi_msgs__msg__RangeArrayRSSI__Sequence *)allocator.allocate(sizeof(wifi_msgs__msg__RangeArrayRSSI__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wifi_msgs__msg__RangeArrayRSSI__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wifi_msgs__msg__RangeArrayRSSI__Sequence__destroy(wifi_msgs__msg__RangeArrayRSSI__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wifi_msgs__msg__RangeArrayRSSI__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wifi_msgs__msg__RangeArrayRSSI__Sequence__are_equal(const wifi_msgs__msg__RangeArrayRSSI__Sequence * lhs, const wifi_msgs__msg__RangeArrayRSSI__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wifi_msgs__msg__RangeArrayRSSI__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wifi_msgs__msg__RangeArrayRSSI__Sequence__copy(
  const wifi_msgs__msg__RangeArrayRSSI__Sequence * input,
  wifi_msgs__msg__RangeArrayRSSI__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wifi_msgs__msg__RangeArrayRSSI);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wifi_msgs__msg__RangeArrayRSSI * data =
      (wifi_msgs__msg__RangeArrayRSSI *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wifi_msgs__msg__RangeArrayRSSI__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wifi_msgs__msg__RangeArrayRSSI__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wifi_msgs__msg__RangeArrayRSSI__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
