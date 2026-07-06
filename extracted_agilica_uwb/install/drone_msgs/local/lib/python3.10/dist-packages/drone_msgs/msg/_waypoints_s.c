// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from drone_msgs:msg/Waypoints.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "drone_msgs/msg/detail/waypoints__struct.h"
#include "drone_msgs/msg/detail/waypoints__functions.h"

bool drone_msgs__msg__waypoint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * drone_msgs__msg__waypoint__convert_to_py(void * raw_ros_message);
bool drone_msgs__msg__waypoint__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * drone_msgs__msg__waypoint__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool drone_msgs__msg__waypoints__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("drone_msgs.msg._waypoints.Waypoints", full_classname_dest, 35) == 0);
  }
  drone_msgs__msg__Waypoints * ros_message = _ros_message;
  {  // current_wp
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_wp");
    if (!field) {
      return false;
    }
    if (!drone_msgs__msg__waypoint__convert_from_py(field, &ros_message->current_wp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // previous_wp
    PyObject * field = PyObject_GetAttrString(_pymsg, "previous_wp");
    if (!field) {
      return false;
    }
    if (!drone_msgs__msg__waypoint__convert_from_py(field, &ros_message->previous_wp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // last_wp_reached
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_wp_reached");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->last_wp_reached = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * drone_msgs__msg__waypoints__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Waypoints */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("drone_msgs.msg._waypoints");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Waypoints");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  drone_msgs__msg__Waypoints * ros_message = (drone_msgs__msg__Waypoints *)raw_ros_message;
  {  // current_wp
    PyObject * field = NULL;
    field = drone_msgs__msg__waypoint__convert_to_py(&ros_message->current_wp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_wp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // previous_wp
    PyObject * field = NULL;
    field = drone_msgs__msg__waypoint__convert_to_py(&ros_message->previous_wp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "previous_wp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_wp_reached
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->last_wp_reached ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_wp_reached", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
