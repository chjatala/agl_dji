// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from drone_msgs:msg/DroneStateStamped.idl
// generated code does not contain a copyright notice
#include "drone_msgs/msg/detail/drone_state_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `drone_id`
// Member `flight_state`
// Member `ctrl_mode`
// Member `cam_state`
// Member `nav_state`
// Member `mission_state`
// Member `pil_state`
#include "rosidl_runtime_c/string_functions.h"

bool
drone_msgs__msg__DroneStateStamped__init(drone_msgs__msg__DroneStateStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    drone_msgs__msg__DroneStateStamped__fini(msg);
    return false;
  }
  // drone_id
  if (!rosidl_runtime_c__String__init(&msg->drone_id)) {
    drone_msgs__msg__DroneStateStamped__fini(msg);
    return false;
  }
  // flight_state
  if (!rosidl_runtime_c__String__init(&msg->flight_state)) {
    drone_msgs__msg__DroneStateStamped__fini(msg);
    return false;
  }
  // ctrl_mode
  if (!rosidl_runtime_c__String__init(&msg->ctrl_mode)) {
    drone_msgs__msg__DroneStateStamped__fini(msg);
    return false;
  }
  // cam_state
  if (!rosidl_runtime_c__String__init(&msg->cam_state)) {
    drone_msgs__msg__DroneStateStamped__fini(msg);
    return false;
  }
  // nav_state
  if (!rosidl_runtime_c__String__init(&msg->nav_state)) {
    drone_msgs__msg__DroneStateStamped__fini(msg);
    return false;
  }
  // mission_state
  if (!rosidl_runtime_c__String__init(&msg->mission_state)) {
    drone_msgs__msg__DroneStateStamped__fini(msg);
    return false;
  }
  // pil_state
  if (!rosidl_runtime_c__String__init(&msg->pil_state)) {
    drone_msgs__msg__DroneStateStamped__fini(msg);
    return false;
  }
  // armed
  // battery_remain
  // battery_voltage
  return true;
}

void
drone_msgs__msg__DroneStateStamped__fini(drone_msgs__msg__DroneStateStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // drone_id
  rosidl_runtime_c__String__fini(&msg->drone_id);
  // flight_state
  rosidl_runtime_c__String__fini(&msg->flight_state);
  // ctrl_mode
  rosidl_runtime_c__String__fini(&msg->ctrl_mode);
  // cam_state
  rosidl_runtime_c__String__fini(&msg->cam_state);
  // nav_state
  rosidl_runtime_c__String__fini(&msg->nav_state);
  // mission_state
  rosidl_runtime_c__String__fini(&msg->mission_state);
  // pil_state
  rosidl_runtime_c__String__fini(&msg->pil_state);
  // armed
  // battery_remain
  // battery_voltage
}

bool
drone_msgs__msg__DroneStateStamped__are_equal(const drone_msgs__msg__DroneStateStamped * lhs, const drone_msgs__msg__DroneStateStamped * rhs)
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
  // drone_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->drone_id), &(rhs->drone_id)))
  {
    return false;
  }
  // flight_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->flight_state), &(rhs->flight_state)))
  {
    return false;
  }
  // ctrl_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ctrl_mode), &(rhs->ctrl_mode)))
  {
    return false;
  }
  // cam_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->cam_state), &(rhs->cam_state)))
  {
    return false;
  }
  // nav_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->nav_state), &(rhs->nav_state)))
  {
    return false;
  }
  // mission_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_state), &(rhs->mission_state)))
  {
    return false;
  }
  // pil_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->pil_state), &(rhs->pil_state)))
  {
    return false;
  }
  // armed
  if (lhs->armed != rhs->armed) {
    return false;
  }
  // battery_remain
  if (lhs->battery_remain != rhs->battery_remain) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  return true;
}

bool
drone_msgs__msg__DroneStateStamped__copy(
  const drone_msgs__msg__DroneStateStamped * input,
  drone_msgs__msg__DroneStateStamped * output)
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
  // drone_id
  if (!rosidl_runtime_c__String__copy(
      &(input->drone_id), &(output->drone_id)))
  {
    return false;
  }
  // flight_state
  if (!rosidl_runtime_c__String__copy(
      &(input->flight_state), &(output->flight_state)))
  {
    return false;
  }
  // ctrl_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->ctrl_mode), &(output->ctrl_mode)))
  {
    return false;
  }
  // cam_state
  if (!rosidl_runtime_c__String__copy(
      &(input->cam_state), &(output->cam_state)))
  {
    return false;
  }
  // nav_state
  if (!rosidl_runtime_c__String__copy(
      &(input->nav_state), &(output->nav_state)))
  {
    return false;
  }
  // mission_state
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_state), &(output->mission_state)))
  {
    return false;
  }
  // pil_state
  if (!rosidl_runtime_c__String__copy(
      &(input->pil_state), &(output->pil_state)))
  {
    return false;
  }
  // armed
  output->armed = input->armed;
  // battery_remain
  output->battery_remain = input->battery_remain;
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  return true;
}

drone_msgs__msg__DroneStateStamped *
drone_msgs__msg__DroneStateStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__msg__DroneStateStamped * msg = (drone_msgs__msg__DroneStateStamped *)allocator.allocate(sizeof(drone_msgs__msg__DroneStateStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(drone_msgs__msg__DroneStateStamped));
  bool success = drone_msgs__msg__DroneStateStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
drone_msgs__msg__DroneStateStamped__destroy(drone_msgs__msg__DroneStateStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    drone_msgs__msg__DroneStateStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
drone_msgs__msg__DroneStateStamped__Sequence__init(drone_msgs__msg__DroneStateStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__msg__DroneStateStamped * data = NULL;

  if (size) {
    data = (drone_msgs__msg__DroneStateStamped *)allocator.zero_allocate(size, sizeof(drone_msgs__msg__DroneStateStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = drone_msgs__msg__DroneStateStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        drone_msgs__msg__DroneStateStamped__fini(&data[i - 1]);
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
drone_msgs__msg__DroneStateStamped__Sequence__fini(drone_msgs__msg__DroneStateStamped__Sequence * array)
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
      drone_msgs__msg__DroneStateStamped__fini(&array->data[i]);
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

drone_msgs__msg__DroneStateStamped__Sequence *
drone_msgs__msg__DroneStateStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  drone_msgs__msg__DroneStateStamped__Sequence * array = (drone_msgs__msg__DroneStateStamped__Sequence *)allocator.allocate(sizeof(drone_msgs__msg__DroneStateStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = drone_msgs__msg__DroneStateStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
drone_msgs__msg__DroneStateStamped__Sequence__destroy(drone_msgs__msg__DroneStateStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    drone_msgs__msg__DroneStateStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
drone_msgs__msg__DroneStateStamped__Sequence__are_equal(const drone_msgs__msg__DroneStateStamped__Sequence * lhs, const drone_msgs__msg__DroneStateStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!drone_msgs__msg__DroneStateStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
drone_msgs__msg__DroneStateStamped__Sequence__copy(
  const drone_msgs__msg__DroneStateStamped__Sequence * input,
  drone_msgs__msg__DroneStateStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(drone_msgs__msg__DroneStateStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    drone_msgs__msg__DroneStateStamped * data =
      (drone_msgs__msg__DroneStateStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!drone_msgs__msg__DroneStateStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          drone_msgs__msg__DroneStateStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!drone_msgs__msg__DroneStateStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
