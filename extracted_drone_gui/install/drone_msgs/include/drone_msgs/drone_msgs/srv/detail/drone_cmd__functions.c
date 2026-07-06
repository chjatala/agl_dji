// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drone_msgs:srv/DroneCmd.idl
// generated code does not contain a copyright notice
#include "drone_msgs/srv/detail/drone_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cmd`
// Member `note`
// Member `cmder`
// Member `tgt`
#include "rosidl_runtime_c/string_functions.h"
// Member `param`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
drone_msgs__srv__DroneCmd_Request__init(drone_msgs__srv__DroneCmd_Request * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    drone_msgs__srv__DroneCmd_Request__fini(msg);
    return false;
  }
  // cmd
  if (!rosidl_runtime_c__String__init(&msg->cmd)) {
    drone_msgs__srv__DroneCmd_Request__fini(msg);
    return false;
  }
  // param
  if (!rosidl_runtime_c__float__Sequence__init(&msg->param, 0)) {
    drone_msgs__srv__DroneCmd_Request__fini(msg);
    return false;
  }
  // note
  if (!rosidl_runtime_c__String__init(&msg->note)) {
    drone_msgs__srv__DroneCmd_Request__fini(msg);
    return false;
  }
  // cmder
  if (!rosidl_runtime_c__String__init(&msg->cmder)) {
    drone_msgs__srv__DroneCmd_Request__fini(msg);
    return false;
  }
  // tgt
  if (!rosidl_runtime_c__String__init(&msg->tgt)) {
    drone_msgs__srv__DroneCmd_Request__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__srv__DroneCmd_Request__fini(drone_msgs__srv__DroneCmd_Request * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cmd
  rosidl_runtime_c__String__fini(&msg->cmd);
  // param
  rosidl_runtime_c__float__Sequence__fini(&msg->param);
  // note
  rosidl_runtime_c__String__fini(&msg->note);
  // cmder
  rosidl_runtime_c__String__fini(&msg->cmder);
  // tgt
  rosidl_runtime_c__String__fini(&msg->tgt);
}

bool
drone_msgs__srv__DroneCmd_Request__are_equal(const drone_msgs__srv__DroneCmd_Request * lhs, const drone_msgs__srv__DroneCmd_Request * rhs)
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
  // cmd
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cmd), &(rhs->cmd)))
  {
    return false;
  }
  // param
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->param), &(rhs->param)))
  {
    return false;
  }
  // note
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->note), &(rhs->note)))
  {
    return false;
  }
  // cmder
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cmder), &(rhs->cmder)))
  {
    return false;
  }
  // tgt
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tgt), &(rhs->tgt)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__srv__DroneCmd_Request__copy(
  const drone_msgs__srv__DroneCmd_Request * input,
  drone_msgs__srv__DroneCmd_Request * output)
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
  // cmd
  if (!rosidl_runtime_c__String__copy(
      &(input->cmd), &(output->cmd)))
  {
    return false;
  }
  // param
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->param), &(output->param)))
  {
    return false;
  }
  // note
  if (!rosidl_runtime_c__String__copy(
      &(input->note), &(output->note)))
  {
    return false;
  }
  // cmder
  if (!rosidl_runtime_c__String__copy(
      &(input->cmder), &(output->cmder)))
  {
    return false;
  }
  // tgt
  if (!rosidl_runtime_c__String__copy(
      &(input->tgt), &(output->tgt)))
  {
    return false;
  }
  return true;
}

