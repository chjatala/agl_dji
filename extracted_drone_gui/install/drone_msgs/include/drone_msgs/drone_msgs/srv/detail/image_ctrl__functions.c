// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drone_msgs:srv/ImageCtrl.idl
// generated code does not contain a copyright notice
#include "drone_msgs/srv/detail/image_ctrl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

bool
drone_msgs__srv__ImageCtrl_Request__init(drone_msgs__srv__ImageCtrl_Request * msg)
{
  if (!msg) {
    return false;
  }
  // enable
  msg->enable = false;
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    drone_msgs__srv__ImageCtrl_Request__fini(msg);
    return false;
  }
  // next_picture_distance
  msg->next_picture_distance = 0.0f;
  // overlap
  msg->overlap = 0.0f;
  // fov
  msg->fov = 0.0f;
  // picture_plane_distance
  msg->picture_plane_distance = 0.0f;
  return true;
}

void
drone_msgs__srv__ImageCtrl_Request__fini(drone_msgs__srv__ImageCtrl_Request * msg)
{
  if (!msg) {
    return;
  }
  // enable
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
  // next_picture_distance
  // overlap
  // fov
  // picture_plane_distance
}

bool
drone_msgs__srv__ImageCtrl_Request__are_equal(const drone_msgs__srv__ImageCtrl_Request * lhs, const drone_msgs__srv__ImageCtrl_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enable
  if (lhs->enable != rhs->enable) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // next_picture_distance
  if (lhs->next_picture_distance != rhs->next_picture_distance) {
    return false;
  }
  // overlap
  if (lhs->overlap != rhs->overlap) {
    return false;
  }
  // fov
  if (lhs->fov != rhs->fov) {
    return false;
  }
  // picture_plane_distance
  if (lhs->picture_plane_distance != rhs->picture_plane_distance) {
    return false;
  }
  return true;
}

bool
drone_msgs__srv__ImageCtrl_Request__copy(
  const drone_msgs__srv__ImageCtrl_Request * input,
  drone_msgs__srv__ImageCtrl_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // enable
  output->enable = input->enable;
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // next_picture_distance
  output->next_picture_distance = input->next_picture_distance;
  // overlap
  output->overlap = input->overlap;
  // fov
  output->fov = input->fov;
  // picture_plane_distance
  output->picture_plane_distance = input->picture_plane_distance;
  return true;
}

drone_msgs__srv__ImageCtrl_Request *
drone_msgs__srv__ImageCtrl_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__srv__ImageCtrl_Request * msg = (drone_msgs__srv__ImageCtrl_Request *)allocator.allocate(sizeof(drone_msgs__srv__ImageCtrl_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__srv__ImageCtrl_Request));
  bool success = drone_msgs__srv__ImageCtrl_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__srv__ImageCtrl_Request__destroy(drone_msgs__srv__ImageCtrl_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__srv__ImageCtrl_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__srv__ImageCtrl_Request__Sequence__init(drone_msgs__srv__ImageCtrl_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__srv__ImageCtrl_Request * data = NULL;

  if (size) {
    data = (drone_msgs__srv__ImageCtrl_Request *)allocator.zero_allocate(size, sizeof(drone_msgs__srv__ImageCtrl_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__srv__ImageCtrl_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__srv__ImageCtrl_Request__fini(&data[i - 1]);
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
drone_msgs__srv__ImageCtrl_Request__Sequence__fini(drone_msgs__srv__ImageCtrl_Request__Sequence * array)
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
      drone_msgs__srv__ImageCtrl_Request__fini(&array->data[i]);
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

drone_msgs__srv__ImageCtrl_Request__Sequence *
drone_msgs__srv__ImageCtrl_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__srv__ImageCtrl_Request__Sequence * array = (drone_msgs__srv__ImageCtrl_Request__Sequence *)allocator.allocate(sizeof(drone_msgs__srv__ImageCtrl_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__srv__ImageCtrl_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__srv__ImageCtrl_Request__Sequence__destroy(drone_msgs__srv__ImageCtrl_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__srv__ImageCtrl_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__srv__ImageCtrl_Request__Sequence__are_equal(const drone_msgs__srv__ImageCtrl_Request__Sequence * lhs, const drone_msgs__srv__ImageCtrl_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__srv__ImageCtrl_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__srv__ImageCtrl_Request__Sequence__copy(
  const drone_msgs__srv__ImageCtrl_Request__Sequence * input,
  drone_msgs__srv__ImageCtrl_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__srv__ImageCtrl_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__srv__ImageCtrl_Request * data =
      (drone_msgs__srv__ImageCtrl_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__srv__ImageCtrl_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__srv__ImageCtrl_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__srv__ImageCtrl_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
drone_msgs__srv__ImageCtrl_Response__init(drone_msgs__srv__ImageCtrl_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
drone_msgs__srv__ImageCtrl_Response__fini(drone_msgs__srv__ImageCtrl_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
drone_msgs__srv__ImageCtrl_Response__are_equal(const drone_msgs__srv__ImageCtrl_Response * lhs, const drone_msgs__srv__ImageCtrl_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
drone_msgs__srv__ImageCtrl_Response__copy(
  const drone_msgs__srv__ImageCtrl_Response * input,
  drone_msgs__srv__ImageCtrl_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

drone_msgs__srv__ImageCtrl_Response *
drone_msgs__srv__ImageCtrl_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__srv__ImageCtrl_Response * msg = (drone_msgs__srv__ImageCtrl_Response *)allocator.allocate(sizeof(drone_msgs__srv__ImageCtrl_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__srv__ImageCtrl_Response));
  bool success = drone_msgs__srv__ImageCtrl_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__srv__ImageCtrl_Response__destroy(drone_msgs__srv__ImageCtrl_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__srv__ImageCtrl_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__srv__ImageCtrl_Response__Sequence__init(drone_msgs__srv__ImageCtrl_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__srv__ImageCtrl_Response * data = NULL;

  if (size) {
    data = (drone_msgs__srv__ImageCtrl_Response *)allocator.zero_allocate(size, sizeof(drone_msgs__srv__ImageCtrl_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__srv__ImageCtrl_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__srv__ImageCtrl_Response__fini(&data[i - 1]);
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
drone_msgs__srv__ImageCtrl_Response__Sequence__fini(drone_msgs__srv__ImageCtrl_Response__Sequence * array)
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
      drone_msgs__srv__ImageCtrl_Response__fini(&array->data[i]);
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

drone_msgs__srv__ImageCtrl_Response__Sequence *
drone_msgs__srv__ImageCtrl_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__srv__ImageCtrl_Response__Sequence * array = (drone_msgs__srv__ImageCtrl_Response__Sequence *)allocator.allocate(sizeof(drone_msgs__srv__ImageCtrl_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__srv__ImageCtrl_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__srv__ImageCtrl_Response__Sequence__destroy(drone_msgs__srv__ImageCtrl_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__srv__ImageCtrl_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__srv__ImageCtrl_Response__Sequence__are_equal(const drone_msgs__srv__ImageCtrl_Response__Sequence * lhs, const drone_msgs__srv__ImageCtrl_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__srv__ImageCtrl_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__srv__ImageCtrl_Response__Sequence__copy(
  const drone_msgs__srv__ImageCtrl_Response__Sequence * input,
  drone_msgs__srv__ImageCtrl_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__srv__ImageCtrl_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__srv__ImageCtrl_Response * data =
      (drone_msgs__srv__ImageCtrl_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__srv__ImageCtrl_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__srv__ImageCtrl_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__srv__ImageCtrl_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
