// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drone_msgs:action/SysId.idl
// generated code does not contain a copyright notice
#include "drone_msgs/action/detail/sys_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cfg_file`
// Member `cfg_str`
#include "rosidl_runtime_c/string_functions.h"

bool
drone_msgs__action__SysId_Goal__init(drone_msgs__action__SysId_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // cfg_file
  if (!rosidl_runtime_c__String__init(&msg->cfg_file)) {
    drone_msgs__action__SysId_Goal__fini(msg);
    return false;
  }
  // cfg_str
  if (!rosidl_runtime_c__String__init(&msg->cfg_str)) {
    drone_msgs__action__SysId_Goal__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->cfg_str, "{}");
    if (!success) {
      goto abort_init_0;
    }
  }
  return true;
abort_init_0:
  return false;
}

void
drone_msgs__action__SysId_Goal__fini(drone_msgs__action__SysId_Goal * msg)
{
  if (!msg) {
    return;
  }
  // cfg_file
  rosidl_runtime_c__String__fini(&msg->cfg_file);
  // cfg_str
  rosidl_runtime_c__String__fini(&msg->cfg_str);
}

bool
drone_msgs__action__SysId_Goal__are_equal(const drone_msgs__action__SysId_Goal * lhs, const drone_msgs__action__SysId_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cfg_file
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cfg_file), &(rhs->cfg_file)))
  {
    return false;
  }
  // cfg_str
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cfg_str), &(rhs->cfg_str)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__action__SysId_Goal__copy(
  const drone_msgs__action__SysId_Goal * input,
  drone_msgs__action__SysId_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // cfg_file
  if (!rosidl_runtime_c__String__copy(
      &(input->cfg_file), &(output->cfg_file)))
  {
    return false;
  }
  // cfg_str
  if (!rosidl_runtime_c__String__copy(
      &(input->cfg_str), &(output->cfg_str)))
  {
    return false;
  }
  return true;
}

