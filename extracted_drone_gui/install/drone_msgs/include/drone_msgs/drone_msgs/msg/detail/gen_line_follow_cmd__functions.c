// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drone_msgs:msg/GenLineFollowCmd.idl
// generated code does not contain a copyright notice
#include "drone_msgs/msg/detail/gen_line_follow_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `x_type`
// Member `y_type`
// Member `z_type`
// Member `yaw_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `param`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
drone_msgs__msg__GenLineFollowCmd__init(drone_msgs__msg__GenLineFollowCmd * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    drone_msgs__msg__GenLineFollowCmd__fini(msg);
    return false;
  }
  // x_tgt
  msg->x_tgt = 0.0f;
  // x_type
  if (!rosidl_runtime_c__String__init(&msg->x_type)) {
    drone_msgs__msg__GenLineFollowCmd__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->x_type, "POS_CLOSELOOP");
    if (!success) {
      goto abort_init_0;
    }
  }
  // y_tgt
  msg->y_tgt = 0.0f;
  // y_type
  if (!rosidl_runtime_c__String__init(&msg->y_type)) {
    drone_msgs__msg__GenLineFollowCmd__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->y_type, "POS_CLOSELOOP");
    if (!success) {
      goto abort_init_1;
    }
  }
  // z_tgt
  msg->z_tgt = 1.0f;
  // z_type
  if (!rosidl_runtime_c__String__init(&msg->z_type)) {
    drone_msgs__msg__GenLineFollowCmd__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->z_type, "POS_CLOSELOOP");
    if (!success) {
      goto abort_init_2;
    }
  }
  // yaw_tgt
  msg->yaw_tgt = 0.0f;
  // yaw_type
  if (!rosidl_runtime_c__String__init(&msg->yaw_type)) {
    drone_msgs__msg__GenLineFollowCmd__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->yaw_type, "POS_CLOSELOOP");
    if (!success) {
      goto abort_init_3;
    }
  }
  // param
  if (!rosidl_runtime_c__double__Sequence__init(&msg->param, 0)) {
    drone_msgs__msg__GenLineFollowCmd__fini(msg);
    return false;
  }
  return true;
abort_init_3:
  rosidl_runtime_c__String__fini(&msg->z_type);
abort_init_2:
  rosidl_runtime_c__String__fini(&msg->y_type);
abort_init_1:
  rosidl_runtime_c__String__fini(&msg->x_type);
abort_init_0:
  return false;
}

void
drone_msgs__msg__GenLineFollowCmd__fini(drone_msgs__msg__GenLineFollowCmd * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x_tgt
  // x_type
  rosidl_runtime_c__String__fini(&msg->x_type);
  // y_tgt
  // y_type
  rosidl_runtime_c__String__fini(&msg->y_type);
  // z_tgt
  // z_type
  rosidl_runtime_c__String__fini(&msg->z_type);
  // yaw_tgt
  // yaw_type
  rosidl_runtime_c__String__fini(&msg->yaw_type);
  // param
  rosidl_runtime_c__double__Sequence__fini(&msg->param);
}

bool
drone_msgs__msg__GenLineFollowCmd__are_equal(const drone_msgs__msg__GenLineFollowCmd * lhs, const drone_msgs__msg__GenLineFollowCmd * rhs)
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
  // x_tgt
  if (lhs->x_tgt != rhs->x_tgt) {
    return false;
  }
  // x_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->x_type), &(rhs->x_type)))
  {
    return false;
  }
  // y_tgt
  if (lhs->y_tgt != rhs->y_tgt) {
    return false;
  }
  // y_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->y_type), &(rhs->y_type)))
  {
    return false;
  }
  // z_tgt
  if (lhs->z_tgt != rhs->z_tgt) {
    return false;
  }
  // z_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->z_type), &(rhs->z_type)))
  {
    return false;
  }
  // yaw_tgt
  if (lhs->yaw_tgt != rhs->yaw_tgt) {
    return false;
  }
  // yaw_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->yaw_type), &(rhs->yaw_type)))
  {
    return false;
  }
  // param
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->param), &(rhs->param)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__msg__GenLineFollowCmd__copy(
  const drone_msgs__msg__GenLineFollowCmd * input,
  drone_msgs__msg__GenLineFollowCmd * output)
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
  // x_tgt
  output->x_tgt = input->x_tgt;
  // x_type
  if (!rosidl_runtime_c__String__copy(
      &(input->x_type), &(output->x_type)))
  {
    return false;
  }
  // y_tgt
  output->y_tgt = input->y_tgt;
  // y_type
  if (!rosidl_runtime_c__String__copy(
      &(input->y_type), &(output->y_type)))
  {
    return false;
  }
  // z_tgt
  output->z_tgt = input->z_tgt;
  // z_type
  if (!rosidl_runtime_c__String__copy(
      &(input->z_type), &(output->z_type)))
  {
    return false;
  }
  // yaw_tgt
  output->yaw_tgt = input->yaw_tgt;
  // yaw_type
  if (!rosidl_runtime_c__String__copy(
      &(input->yaw_type), &(output->yaw_type)))
  {
    return false;
  }
  // param
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->param), &(output->param)))
  {
    return false;
  }
  return true;
}

drone_msgs__msg__GenLineFollowCmd *
drone_msgs__msg__GenLineFollowCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__msg__GenLineFollowCmd * msg = (drone_msgs__msg__GenLineFollowCmd *)allocator.allocate(sizeof(drone_msgs__msg__GenLineFollowCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__msg__GenLineFollowCmd));
  bool success = drone_msgs__msg__GenLineFollowCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__msg__GenLineFollowCmd__destroy(drone_msgs__msg__GenLineFollowCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__msg__GenLineFollowCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__msg__GenLineFollowCmd__Sequence__init(drone_msgs__msg__GenLineFollowCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__msg__GenLineFollowCmd * data = NULL;

  if (size) {
    data = (drone_msgs__msg__GenLineFollowCmd *)allocator.zero_allocate(size, sizeof(drone_msgs__msg__GenLineFollowCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__msg__GenLineFollowCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__msg__GenLineFollowCmd__fini(&data[i - 1]);
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
drone_msgs__msg__GenLineFollowCmd__Sequence__fini(drone_msgs__msg__GenLineFollowCmd__Sequence * array)
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
      drone_msgs__msg__GenLineFollowCmd__fini(&array->data[i]);
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

drone_msgs__msg__GenLineFollowCmd__Sequence *
drone_msgs__msg__GenLineFollowCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__msg__GenLineFollowCmd__Sequence * array = (drone_msgs__msg__GenLineFollowCmd__Sequence *)allocator.allocate(sizeof(drone_msgs__msg__GenLineFollowCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__msg__GenLineFollowCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__msg__GenLineFollowCmd__Sequence__destroy(drone_msgs__msg__GenLineFollowCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__msg__GenLineFollowCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__msg__GenLineFollowCmd__Sequence__are_equal(const drone_msgs__msg__GenLineFollowCmd__Sequence * lhs, const drone_msgs__msg__GenLineFollowCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__msg__GenLineFollowCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__msg__GenLineFollowCmd__Sequence__copy(
  const drone_msgs__msg__GenLineFollowCmd__Sequence * input,
  drone_msgs__msg__GenLineFollowCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__msg__GenLineFollowCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__msg__GenLineFollowCmd * data =
      (drone_msgs__msg__GenLineFollowCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__msg__GenLineFollowCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__msg__GenLineFollowCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__msg__GenLineFollowCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
