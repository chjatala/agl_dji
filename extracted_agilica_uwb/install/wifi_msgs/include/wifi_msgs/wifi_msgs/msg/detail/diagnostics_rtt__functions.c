// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wifi_msgs:msg/DiagnosticsRTT.idl
// generated code does not contain a copyright notice
#include "wifi_msgs/msg/detail/diagnostics_rtt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wifi_msgs__msg__DiagnosticsRTT__init(wifi_msgs__msg__DiagnosticsRTT * msg)
{
  if (!msg) {
    return false;
  }
  // rssi
  // rssi_spread
  // num_bursts
  // burst_duration
  // ftms_per_burst
  // rtt_avg
  // rtt_spread
  // rtt_variance
  return true;
}

void
wifi_msgs__msg__DiagnosticsRTT__fini(wifi_msgs__msg__DiagnosticsRTT * msg)
{
  if (!msg) {
    return;
  }
  // rssi
  // rssi_spread
  // num_bursts
  // burst_duration
  // ftms_per_burst
  // rtt_avg
  // rtt_spread
  // rtt_variance
}

bool
wifi_msgs__msg__DiagnosticsRTT__are_equal(const wifi_msgs__msg__DiagnosticsRTT * lhs, const wifi_msgs__msg__DiagnosticsRTT * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rssi
  if (lhs->rssi != rhs->rssi) {
    return false;
  }
  // rssi_spread
  if (lhs->rssi_spread != rhs->rssi_spread) {
    return false;
  }
  // num_bursts
  if (lhs->num_bursts != rhs->num_bursts) {
    return false;
  }
  // burst_duration
  if (lhs->burst_duration != rhs->burst_duration) {
    return false;
  }
  // ftms_per_burst
  if (lhs->ftms_per_burst != rhs->ftms_per_burst) {
    return false;
  }
  // rtt_avg
  if (lhs->rtt_avg != rhs->rtt_avg) {
    return false;
  }
  // rtt_spread
  if (lhs->rtt_spread != rhs->rtt_spread) {
    return false;
  }
  // rtt_variance
  if (lhs->rtt_variance != rhs->rtt_variance) {
    return false;
  }
  return true;
}

bool
wifi_msgs__msg__DiagnosticsRTT__copy(
  const wifi_msgs__msg__DiagnosticsRTT * input,
  wifi_msgs__msg__DiagnosticsRTT * output)
{
  if (!input || !output) {
    return false;
  }
  // rssi
  output->rssi = input->rssi;
  // rssi_spread
  output->rssi_spread = input->rssi_spread;
  // num_bursts
  output->num_bursts = input->num_bursts;
  // burst_duration
  output->burst_duration = input->burst_duration;
  // ftms_per_burst
  output->ftms_per_burst = input->ftms_per_burst;
  // rtt_avg
  output->rtt_avg = input->rtt_avg;
  // rtt_spread
  output->rtt_spread = input->rtt_spread;
  // rtt_variance
  output->rtt_variance = input->rtt_variance;
  return true;
}

wifi_msgs__msg__DiagnosticsRTT *
wifi_msgs__msg__DiagnosticsRTT__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifi_msgs__msg__DiagnosticsRTT * msg = (wifi_msgs__msg__DiagnosticsRTT *)allocator.allocate(sizeof(wifi_msgs__msg__DiagnosticsRTT), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wifi_msgs__msg__DiagnosticsRTT));
  bool success = wifi_msgs__msg__DiagnosticsRTT__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wifi_msgs__msg__DiagnosticsRTT__destroy(wifi_msgs__msg__DiagnosticsRTT * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wifi_msgs__msg__DiagnosticsRTT__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wifi_msgs__msg__DiagnosticsRTT__Sequence__init(wifi_msgs__msg__DiagnosticsRTT__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifi_msgs__msg__DiagnosticsRTT * data = NULL;

  if (size) {
    data = (wifi_msgs__msg__DiagnosticsRTT *)allocator.zero_allocate(size, sizeof(wifi_msgs__msg__DiagnosticsRTT), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wifi_msgs__msg__DiagnosticsRTT__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wifi_msgs__msg__DiagnosticsRTT__fini(&data[i - 1]);
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
wifi_msgs__msg__DiagnosticsRTT__Sequence__fini(wifi_msgs__msg__DiagnosticsRTT__Sequence * array)
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
      wifi_msgs__msg__DiagnosticsRTT__fini(&array->data[i]);
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

wifi_msgs__msg__DiagnosticsRTT__Sequence *
wifi_msgs__msg__DiagnosticsRTT__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wifi_msgs__msg__DiagnosticsRTT__Sequence * array = (wifi_msgs__msg__DiagnosticsRTT__Sequence *)allocator.allocate(sizeof(wifi_msgs__msg__DiagnosticsRTT__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wifi_msgs__msg__DiagnosticsRTT__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wifi_msgs__msg__DiagnosticsRTT__Sequence__destroy(wifi_msgs__msg__DiagnosticsRTT__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wifi_msgs__msg__DiagnosticsRTT__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wifi_msgs__msg__DiagnosticsRTT__Sequence__are_equal(const wifi_msgs__msg__DiagnosticsRTT__Sequence * lhs, const wifi_msgs__msg__DiagnosticsRTT__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wifi_msgs__msg__DiagnosticsRTT__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wifi_msgs__msg__DiagnosticsRTT__Sequence__copy(
  const wifi_msgs__msg__DiagnosticsRTT__Sequence * input,
  wifi_msgs__msg__DiagnosticsRTT__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wifi_msgs__msg__DiagnosticsRTT);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wifi_msgs__msg__DiagnosticsRTT * data =
      (wifi_msgs__msg__DiagnosticsRTT *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wifi_msgs__msg__DiagnosticsRTT__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wifi_msgs__msg__DiagnosticsRTT__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wifi_msgs__msg__DiagnosticsRTT__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