drone_msgs__srv__DroneCmd_Request *
drone_msgs__srv__DroneCmd_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__srv__DroneCmd_Request * msg = (drone_msgs__srv__DroneCmd_Request *)allocator.allocate(sizeof(drone_msgs__srv__DroneCmd_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__srv__DroneCmd_Request));
  bool success = drone_msgs__srv__DroneCmd_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__srv__DroneCmd_Request__destroy(drone_msgs__srv__DroneCmd_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__srv__DroneCmd_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__srv__DroneCmd_Request__Sequence__init(drone_msgs__srv__DroneCmd_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__srv__DroneCmd_Request * data = NULL;

  if (size) {
    data = (drone_msgs__srv__DroneCmd_Request *)allocator.zero_allocate(size, sizeof(drone_msgs__srv__DroneCmd_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__srv__DroneCmd_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__srv__DroneCmd_Request__fini(&data[i - 1]);
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
drone_msgs__srv__DroneCmd_Request__Sequence__fini(drone_msgs__srv__DroneCmd_Request__Sequence * array)
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
      drone_msgs__srv__DroneCmd_Request__fini(&array->data[i]);
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

drone_msgs__srv__DroneCmd_Request__Sequence *
drone_msgs__srv__DroneCmd_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__srv__DroneCmd_Request__Sequence * array = (drone_msgs__srv__DroneCmd_Request__Sequence *)allocator.allocate(sizeof(drone_msgs__srv__DroneCmd_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__srv__DroneCmd_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__srv__DroneCmd_Request__Sequence__destroy(drone_msgs__srv__DroneCmd_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__srv__DroneCmd_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__srv__DroneCmd_Request__Sequence__are_equal(const drone_msgs__srv__DroneCmd_Request__Sequence * lhs, const drone_msgs__srv__DroneCmd_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__srv__DroneCmd_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__srv__DroneCmd_Request__Sequence__copy(
  const drone_msgs__srv__DroneCmd_Request__Sequence * input,
  drone_msgs__srv__DroneCmd_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__srv__DroneCmd_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__srv__DroneCmd_Request * data =
      (drone_msgs__srv__DroneCmd_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__srv__DroneCmd_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__srv__DroneCmd_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__srv__DroneCmd_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
drone_msgs__srv__DroneCmd_Response__init(drone_msgs__srv__DroneCmd_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    drone_msgs__srv__DroneCmd_Response__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__srv__DroneCmd_Response__fini(drone_msgs__srv__DroneCmd_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
drone_msgs__srv__DroneCmd_Response__are_equal(const drone_msgs__srv__DroneCmd_Response * lhs, const drone_msgs__srv__DroneCmd_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__srv__DroneCmd_Response__copy(
  const drone_msgs__srv__DroneCmd_Response * input,
  drone_msgs__srv__DroneCmd_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

drone_msgs__srv__DroneCmd_Response *
drone_msgs__srv__DroneCmd_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__srv__DroneCmd_Response * msg = (drone_msgs__srv__DroneCmd_Response *)allocator.allocate(sizeof(drone_msgs__srv__DroneCmd_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__srv__DroneCmd_Response));
  bool success = drone_msgs__srv__DroneCmd_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__srv__DroneCmd_Response__destroy(drone_msgs__srv__DroneCmd_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__srv__DroneCmd_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__srv__DroneCmd_Response__Sequence__init(drone_msgs__srv__DroneCmd_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__srv__DroneCmd_Response * data = NULL;

  if (size) {
    data = (drone_msgs__srv__DroneCmd_Response *)allocator.zero_allocate(size, sizeof(drone_msgs__srv__DroneCmd_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__srv__DroneCmd_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__srv__DroneCmd_Response__fini(&data[i - 1]);
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
drone_msgs__srv__DroneCmd_Response__Sequence__fini(drone_msgs__srv__DroneCmd_Response__Sequence * array)
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
      drone_msgs__srv__DroneCmd_Response__fini(&array->data[i]);
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

drone_msgs__srv__DroneCmd_Response__Sequence *
drone_msgs__srv__DroneCmd_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__srv__DroneCmd_Response__Sequence * array = (drone_msgs__srv__DroneCmd_Response__Sequence *)allocator.allocate(sizeof(drone_msgs__srv__DroneCmd_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__srv__DroneCmd_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__srv__DroneCmd_Response__Sequence__destroy(drone_msgs__srv__DroneCmd_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__srv__DroneCmd_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__srv__DroneCmd_Response__Sequence__are_equal(const drone_msgs__srv__DroneCmd_Response__Sequence * lhs, const drone_msgs__srv__DroneCmd_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__srv__DroneCmd_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__srv__DroneCmd_Response__Sequence__copy(
  const drone_msgs__srv__DroneCmd_Response__Sequence * input,
  drone_msgs__srv__DroneCmd_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__srv__DroneCmd_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__srv__DroneCmd_Response * data =
      (drone_msgs__srv__DroneCmd_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__srv__DroneCmd_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__srv__DroneCmd_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__srv__DroneCmd_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
