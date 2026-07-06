// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drone_msgs:msg/DroneJoystick.idl
// generated code does not contain a copyright notice
#include "drone_msgs/msg/detail/drone_joystick__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
drone_msgs__msg__DroneJoystick__init(drone_msgs__msg__DroneJoystick * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    drone_msgs__msg__DroneJoystick__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // yaw
  return true;
}

void
drone_msgs__msg__DroneJoystick__fini(drone_msgs__msg__DroneJoystick * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x
  // y
  // z
  // yaw
}

bool
drone_msgs__msg__DroneJoystick__are_equal(const drone_msgs__msg__DroneJoystick * lhs, const drone_msgs__msg__DroneJoystick * rhs)
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
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
drone_msgs__msg__DroneJoystick__copy(
  const drone_msgs__msg__DroneJoystick * input,
  drone_msgs__msg__DroneJoystick * output)
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
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // yaw
  output->yaw = input->yaw;
  return true;
}

drone_msgs__msg__DroneJoystick *
drone_msgs__msg__DroneJoystick__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__msg__DroneJoystick * msg = (drone_msgs__msg__DroneJoystick *)allocator.allocate(sizeof(drone_msgs__msg__DroneJoystick), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__msg__DroneJoystick));
  bool success = drone_msgs__msg__DroneJoystick__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__msg__DroneJoystick__destroy(drone_msgs__msg__DroneJoystick * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__msg__DroneJoystick__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__msg__DroneJoystick__Sequence__init(drone_msgs__msg__DroneJoystick__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__msg__DroneJoystick * data = NULL;

  if (size) {
    data = (drone_msgs__msg__DroneJoystick *)allocator.zero_allocate(size, sizeof(drone_msgs__msg__DroneJoystick), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__msg__DroneJoystick__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__msg__DroneJoystick__fini(&data[i - 1]);
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
drone_msgs__msg__DroneJoystick__Sequence__fini(drone_msgs__msg__DroneJoystick__Sequence * array)
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
      drone_msgs__msg__DroneJoystick__fini(&array->data[i]);
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

drone_msgs__msg__DroneJoystick__Sequence *
drone_msgs__msg__DroneJoystick__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__msg__DroneJoystick__Sequence * array = (drone_msgs__msg__DroneJoystick__Sequence *)allocator.allocate(sizeof(drone_msgs__msg__DroneJoystick__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__msg__DroneJoystick__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__msg__DroneJoystick__Sequence__destroy(drone_msgs__msg__DroneJoystick__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__msg__DroneJoystick__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__msg__DroneJoystick__Sequence__are_equal(const drone_msgs__msg__DroneJoystick__Sequence * lhs, const drone_msgs__msg__DroneJoystick__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__msg__DroneJoystick__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__msg__DroneJoystick__Sequence__copy(
  const drone_msgs__msg__DroneJoystick__Sequence * input,
  drone_msgs__msg__DroneJoystick__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__msg__DroneJoystick);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__msg__DroneJoystick * data =
      (drone_msgs__msg__DroneJoystick *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__msg__DroneJoystick__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__msg__DroneJoystick__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__msg__DroneJoystick__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
