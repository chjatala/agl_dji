// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vitro_ros_definitions:msg/InspectionObj.idl
// generated code does not contain a copyright notice
#include "vitro_ros_definitions/msg/detail/inspection_obj__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
vitro_ros_definitions__msg__InspectionObj__init(vitro_ros_definitions__msg__InspectionObj * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    vitro_ros_definitions__msg__InspectionObj__fini(msg);
    return false;
  }
  // status
  msg->status = 0;
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    vitro_ros_definitions__msg__InspectionObj__fini(msg);
    return false;
  }
  return true;
}

void
vitro_ros_definitions__msg__InspectionObj__fini(vitro_ros_definitions__msg__InspectionObj * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // status
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
vitro_ros_definitions__msg__InspectionObj__are_equal(const vitro_ros_definitions__msg__InspectionObj * lhs, const vitro_ros_definitions__msg__InspectionObj * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
vitro_ros_definitions__msg__InspectionObj__copy(
  const vitro_ros_definitions__msg__InspectionObj * input,
  vitro_ros_definitions__msg__InspectionObj * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

vitro_ros_definitions__msg__InspectionObj *
vitro_ros_definitions__msg__InspectionObj__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__msg__InspectionObj * msg = (vitro_ros_definitions__msg__InspectionObj *)allocator.allocate(sizeof(vitro_ros_definitions__msg__InspectionObj), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vitro_ros_definitions__msg__InspectionObj));
  bool success = vitro_ros_definitions__msg__InspectionObj__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vitro_ros_definitions__msg__InspectionObj__destroy(vitro_ros_definitions__msg__InspectionObj * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vitro_ros_definitions__msg__InspectionObj__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vitro_ros_definitions__msg__InspectionObj__Sequence__init(vitro_ros_definitions__msg__InspectionObj__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__msg__InspectionObj * data = NULL;

  if (size) {
    data = (vitro_ros_definitions__msg__InspectionObj *)allocator.zero_allocate(size, sizeof(vitro_ros_definitions__msg__InspectionObj), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vitro_ros_definitions__msg__InspectionObj__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vitro_ros_definitions__msg__InspectionObj__fini(&data[i - 1]);
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
vitro_ros_definitions__msg__InspectionObj__Sequence__fini(vitro_ros_definitions__msg__InspectionObj__Sequence * array)
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
      vitro_ros_definitions__msg__InspectionObj__fini(&array->data[i]);
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

vitro_ros_definitions__msg__InspectionObj__Sequence *
vitro_ros_definitions__msg__InspectionObj__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__msg__InspectionObj__Sequence * array = (vitro_ros_definitions__msg__InspectionObj__Sequence *)allocator.allocate(sizeof(vitro_ros_definitions__msg__InspectionObj__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vitro_ros_definitions__msg__InspectionObj__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vitro_ros_definitions__msg__InspectionObj__Sequence__destroy(vitro_ros_definitions__msg__InspectionObj__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vitro_ros_definitions__msg__InspectionObj__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vitro_ros_definitions__msg__InspectionObj__Sequence__are_equal(const vitro_ros_definitions__msg__InspectionObj__Sequence * lhs, const vitro_ros_definitions__msg__InspectionObj__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vitro_ros_definitions__msg__InspectionObj__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vitro_ros_definitions__msg__InspectionObj__Sequence__copy(
  const vitro_ros_definitions__msg__InspectionObj__Sequence * input,
  vitro_ros_definitions__msg__InspectionObj__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vitro_ros_definitions__msg__InspectionObj);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vitro_ros_definitions__msg__InspectionObj * data =
      (vitro_ros_definitions__msg__InspectionObj *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vitro_ros_definitions__msg__InspectionObj__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vitro_ros_definitions__msg__InspectionObj__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vitro_ros_definitions__msg__InspectionObj__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
