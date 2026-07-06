// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drone_msgs:msg/Waypoints.idl
// generated code does not contain a copyright notice
#include "drone_msgs/msg/detail/waypoints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `current_wp`
// Member `previous_wp`
#include "drone_msgs/msg/detail/waypoint__functions.h"

bool
drone_msgs__msg__Waypoints__init(drone_msgs__msg__Waypoints * msg)
{
  if (!msg) {
    return false;
  }
  // current_wp
  if (!drone_msgs__msg__Waypoint__init(&msg->current_wp)) {
    drone_msgs__msg__Waypoints__fini(msg);
    return false;
  }
  // previous_wp
  if (!drone_msgs__msg__Waypoint__init(&msg->previous_wp)) {
    drone_msgs__msg__Waypoints__fini(msg);
    return false;
  }
  // last_wp_reached
  return true;
}

void
drone_msgs__msg__Waypoints__fini(drone_msgs__msg__Waypoints * msg)
{
  if (!msg) {
    return;
  }
  // current_wp
  drone_msgs__msg__Waypoint__fini(&msg->current_wp);
  // previous_wp
  drone_msgs__msg__Waypoint__fini(&msg->previous_wp);
  // last_wp_reached
}

bool
drone_msgs__msg__Waypoints__are_equal(const drone_msgs__msg__Waypoints * lhs, const drone_msgs__msg__Waypoints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_wp
  if (!drone_msgs__msg__Waypoint__are_equal(
      &(lhs->current_wp), &(rhs->current_wp)))
  {
    return false;
  }
  // previous_wp
  if (!drone_msgs__msg__Waypoint__are_equal(
      &(lhs->previous_wp), &(rhs->previous_wp)))
  {
    return false;
  }
  // last_wp_reached
  if (lhs->last_wp_reached != rhs->last_wp_reached) {
    return false;
  }
  return true;
}

bool
drone_msgs__msg__Waypoints__copy(
  const drone_msgs__msg__Waypoints * input,
  drone_msgs__msg__Waypoints * output)
{
  if (!input || !output) {
    return false;
  }
  // current_wp
  if (!drone_msgs__msg__Waypoint__copy(
      &(input->current_wp), &(output->current_wp)))
  {
    return false;
  }
  // previous_wp
  if (!drone_msgs__msg__Waypoint__copy(
      &(input->previous_wp), &(output->previous_wp)))
  {
    return false;
  }
  // last_wp_reached
  output->last_wp_reached = input->last_wp_reached;
  return true;
}

drone_msgs__msg__Waypoints *
drone_msgs__msg__Waypoints__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__msg__Waypoints * msg = (drone_msgs__msg__Waypoints *)allocator.allocate(sizeof(drone_msgs__msg__Waypoints), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__msg__Waypoints));
  bool success = drone_msgs__msg__Waypoints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__msg__Waypoints__destroy(drone_msgs__msg__Waypoints * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__msg__Waypoints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__msg__Waypoints__Sequence__init(drone_msgs__msg__Waypoints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__msg__Waypoints * data = NULL;

  if (size) {
    data = (drone_msgs__msg__Waypoints *)allocator.zero_allocate(size, sizeof(drone_msgs__msg__Waypoints), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__msg__Waypoints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__msg__Waypoints__fini(&data[i - 1]);
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
drone_msgs__msg__Waypoints__Sequence__fini(drone_msgs__msg__Waypoints__Sequence * array)
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
      drone_msgs__msg__Waypoints__fini(&array->data[i]);
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

drone_msgs__msg__Waypoints__Sequence *
drone_msgs__msg__Waypoints__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__msg__Waypoints__Sequence * array = (drone_msgs__msg__Waypoints__Sequence *)allocator.allocate(sizeof(drone_msgs__msg__Waypoints__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__msg__Waypoints__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__msg__Waypoints__Sequence__destroy(drone_msgs__msg__Waypoints__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__msg__Waypoints__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__msg__Waypoints__Sequence__are_equal(const drone_msgs__msg__Waypoints__Sequence * lhs, const drone_msgs__msg__Waypoints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__msg__Waypoints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__msg__Waypoints__Sequence__copy(
  const drone_msgs__msg__Waypoints__Sequence * input,
  drone_msgs__msg__Waypoints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__msg__Waypoints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__msg__Waypoints * data =
      (drone_msgs__msg__Waypoints *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__msg__Waypoints__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__msg__Waypoints__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__msg__Waypoints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