drone_msgs__action__SysId_Goal *
drone_msgs__action__SysId_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_Goal * msg = (drone_msgs__action__SysId_Goal *)allocator.allocate(sizeof(drone_msgs__action__SysId_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__SysId_Goal));
  bool success = drone_msgs__action__SysId_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__SysId_Goal__destroy(drone_msgs__action__SysId_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__SysId_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__SysId_Goal__Sequence__init(drone_msgs__action__SysId_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_Goal * data = NULL;

  if (size) {
    data = (drone_msgs__action__SysId_Goal *)allocator.zero_allocate(size, sizeof(drone_msgs__action__SysId_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__SysId_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__SysId_Goal__fini(&data[i - 1]);
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
drone_msgs__action__SysId_Goal__Sequence__fini(drone_msgs__action__SysId_Goal__Sequence * array)
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
      drone_msgs__action__SysId_Goal__fini(&array->data[i]);
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

drone_msgs__action__SysId_Goal__Sequence *
drone_msgs__action__SysId_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_Goal__Sequence * array = (drone_msgs__action__SysId_Goal__Sequence *)allocator.allocate(sizeof(drone_msgs__action__SysId_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__SysId_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__SysId_Goal__Sequence__destroy(drone_msgs__action__SysId_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__SysId_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__SysId_Goal__Sequence__are_equal(const drone_msgs__action__SysId_Goal__Sequence * lhs, const drone_msgs__action__SysId_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__SysId_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__SysId_Goal__Sequence__copy(
  const drone_msgs__action__SysId_Goal__Sequence * input,
  drone_msgs__action__SysId_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__SysId_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__SysId_Goal * data =
      (drone_msgs__action__SysId_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__SysId_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__SysId_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__SysId_Goal__copy(
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
// Member `ret`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
drone_msgs__action__SysId_Result__init(drone_msgs__action__SysId_Result * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    drone_msgs__action__SysId_Result__fini(msg);
    return false;
  }
  // ret
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ret, 0)) {
    drone_msgs__action__SysId_Result__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__action__SysId_Result__fini(drone_msgs__action__SysId_Result * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // ret
  rosidl_runtime_c__double__Sequence__fini(&msg->ret);
}

bool
drone_msgs__action__SysId_Result__are_equal(const drone_msgs__action__SysId_Result * lhs, const drone_msgs__action__SysId_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // ret
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ret), &(rhs->ret)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__action__SysId_Result__copy(
  const drone_msgs__action__SysId_Result * input,
  drone_msgs__action__SysId_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // ret
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ret), &(output->ret)))
  {
    return false;
  }
  return true;
}

drone_msgs__action__SysId_Result *
drone_msgs__action__SysId_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_Result * msg = (drone_msgs__action__SysId_Result *)allocator.allocate(sizeof(drone_msgs__action__SysId_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__SysId_Result));
  bool success = drone_msgs__action__SysId_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__SysId_Result__destroy(drone_msgs__action__SysId_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__SysId_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__SysId_Result__Sequence__init(drone_msgs__action__SysId_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_Result * data = NULL;

  if (size) {
    data = (drone_msgs__action__SysId_Result *)allocator.zero_allocate(size, sizeof(drone_msgs__action__SysId_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__SysId_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__SysId_Result__fini(&data[i - 1]);
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
drone_msgs__action__SysId_Result__Sequence__fini(drone_msgs__action__SysId_Result__Sequence * array)
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
      drone_msgs__action__SysId_Result__fini(&array->data[i]);
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

drone_msgs__action__SysId_Result__Sequence *
drone_msgs__action__SysId_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_Result__Sequence * array = (drone_msgs__action__SysId_Result__Sequence *)allocator.allocate(sizeof(drone_msgs__action__SysId_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__SysId_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__SysId_Result__Sequence__destroy(drone_msgs__action__SysId_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__SysId_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__SysId_Result__Sequence__are_equal(const drone_msgs__action__SysId_Result__Sequence * lhs, const drone_msgs__action__SysId_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__SysId_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__SysId_Result__Sequence__copy(
  const drone_msgs__action__SysId_Result__Sequence * input,
  drone_msgs__action__SysId_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__SysId_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__SysId_Result * data =
      (drone_msgs__action__SysId_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__SysId_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__SysId_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__SysId_Result__copy(
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
drone_msgs__action__SysId_Feedback__init(drone_msgs__action__SysId_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    drone_msgs__action__SysId_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__action__SysId_Feedback__fini(drone_msgs__action__SysId_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
drone_msgs__action__SysId_Feedback__are_equal(const drone_msgs__action__SysId_Feedback * lhs, const drone_msgs__action__SysId_Feedback * rhs)
{
  if (!lhs || !rhs) {
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
drone_msgs__action__SysId_Feedback__copy(
  const drone_msgs__action__SysId_Feedback * input,
  drone_msgs__action__SysId_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

drone_msgs__action__SysId_Feedback *
drone_msgs__action__SysId_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_Feedback * msg = (drone_msgs__action__SysId_Feedback *)allocator.allocate(sizeof(drone_msgs__action__SysId_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__SysId_Feedback));
  bool success = drone_msgs__action__SysId_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__SysId_Feedback__destroy(drone_msgs__action__SysId_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__SysId_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__SysId_Feedback__Sequence__init(drone_msgs__action__SysId_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_Feedback * data = NULL;

  if (size) {
    data = (drone_msgs__action__SysId_Feedback *)allocator.zero_allocate(size, sizeof(drone_msgs__action__SysId_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__SysId_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__SysId_Feedback__fini(&data[i - 1]);
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
drone_msgs__action__SysId_Feedback__Sequence__fini(drone_msgs__action__SysId_Feedback__Sequence * array)
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
      drone_msgs__action__SysId_Feedback__fini(&array->data[i]);
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

drone_msgs__action__SysId_Feedback__Sequence *
drone_msgs__action__SysId_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_Feedback__Sequence * array = (drone_msgs__action__SysId_Feedback__Sequence *)allocator.allocate(sizeof(drone_msgs__action__SysId_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__SysId_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__SysId_Feedback__Sequence__destroy(drone_msgs__action__SysId_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__SysId_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__SysId_Feedback__Sequence__are_equal(const drone_msgs__action__SysId_Feedback__Sequence * lhs, const drone_msgs__action__SysId_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__SysId_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__SysId_Feedback__Sequence__copy(
  const drone_msgs__action__SysId_Feedback__Sequence * input,
  drone_msgs__action__SysId_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__SysId_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__SysId_Feedback * data =
      (drone_msgs__action__SysId_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__SysId_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__SysId_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__SysId_Feedback__copy(
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
// #include "drone_msgs/action/detail/sys_id__functions.h"

bool
drone_msgs__action__SysId_SendGoal_Request__init(drone_msgs__action__SysId_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    drone_msgs__action__SysId_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!drone_msgs__action__SysId_Goal__init(&msg->goal)) {
    drone_msgs__action__SysId_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__action__SysId_SendGoal_Request__fini(drone_msgs__action__SysId_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  drone_msgs__action__SysId_Goal__fini(&msg->goal);
}

bool
drone_msgs__action__SysId_SendGoal_Request__are_equal(const drone_msgs__action__SysId_SendGoal_Request * lhs, const drone_msgs__action__SysId_SendGoal_Request * rhs)
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
  if (!drone_msgs__action__SysId_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__action__SysId_SendGoal_Request__copy(
  const drone_msgs__action__SysId_SendGoal_Request * input,
  drone_msgs__action__SysId_SendGoal_Request * output)
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
  if (!drone_msgs__action__SysId_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

drone_msgs__action__SysId_SendGoal_Request *
drone_msgs__action__SysId_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_SendGoal_Request * msg = (drone_msgs__action__SysId_SendGoal_Request *)allocator.allocate(sizeof(drone_msgs__action__SysId_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__SysId_SendGoal_Request));
  bool success = drone_msgs__action__SysId_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__SysId_SendGoal_Request__destroy(drone_msgs__action__SysId_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__SysId_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__SysId_SendGoal_Request__Sequence__init(drone_msgs__action__SysId_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_SendGoal_Request * data = NULL;

  if (size) {
    data = (drone_msgs__action__SysId_SendGoal_Request *)allocator.zero_allocate(size, sizeof(drone_msgs__action__SysId_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__SysId_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__SysId_SendGoal_Request__fini(&data[i - 1]);
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
drone_msgs__action__SysId_SendGoal_Request__Sequence__fini(drone_msgs__action__SysId_SendGoal_Request__Sequence * array)
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
      drone_msgs__action__SysId_SendGoal_Request__fini(&array->data[i]);
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

drone_msgs__action__SysId_SendGoal_Request__Sequence *
drone_msgs__action__SysId_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_SendGoal_Request__Sequence * array = (drone_msgs__action__SysId_SendGoal_Request__Sequence *)allocator.allocate(sizeof(drone_msgs__action__SysId_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__SysId_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__SysId_SendGoal_Request__Sequence__destroy(drone_msgs__action__SysId_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__SysId_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__SysId_SendGoal_Request__Sequence__are_equal(const drone_msgs__action__SysId_SendGoal_Request__Sequence * lhs, const drone_msgs__action__SysId_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__SysId_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__SysId_SendGoal_Request__Sequence__copy(
  const drone_msgs__action__SysId_SendGoal_Request__Sequence * input,
  drone_msgs__action__SysId_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__SysId_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__SysId_SendGoal_Request * data =
      (drone_msgs__action__SysId_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__SysId_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__SysId_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__SysId_SendGoal_Request__copy(
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
drone_msgs__action__SysId_SendGoal_Response__init(drone_msgs__action__SysId_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    drone_msgs__action__SysId_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__action__SysId_SendGoal_Response__fini(drone_msgs__action__SysId_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
drone_msgs__action__SysId_SendGoal_Response__are_equal(const drone_msgs__action__SysId_SendGoal_Response * lhs, const drone_msgs__action__SysId_SendGoal_Response * rhs)
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
drone_msgs__action__SysId_SendGoal_Response__copy(
  const drone_msgs__action__SysId_SendGoal_Response * input,
  drone_msgs__action__SysId_SendGoal_Response * output)
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

drone_msgs__action__SysId_SendGoal_Response *
drone_msgs__action__SysId_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_SendGoal_Response * msg = (drone_msgs__action__SysId_SendGoal_Response *)allocator.allocate(sizeof(drone_msgs__action__SysId_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__SysId_SendGoal_Response));
  bool success = drone_msgs__action__SysId_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__SysId_SendGoal_Response__destroy(drone_msgs__action__SysId_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__SysId_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__SysId_SendGoal_Response__Sequence__init(drone_msgs__action__SysId_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_SendGoal_Response * data = NULL;

  if (size) {
    data = (drone_msgs__action__SysId_SendGoal_Response *)allocator.zero_allocate(size, sizeof(drone_msgs__action__SysId_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__SysId_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__SysId_SendGoal_Response__fini(&data[i - 1]);
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
drone_msgs__action__SysId_SendGoal_Response__Sequence__fini(drone_msgs__action__SysId_SendGoal_Response__Sequence * array)
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
      drone_msgs__action__SysId_SendGoal_Response__fini(&array->data[i]);
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

drone_msgs__action__SysId_SendGoal_Response__Sequence *
drone_msgs__action__SysId_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_SendGoal_Response__Sequence * array = (drone_msgs__action__SysId_SendGoal_Response__Sequence *)allocator.allocate(sizeof(drone_msgs__action__SysId_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__SysId_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__SysId_SendGoal_Response__Sequence__destroy(drone_msgs__action__SysId_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__SysId_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__SysId_SendGoal_Response__Sequence__are_equal(const drone_msgs__action__SysId_SendGoal_Response__Sequence * lhs, const drone_msgs__action__SysId_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__SysId_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__SysId_SendGoal_Response__Sequence__copy(
  const drone_msgs__action__SysId_SendGoal_Response__Sequence * input,
  drone_msgs__action__SysId_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__SysId_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__SysId_SendGoal_Response * data =
      (drone_msgs__action__SysId_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__SysId_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__SysId_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__SysId_SendGoal_Response__copy(
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
drone_msgs__action__SysId_GetResult_Request__init(drone_msgs__action__SysId_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    drone_msgs__action__SysId_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__action__SysId_GetResult_Request__fini(drone_msgs__action__SysId_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
drone_msgs__action__SysId_GetResult_Request__are_equal(const drone_msgs__action__SysId_GetResult_Request * lhs, const drone_msgs__action__SysId_GetResult_Request * rhs)
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
drone_msgs__action__SysId_GetResult_Request__copy(
  const drone_msgs__action__SysId_GetResult_Request * input,
  drone_msgs__action__SysId_GetResult_Request * output)
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

drone_msgs__action__SysId_GetResult_Request *
drone_msgs__action__SysId_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_GetResult_Request * msg = (drone_msgs__action__SysId_GetResult_Request *)allocator.allocate(sizeof(drone_msgs__action__SysId_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__SysId_GetResult_Request));
  bool success = drone_msgs__action__SysId_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__SysId_GetResult_Request__destroy(drone_msgs__action__SysId_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__SysId_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__SysId_GetResult_Request__Sequence__init(drone_msgs__action__SysId_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_GetResult_Request * data = NULL;

  if (size) {
    data = (drone_msgs__action__SysId_GetResult_Request *)allocator.zero_allocate(size, sizeof(drone_msgs__action__SysId_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__SysId_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__SysId_GetResult_Request__fini(&data[i - 1]);
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
drone_msgs__action__SysId_GetResult_Request__Sequence__fini(drone_msgs__action__SysId_GetResult_Request__Sequence * array)
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
      drone_msgs__action__SysId_GetResult_Request__fini(&array->data[i]);
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

drone_msgs__action__SysId_GetResult_Request__Sequence *
drone_msgs__action__SysId_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_GetResult_Request__Sequence * array = (drone_msgs__action__SysId_GetResult_Request__Sequence *)allocator.allocate(sizeof(drone_msgs__action__SysId_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__SysId_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__SysId_GetResult_Request__Sequence__destroy(drone_msgs__action__SysId_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__SysId_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__SysId_GetResult_Request__Sequence__are_equal(const drone_msgs__action__SysId_GetResult_Request__Sequence * lhs, const drone_msgs__action__SysId_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__SysId_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__SysId_GetResult_Request__Sequence__copy(
  const drone_msgs__action__SysId_GetResult_Request__Sequence * input,
  drone_msgs__action__SysId_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__SysId_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__SysId_GetResult_Request * data =
      (drone_msgs__action__SysId_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__SysId_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__SysId_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__SysId_GetResult_Request__copy(
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
// #include "drone_msgs/action/detail/sys_id__functions.h"

bool
drone_msgs__action__SysId_GetResult_Response__init(drone_msgs__action__SysId_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!drone_msgs__action__SysId_Result__init(&msg->result)) {
    drone_msgs__action__SysId_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__action__SysId_GetResult_Response__fini(drone_msgs__action__SysId_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  drone_msgs__action__SysId_Result__fini(&msg->result);
}

bool
drone_msgs__action__SysId_GetResult_Response__are_equal(const drone_msgs__action__SysId_GetResult_Response * lhs, const drone_msgs__action__SysId_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!drone_msgs__action__SysId_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__action__SysId_GetResult_Response__copy(
  const drone_msgs__action__SysId_GetResult_Response * input,
  drone_msgs__action__SysId_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!drone_msgs__action__SysId_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

drone_msgs__action__SysId_GetResult_Response *
drone_msgs__action__SysId_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_GetResult_Response * msg = (drone_msgs__action__SysId_GetResult_Response *)allocator.allocate(sizeof(drone_msgs__action__SysId_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__SysId_GetResult_Response));
  bool success = drone_msgs__action__SysId_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__SysId_GetResult_Response__destroy(drone_msgs__action__SysId_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__SysId_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__SysId_GetResult_Response__Sequence__init(drone_msgs__action__SysId_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_GetResult_Response * data = NULL;

  if (size) {
    data = (drone_msgs__action__SysId_GetResult_Response *)allocator.zero_allocate(size, sizeof(drone_msgs__action__SysId_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__SysId_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__SysId_GetResult_Response__fini(&data[i - 1]);
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
drone_msgs__action__SysId_GetResult_Response__Sequence__fini(drone_msgs__action__SysId_GetResult_Response__Sequence * array)
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
      drone_msgs__action__SysId_GetResult_Response__fini(&array->data[i]);
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

drone_msgs__action__SysId_GetResult_Response__Sequence *
drone_msgs__action__SysId_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_GetResult_Response__Sequence * array = (drone_msgs__action__SysId_GetResult_Response__Sequence *)allocator.allocate(sizeof(drone_msgs__action__SysId_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__SysId_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__SysId_GetResult_Response__Sequence__destroy(drone_msgs__action__SysId_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__SysId_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__SysId_GetResult_Response__Sequence__are_equal(const drone_msgs__action__SysId_GetResult_Response__Sequence * lhs, const drone_msgs__action__SysId_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__SysId_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__SysId_GetResult_Response__Sequence__copy(
  const drone_msgs__action__SysId_GetResult_Response__Sequence * input,
  drone_msgs__action__SysId_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__SysId_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__SysId_GetResult_Response * data =
      (drone_msgs__action__SysId_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__SysId_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__SysId_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__SysId_GetResult_Response__copy(
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
// #include "drone_msgs/action/detail/sys_id__functions.h"

bool
drone_msgs__action__SysId_FeedbackMessage__init(drone_msgs__action__SysId_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    drone_msgs__action__SysId_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!drone_msgs__action__SysId_Feedback__init(&msg->feedback)) {
    drone_msgs__action__SysId_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
drone_msgs__action__SysId_FeedbackMessage__fini(drone_msgs__action__SysId_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  drone_msgs__action__SysId_Feedback__fini(&msg->feedback);
}

bool
drone_msgs__action__SysId_FeedbackMessage__are_equal(const drone_msgs__action__SysId_FeedbackMessage * lhs, const drone_msgs__action__SysId_FeedbackMessage * rhs)
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
  if (!drone_msgs__action__SysId_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
drone_msgs__action__SysId_FeedbackMessage__copy(
  const drone_msgs__action__SysId_FeedbackMessage * input,
  drone_msgs__action__SysId_FeedbackMessage * output)
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
  if (!drone_msgs__action__SysId_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

drone_msgs__action__SysId_FeedbackMessage *
drone_msgs__action__SysId_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_FeedbackMessage * msg = (drone_msgs__action__SysId_FeedbackMessage *)allocator.allocate(sizeof(drone_msgs__action__SysId_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__action__SysId_FeedbackMessage));
  bool success = drone_msgs__action__SysId_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__action__SysId_FeedbackMessage__destroy(drone_msgs__action__SysId_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__action__SysId_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__action__SysId_FeedbackMessage__Sequence__init(drone_msgs__action__SysId_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_FeedbackMessage * data = NULL;

  if (size) {
    data = (drone_msgs__action__SysId_FeedbackMessage *)allocator.zero_allocate(size, sizeof(drone_msgs__action__SysId_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__action__SysId_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__action__SysId_FeedbackMessage__fini(&data[i - 1]);
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
drone_msgs__action__SysId_FeedbackMessage__Sequence__fini(drone_msgs__action__SysId_FeedbackMessage__Sequence * array)
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
      drone_msgs__action__SysId_FeedbackMessage__fini(&array->data[i]);
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

drone_msgs__action__SysId_FeedbackMessage__Sequence *
drone_msgs__action__SysId_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__action__SysId_FeedbackMessage__Sequence * array = (drone_msgs__action__SysId_FeedbackMessage__Sequence *)allocator.allocate(sizeof(drone_msgs__action__SysId_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__action__SysId_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__action__SysId_FeedbackMessage__Sequence__destroy(drone_msgs__action__SysId_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__action__SysId_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__action__SysId_FeedbackMessage__Sequence__are_equal(const drone_msgs__action__SysId_FeedbackMessage__Sequence * lhs, const drone_msgs__action__SysId_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__action__SysId_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__action__SysId_FeedbackMessage__Sequence__copy(
  const drone_msgs__action__SysId_FeedbackMessage__Sequence * input,
  drone_msgs__action__SysId_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__action__SysId_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__action__SysId_FeedbackMessage * data =
      (drone_msgs__action__SysId_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__action__SysId_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__action__SysId_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__action__SysId_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
