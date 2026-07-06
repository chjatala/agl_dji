// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drone_msgs:action/ApproachObj.idl
// generated code does not contain a copyright notice
#include "drone_msgs/action/detail/approach_obj__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `approach_type`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"

bool
drone_msgs__action__ApproachObj_Goal__init(drone_msgs__action__ApproachObj_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // max_vel
  // max_yaw_rate
  // distance
  // distance_tolerance
  // object_pos_x
  // object_pos_y
  // object_pos_z
  // approach_type
  if (!rosidl_runtime_c__String__init(&msg->approach_type)) {
    drone_msgs__action__ApproachObj_Goal__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->approach_type, "TOWARDS");
    if (!success) {
      goto abort_init_0;
    }
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    drone_msgs__action__ApproachObj_Goal__fini(msg);
    return false;
  }
  return true;
abort_init_0:
  return false;
}

void
drone_msgs__action__ApproachObj_Goal__fini(drone_msgs__action__ApproachObj_Goal * msg)
{
  if (!msg) {
    return;
  }
  // max_vel
  // max_yaw_rate
  // distance
  // distance_tolerance
  // object_pos_x
  // object_pos_y
  // object_pos_z
  // approach_type
  rosidl_runtime_c__String__fini(&msg->approach_type);
  // id
  rosidl_runtime_c__String__fini(&msg->id);
}

