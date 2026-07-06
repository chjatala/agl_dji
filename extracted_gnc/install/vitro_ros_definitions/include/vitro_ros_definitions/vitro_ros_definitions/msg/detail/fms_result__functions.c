// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vitro_ros_definitions:msg/FMSResult.idl
// generated code does not contain a copyright notice
#include "vitro_ros_definitions/msg/detail/fms_result__functions.h"

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
// Member `img`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
vitro_ros_definitions__msg__FMSResult__init(vitro_ros_definitions__msg__FMSResult * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    vitro_ros_definitions__msg__FMSResult__fini(msg);
    return false;
  }
  // id_confidence
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    vitro_ros_definitions__msg__FMSResult__fini(msg);
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__init(&msg->img)) {
    vitro_ros_definitions__msg__FMSResult__fini(msg);
    return false;
  }
  return true;
}

void
vitro_ros_definitions__msg__FMSResult__fini(vitro_ros_definitions__msg__FMSResult * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // id_confidence
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // img
  sensor_msgs__msg__Image__fini(&msg->img);
}

bool
vitro_ros_definitions__msg__FMSResult__are_equal(const vitro_ros_definitions__msg__FMSResult * lhs, const vitro_ros_definitions__msg__FMSResult * rhs)
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
  // id_confidence
  if (lhs->id_confidence != rhs->id_confidence) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->img), &(rhs->img)))
  {
    return false;
  }
  return true;
}

bool
vitro_ros_definitions__msg__FMSResult__copy(
  const vitro_ros_definitions__msg__FMSResult * input,
  vitro_ros_definitions__msg__FMSResult * output)
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
  // id_confidence
  output->id_confidence = input->id_confidence;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // img
  if (!sensor_msgs__msg__Image__copy(
      &(input->img), &(output->img)))
  {
    return false;
  }
  return true;
}

vitro_ros_definitions__msg__FMSResult *
vitro_ros_definitions__msg__FMSResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__msg__FMSResult * msg = (vitro_ros_definitions__msg__FMSResult *)allocator.allocate(sizeof(vitro_ros_definitions__msg__FMSResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vitro_ros_definitions__msg__FMSResult));
  bool success = vitro_ros_definitions__msg__FMSResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
vitro_ros_definitions__msg__FMSResult__destroy(vitro_ros_definitions__msg__FMSResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    vitro_ros_definitions__msg__FMSResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
vitro_ros_definitions__msg__FMSResult__Sequence__init(vitro_ros_definitions__msg__FMSResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__msg__FMSResult * data = NULL;

  if (size) {
    data = (vitro_ros_definitions__msg__FMSResult *)allocator.zero_allocate(size, sizeof(vitro_ros_definitions__msg__FMSResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vitro_ros_definitions__msg__FMSResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vitro_ros_definitions__msg__FMSResult__fini(&data[i - 1]);
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
vitro_ros_definitions__msg__FMSResult__Sequence__fini(vitro_ros_definitions__msg__FMSResult__Sequence * array)
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
      vitro_ros_definitions__msg__FMSResult__fini(&array->data[i]);
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

vitro_ros_definitions__msg__FMSResult__Sequence *
vitro_ros_definitions__msg__FMSResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  vitro_ros_definitions__msg__FMSResult__Sequence * array = (vitro_ros_definitions__msg__FMSResult__Sequence *)allocator.allocate(sizeof(vitro_ros_definitions__msg__FMSResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = vitro_ros_definitions__msg__FMSResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
vitro_ros_definitions__msg__FMSResult__Sequence__destroy(vitro_ros_definitions__msg__FMSResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    vitro_ros_definitions__msg__FMSResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
vitro_ros_definitions__msg__FMSResult__Sequence__are_equal(const vitro_ros_definitions__msg__FMSResult__Sequence * lhs, const vitro_ros_definitions__msg__FMSResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!vitro_ros_definitions__msg__FMSResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
vitro_ros_definitions__msg__FMSResult__Sequence__copy(
  const vitro_ros_definitions__msg__FMSResult__Sequence * input,
  vitro_ros_definitions__msg__FMSResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(vitro_ros_definitions__msg__FMSResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    vitro_ros_definitions__msg__FMSResult * data =
      (vitro_ros_definitions__msg__FMSResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!vitro_ros_definitions__msg__FMSResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          vitro_ros_definitions__msg__FMSResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!vitro_ros_definitions__msg__FMSResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