bool
drone_msgs__action__ApproachObj_Goal__are_equal(const drone_msgs__action__ApproachObj_Goal * lhs, const drone_msgs__action__ApproachObj_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // max_vel
  if (lhs->max_vel != rhs->max_vel) {
    return false;
  }
  // max_yaw_rate
  if (lhs->max_yaw_rate != rhs->max_yaw_rate) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // distance_tolerance
  if (lhs->distance_tolerance != rhs->distance_tolerance) {
    return false;
  }
  // object_pos_x
  if (lhs->object_pos_x != rhs->object_pos_x) {
    return false;
  }
  // object_pos_y
  if (lhs->object_pos_y != rhs->object_pos_y) {
    return false;
  }
  // object_pos_z
  if (lhs->object_pos_z != rhs->object_pos_z) {
    return false;
  }
  // approach_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->approach_type), &(rhs->approach_type)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_Goal__copy(
  const drone_msgs__action__ApproachObj_Goal * input,
  drone_msgs__action__ApproachObj_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // max_vel
  output->max_vel = input->max_vel;
  // max_yaw_rate
  output->max_yaw_rate = input->max_yaw_rate;
  // distance
  output->distance = input->distance;
  // distance_tolerance
  output->distance_tolerance = input->distance_tolerance;
  // object_pos_x
  output->object_pos_x = input->object_pos_x;
  // object_pos_y
  output->object_pos_y = input->object_pos_y;
  // object_pos_z
  output->object_pos_z = input->object_pos_z;
  // approach_type
  if (!rosidl_runtime_c__String__copy(
      &(input->approach_type), &(output->approach_type)))
  {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  return true;
}

drone_msgs__action__ApproachObj_Goal *
drone_msgs__action__ApproachObj_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_Goal * msg = (drone_msgs__action__ApproachObj_Goal *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__ApproachObj_Goal));
  bool success = drone_msgs__action__ApproachObj_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__ApproachObj_Goal__destroy(drone_msgs__action__ApproachObj_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__ApproachObj_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__ApproachObj_Goal__Sequence__init(drone_msgs__action__ApproachObj_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_Goal * data = NULL;

  if (size) {
    data = (drone_msgs__action__ApproachObj_Goal *)allocator.zero_allocate(size, sizeof(drone_msgs__action__ApproachObj_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__ApproachObj_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__ApproachObj_Goal__fini(&data[i - 1]);
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
drone_msgs__action__ApproachObj_Goal__Sequence__fini(drone_msgs__action__ApproachObj_Goal__Sequence * array)
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
      drone_msgs__action__ApproachObj_Goal__fini(&array->data[i]);
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

drone_msgs__action__ApproachObj_Goal__Sequence *
drone_msgs__action__ApproachObj_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_Goal__Sequence * array = (drone_msgs__action__ApproachObj_Goal__Sequence *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__ApproachObj_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__ApproachObj_Goal__Sequence__destroy(drone_msgs__action__ApproachObj_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__ApproachObj_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__ApproachObj_Goal__Sequence__are_equal(const drone_msgs__action__ApproachObj_Goal__Sequence * lhs, const drone_msgs__action__ApproachObj_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__ApproachObj_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_Goal__Sequence__copy(
  const drone_msgs__action__ApproachObj_Goal__Sequence * input,
  drone_msgs__action__ApproachObj_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__ApproachObj_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__ApproachObj_Goal * data =
      (drone_msgs__action__ApproachObj_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__ApproachObj_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__ApproachObj_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__ApproachObj_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `id`
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `init_pos`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
drone_msgs__action__ApproachObj_Result__init(drone_msgs__action__ApproachObj_Result * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    drone_msgs__action__ApproachObj_Result__fini(msg);
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    drone_msgs__action__ApproachObj_Result__fini(msg);
    return false;
  }
  // init_pos
  if (!geometry_msgs__msg__Point__init(&msg->init_pos)) {
    drone_msgs__action__ApproachObj_Result__fini(msg);
    return false;
  }
  // init_yaw
  return true;
}

void
drone_msgs__action__ApproachObj_Result__fini(drone_msgs__action__ApproachObj_Result * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // init_pos
  geometry_msgs__msg__Point__fini(&msg->init_pos);
  // init_yaw
}

bool
drone_msgs__action__ApproachObj_Result__are_equal(const drone_msgs__action__ApproachObj_Result * lhs, const drone_msgs__action__ApproachObj_Result * rhs)
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
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // init_pos
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->init_pos), &(rhs->init_pos)))
  {
    return false;
  }
  // init_yaw
  if (lhs->init_yaw != rhs->init_yaw) {
    return false;
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_Result__copy(
  const drone_msgs__action__ApproachObj_Result * input,
  drone_msgs__action__ApproachObj_Result * output)
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
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // init_pos
  if (!geometry_msgs__msg__Point__copy(
      &(input->init_pos), &(output->init_pos)))
  {
    return false;
  }
  // init_yaw
  output->init_yaw = input->init_yaw;
  return true;
}

drone_msgs__action__ApproachObj_Result *
drone_msgs__action__ApproachObj_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_Result * msg = (drone_msgs__action__ApproachObj_Result *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__ApproachObj_Result));
  bool success = drone_msgs__action__ApproachObj_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__ApproachObj_Result__destroy(drone_msgs__action__ApproachObj_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__ApproachObj_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__ApproachObj_Result__Sequence__init(drone_msgs__action__ApproachObj_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_Result * data = NULL;

  if (size) {
    data = (drone_msgs__action__ApproachObj_Result *)allocator.zero_allocate(size, sizeof(drone_msgs__action__ApproachObj_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__ApproachObj_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__ApproachObj_Result__fini(&data[i - 1]);
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
drone_msgs__action__ApproachObj_Result__Sequence__fini(drone_msgs__action__ApproachObj_Result__Sequence * array)
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
      drone_msgs__action__ApproachObj_Result__fini(&array->data[i]);
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

drone_msgs__action__ApproachObj_Result__Sequence *
drone_msgs__action__ApproachObj_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_Result__Sequence * array = (drone_msgs__action__ApproachObj_Result__Sequence *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__ApproachObj_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__ApproachObj_Result__Sequence__destroy(drone_msgs__action__ApproachObj_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__ApproachObj_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__ApproachObj_Result__Sequence__are_equal(const drone_msgs__action__ApproachObj_Result__Sequence * lhs, const drone_msgs__action__ApproachObj_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__ApproachObj_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_Result__Sequence__copy(
  const drone_msgs__action__ApproachObj_Result__Sequence * input,
  drone_msgs__action__ApproachObj_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__ApproachObj_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__ApproachObj_Result * data =
      (drone_msgs__action__ApproachObj_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__ApproachObj_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__ApproachObj_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__ApproachObj_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `id`
// already included above
// #include "rosidl_runtime_c/string_functions.h"
// Member `target_pos`
// already included above
// #include "geometry_msgs/msg/detail/point__functions.h"

bool
drone_msgs__action__ApproachObj_Feedback__init(drone_msgs__action__ApproachObj_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    drone_msgs__action__ApproachObj_Feedback__fini(msg);
    return false;
  }
  // dist_to_go
  // target_pos
  if (!geometry_msgs__msg__Point__init(&msg->target_pos)) {
    drone_msgs__action__ApproachObj_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__action__ApproachObj_Feedback__fini(drone_msgs__action__ApproachObj_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // dist_to_go
  // target_pos
  geometry_msgs__msg__Point__fini(&msg->target_pos);
}

bool
drone_msgs__action__ApproachObj_Feedback__are_equal(const drone_msgs__action__ApproachObj_Feedback * lhs, const drone_msgs__action__ApproachObj_Feedback * rhs)
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
  // dist_to_go
  if (lhs->dist_to_go != rhs->dist_to_go) {
    return false;
  }
  // target_pos
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->target_pos), &(rhs->target_pos)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_Feedback__copy(
  const drone_msgs__action__ApproachObj_Feedback * input,
  drone_msgs__action__ApproachObj_Feedback * output)
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
  // dist_to_go
  output->dist_to_go = input->dist_to_go;
  // target_pos
  if (!geometry_msgs__msg__Point__copy(
      &(input->target_pos), &(output->target_pos)))
  {
    return false;
  }
  return true;
}

drone_msgs__action__ApproachObj_Feedback *
drone_msgs__action__ApproachObj_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_Feedback * msg = (drone_msgs__action__ApproachObj_Feedback *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__ApproachObj_Feedback));
  bool success = drone_msgs__action__ApproachObj_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__ApproachObj_Feedback__destroy(drone_msgs__action__ApproachObj_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__ApproachObj_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__ApproachObj_Feedback__Sequence__init(drone_msgs__action__ApproachObj_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_Feedback * data = NULL;

  if (size) {
    data = (drone_msgs__action__ApproachObj_Feedback *)allocator.zero_allocate(size, sizeof(drone_msgs__action__ApproachObj_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__ApproachObj_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__ApproachObj_Feedback__fini(&data[i - 1]);
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
drone_msgs__action__ApproachObj_Feedback__Sequence__fini(drone_msgs__action__ApproachObj_Feedback__Sequence * array)
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
      drone_msgs__action__ApproachObj_Feedback__fini(&array->data[i]);
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

drone_msgs__action__ApproachObj_Feedback__Sequence *
drone_msgs__action__ApproachObj_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_Feedback__Sequence * array = (drone_msgs__action__ApproachObj_Feedback__Sequence *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__ApproachObj_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__ApproachObj_Feedback__Sequence__destroy(drone_msgs__action__ApproachObj_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__ApproachObj_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__ApproachObj_Feedback__Sequence__are_equal(const drone_msgs__action__ApproachObj_Feedback__Sequence * lhs, const drone_msgs__action__ApproachObj_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__ApproachObj_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_Feedback__Sequence__copy(
  const drone_msgs__action__ApproachObj_Feedback__Sequence * input,
  drone_msgs__action__ApproachObj_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__ApproachObj_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__ApproachObj_Feedback * data =
      (drone_msgs__action__ApproachObj_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__ApproachObj_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__ApproachObj_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__ApproachObj_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "drone_msgs/action/detail/approach_obj__functions.h"

bool
drone_msgs__action__ApproachObj_SendGoal_Request__init(drone_msgs__action__ApproachObj_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    drone_msgs__action__ApproachObj_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!drone_msgs__action__ApproachObj_Goal__init(&msg->goal)) {
    drone_msgs__action__ApproachObj_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__action__ApproachObj_SendGoal_Request__fini(drone_msgs__action__ApproachObj_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  drone_msgs__action__ApproachObj_Goal__fini(&msg->goal);
}

bool
drone_msgs__action__ApproachObj_SendGoal_Request__are_equal(const drone_msgs__action__ApproachObj_SendGoal_Request * lhs, const drone_msgs__action__ApproachObj_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!drone_msgs__action__ApproachObj_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_SendGoal_Request__copy(
  const drone_msgs__action__ApproachObj_SendGoal_Request * input,
  drone_msgs__action__ApproachObj_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!drone_msgs__action__ApproachObj_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

drone_msgs__action__ApproachObj_SendGoal_Request *
drone_msgs__action__ApproachObj_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_SendGoal_Request * msg = (drone_msgs__action__ApproachObj_SendGoal_Request *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__ApproachObj_SendGoal_Request));
  bool success = drone_msgs__action__ApproachObj_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__ApproachObj_SendGoal_Request__destroy(drone_msgs__action__ApproachObj_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__ApproachObj_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__ApproachObj_SendGoal_Request__Sequence__init(drone_msgs__action__ApproachObj_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_SendGoal_Request * data = NULL;

  if (size) {
    data = (drone_msgs__action__ApproachObj_SendGoal_Request *)allocator.zero_allocate(size, sizeof(drone_msgs__action__ApproachObj_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__ApproachObj_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__ApproachObj_SendGoal_Request__fini(&data[i - 1]);
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
drone_msgs__action__ApproachObj_SendGoal_Request__Sequence__fini(drone_msgs__action__ApproachObj_SendGoal_Request__Sequence * array)
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
      drone_msgs__action__ApproachObj_SendGoal_Request__fini(&array->data[i]);
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

drone_msgs__action__ApproachObj_SendGoal_Request__Sequence *
drone_msgs__action__ApproachObj_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_SendGoal_Request__Sequence * array = (drone_msgs__action__ApproachObj_SendGoal_Request__Sequence *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__ApproachObj_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__ApproachObj_SendGoal_Request__Sequence__destroy(drone_msgs__action__ApproachObj_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__ApproachObj_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__ApproachObj_SendGoal_Request__Sequence__are_equal(const drone_msgs__action__ApproachObj_SendGoal_Request__Sequence * lhs, const drone_msgs__action__ApproachObj_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__ApproachObj_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_SendGoal_Request__Sequence__copy(
  const drone_msgs__action__ApproachObj_SendGoal_Request__Sequence * input,
  drone_msgs__action__ApproachObj_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__ApproachObj_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__ApproachObj_SendGoal_Request * data =
      (drone_msgs__action__ApproachObj_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__ApproachObj_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__ApproachObj_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__ApproachObj_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
drone_msgs__action__ApproachObj_SendGoal_Response__init(drone_msgs__action__ApproachObj_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    drone_msgs__action__ApproachObj_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__action__ApproachObj_SendGoal_Response__fini(drone_msgs__action__ApproachObj_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
drone_msgs__action__ApproachObj_SendGoal_Response__are_equal(const drone_msgs__action__ApproachObj_SendGoal_Response * lhs, const drone_msgs__action__ApproachObj_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_SendGoal_Response__copy(
  const drone_msgs__action__ApproachObj_SendGoal_Response * input,
  drone_msgs__action__ApproachObj_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

drone_msgs__action__ApproachObj_SendGoal_Response *
drone_msgs__action__ApproachObj_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_SendGoal_Response * msg = (drone_msgs__action__ApproachObj_SendGoal_Response *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__ApproachObj_SendGoal_Response));
  bool success = drone_msgs__action__ApproachObj_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__ApproachObj_SendGoal_Response__destroy(drone_msgs__action__ApproachObj_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__ApproachObj_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__ApproachObj_SendGoal_Response__Sequence__init(drone_msgs__action__ApproachObj_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_SendGoal_Response * data = NULL;

  if (size) {
    data = (drone_msgs__action__ApproachObj_SendGoal_Response *)allocator.zero_allocate(size, sizeof(drone_msgs__action__ApproachObj_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__ApproachObj_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__ApproachObj_SendGoal_Response__fini(&data[i - 1]);
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
drone_msgs__action__ApproachObj_SendGoal_Response__Sequence__fini(drone_msgs__action__ApproachObj_SendGoal_Response__Sequence * array)
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
      drone_msgs__action__ApproachObj_SendGoal_Response__fini(&array->data[i]);
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

drone_msgs__action__ApproachObj_SendGoal_Response__Sequence *
drone_msgs__action__ApproachObj_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_SendGoal_Response__Sequence * array = (drone_msgs__action__ApproachObj_SendGoal_Response__Sequence *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__ApproachObj_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__ApproachObj_SendGoal_Response__Sequence__destroy(drone_msgs__action__ApproachObj_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__ApproachObj_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__ApproachObj_SendGoal_Response__Sequence__are_equal(const drone_msgs__action__ApproachObj_SendGoal_Response__Sequence * lhs, const drone_msgs__action__ApproachObj_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__ApproachObj_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_SendGoal_Response__Sequence__copy(
  const drone_msgs__action__ApproachObj_SendGoal_Response__Sequence * input,
  drone_msgs__action__ApproachObj_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__ApproachObj_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__ApproachObj_SendGoal_Response * data =
      (drone_msgs__action__ApproachObj_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__ApproachObj_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__ApproachObj_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__ApproachObj_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
drone_msgs__action__ApproachObj_GetResult_Request__init(drone_msgs__action__ApproachObj_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    drone_msgs__action__ApproachObj_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__action__ApproachObj_GetResult_Request__fini(drone_msgs__action__ApproachObj_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
drone_msgs__action__ApproachObj_GetResult_Request__are_equal(const drone_msgs__action__ApproachObj_GetResult_Request * lhs, const drone_msgs__action__ApproachObj_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_GetResult_Request__copy(
  const drone_msgs__action__ApproachObj_GetResult_Request * input,
  drone_msgs__action__ApproachObj_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

drone_msgs__action__ApproachObj_GetResult_Request *
drone_msgs__action__ApproachObj_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_GetResult_Request * msg = (drone_msgs__action__ApproachObj_GetResult_Request *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__ApproachObj_GetResult_Request));
  bool success = drone_msgs__action__ApproachObj_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__ApproachObj_GetResult_Request__destroy(drone_msgs__action__ApproachObj_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__ApproachObj_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__ApproachObj_GetResult_Request__Sequence__init(drone_msgs__action__ApproachObj_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_GetResult_Request * data = NULL;

  if (size) {
    data = (drone_msgs__action__ApproachObj_GetResult_Request *)allocator.zero_allocate(size, sizeof(drone_msgs__action__ApproachObj_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__ApproachObj_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__ApproachObj_GetResult_Request__fini(&data[i - 1]);
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
drone_msgs__action__ApproachObj_GetResult_Request__Sequence__fini(drone_msgs__action__ApproachObj_GetResult_Request__Sequence * array)
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
      drone_msgs__action__ApproachObj_GetResult_Request__fini(&array->data[i]);
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

drone_msgs__action__ApproachObj_GetResult_Request__Sequence *
drone_msgs__action__ApproachObj_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_GetResult_Request__Sequence * array = (drone_msgs__action__ApproachObj_GetResult_Request__Sequence *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__ApproachObj_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__ApproachObj_GetResult_Request__Sequence__destroy(drone_msgs__action__ApproachObj_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__ApproachObj_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__ApproachObj_GetResult_Request__Sequence__are_equal(const drone_msgs__action__ApproachObj_GetResult_Request__Sequence * lhs, const drone_msgs__action__ApproachObj_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__ApproachObj_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_GetResult_Request__Sequence__copy(
  const drone_msgs__action__ApproachObj_GetResult_Request__Sequence * input,
  drone_msgs__action__ApproachObj_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__ApproachObj_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__ApproachObj_GetResult_Request * data =
      (drone_msgs__action__ApproachObj_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__ApproachObj_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__ApproachObj_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__ApproachObj_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "drone_msgs/action/detail/approach_obj__functions.h"

bool
drone_msgs__action__ApproachObj_GetResult_Response__init(drone_msgs__action__ApproachObj_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!drone_msgs__action__ApproachObj_Result__init(&msg->result)) {
    drone_msgs__action__ApproachObj_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__action__ApproachObj_GetResult_Response__fini(drone_msgs__action__ApproachObj_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  drone_msgs__action__ApproachObj_Result__fini(&msg->result);
}

bool
drone_msgs__action__ApproachObj_GetResult_Response__are_equal(const drone_msgs__action__ApproachObj_GetResult_Response * lhs, const drone_msgs__action__ApproachObj_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!drone_msgs__action__ApproachObj_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_GetResult_Response__copy(
  const drone_msgs__action__ApproachObj_GetResult_Response * input,
  drone_msgs__action__ApproachObj_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!drone_msgs__action__ApproachObj_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

drone_msgs__action__ApproachObj_GetResult_Response *
drone_msgs__action__ApproachObj_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_GetResult_Response * msg = (drone_msgs__action__ApproachObj_GetResult_Response *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__ApproachObj_GetResult_Response));
  bool success = drone_msgs__action__ApproachObj_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__ApproachObj_GetResult_Response__destroy(drone_msgs__action__ApproachObj_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__ApproachObj_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__ApproachObj_GetResult_Response__Sequence__init(drone_msgs__action__ApproachObj_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_GetResult_Response * data = NULL;

  if (size) {
    data = (drone_msgs__action__ApproachObj_GetResult_Response *)allocator.zero_allocate(size, sizeof(drone_msgs__action__ApproachObj_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__ApproachObj_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__ApproachObj_GetResult_Response__fini(&data[i - 1]);
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
drone_msgs__action__ApproachObj_GetResult_Response__Sequence__fini(drone_msgs__action__ApproachObj_GetResult_Response__Sequence * array)
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
      drone_msgs__action__ApproachObj_GetResult_Response__fini(&array->data[i]);
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

drone_msgs__action__ApproachObj_GetResult_Response__Sequence *
drone_msgs__action__ApproachObj_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_GetResult_Response__Sequence * array = (drone_msgs__action__ApproachObj_GetResult_Response__Sequence *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__ApproachObj_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__ApproachObj_GetResult_Response__Sequence__destroy(drone_msgs__action__ApproachObj_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__ApproachObj_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__ApproachObj_GetResult_Response__Sequence__are_equal(const drone_msgs__action__ApproachObj_GetResult_Response__Sequence * lhs, const drone_msgs__action__ApproachObj_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__ApproachObj_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_GetResult_Response__Sequence__copy(
  const drone_msgs__action__ApproachObj_GetResult_Response__Sequence * input,
  drone_msgs__action__ApproachObj_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__ApproachObj_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__ApproachObj_GetResult_Response * data =
      (drone_msgs__action__ApproachObj_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__ApproachObj_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__ApproachObj_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__ApproachObj_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "drone_msgs/action/detail/approach_obj__functions.h"

bool
drone_msgs__action__ApproachObj_FeedbackMessage__init(drone_msgs__action__ApproachObj_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    drone_msgs__action__ApproachObj_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!drone_msgs__action__ApproachObj_Feedback__init(&msg->feedback)) {
    drone_msgs__action__ApproachObj_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__action__ApproachObj_FeedbackMessage__fini(drone_msgs__action__ApproachObj_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  drone_msgs__action__ApproachObj_Feedback__fini(&msg->feedback);
}

bool
drone_msgs__action__ApproachObj_FeedbackMessage__are_equal(const drone_msgs__action__ApproachObj_FeedbackMessage * lhs, const drone_msgs__action__ApproachObj_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!drone_msgs__action__ApproachObj_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_FeedbackMessage__copy(
  const drone_msgs__action__ApproachObj_FeedbackMessage * input,
  drone_msgs__action__ApproachObj_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!drone_msgs__action__ApproachObj_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

drone_msgs__action__ApproachObj_FeedbackMessage *
drone_msgs__action__ApproachObj_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_FeedbackMessage * msg = (drone_msgs__action__ApproachObj_FeedbackMessage *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__ApproachObj_FeedbackMessage));
  bool success = drone_msgs__action__ApproachObj_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__ApproachObj_FeedbackMessage__destroy(drone_msgs__action__ApproachObj_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__ApproachObj_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__ApproachObj_FeedbackMessage__Sequence__init(drone_msgs__action__ApproachObj_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_FeedbackMessage * data = NULL;

  if (size) {
    data = (drone_msgs__action__ApproachObj_FeedbackMessage *)allocator.zero_allocate(size, sizeof(drone_msgs__action__ApproachObj_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__ApproachObj_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__ApproachObj_FeedbackMessage__fini(&data[i - 1]);
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
drone_msgs__action__ApproachObj_FeedbackMessage__Sequence__fini(drone_msgs__action__ApproachObj_FeedbackMessage__Sequence * array)
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
      drone_msgs__action__ApproachObj_FeedbackMessage__fini(&array->data[i]);
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

drone_msgs__action__ApproachObj_FeedbackMessage__Sequence *
drone_msgs__action__ApproachObj_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__ApproachObj_FeedbackMessage__Sequence * array = (drone_msgs__action__ApproachObj_FeedbackMessage__Sequence *)allocator.allocate(sizeof(drone_msgs__action__ApproachObj_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__ApproachObj_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__ApproachObj_FeedbackMessage__Sequence__destroy(drone_msgs__action__ApproachObj_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__ApproachObj_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__ApproachObj_FeedbackMessage__Sequence__are_equal(const drone_msgs__action__ApproachObj_FeedbackMessage__Sequence * lhs, const drone_msgs__action__ApproachObj_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__ApproachObj_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__ApproachObj_FeedbackMessage__Sequence__copy(
  const drone_msgs__action__ApproachObj_FeedbackMessage__Sequence * input,
  drone_msgs__action__ApproachObj_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__ApproachObj_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__ApproachObj_FeedbackMessage * data =
      (drone_msgs__action__ApproachObj_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__ApproachObj_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__ApproachObj_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__ApproachObj_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
