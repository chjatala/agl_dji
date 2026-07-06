// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wifi_msgs:msg/RangeRSSI.idl
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
#include "wifi_msgs/msg/detail/range_rssi__struct.h"
#include "wifi_msgs/msg/detail/range_rssi__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
bool wifi_msgs__msg__diagnostics_rssi__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * wifi_msgs__msg__diagnostics_rssi__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool wifi_msgs__msg__range_rssi__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("wifi_msgs.msg._range_rssi.RangeRSSI", full_classname_dest, 35) == 0);
  }
  wifi_msgs__msg__RangeRSSI * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ap_mac
    PyObject * field = PyObject_GetAttrString(_pymsg, "ap_mac");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->ap_mac, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // valid_ap_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid_ap_position");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid_ap_position = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ap_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "ap_position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->ap_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // valid_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid_range");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid_range = (Py_True == field);
    Py_DECREF(field);
  }
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // diagnostics
    PyObject * field = PyObject_GetAttrString(_pymsg, "diagnostics");
    if (!field) {
      return false;
    }
    if (!wifi_msgs__msg__diagnostics_rssi__convert_from_py(field, &ros_message->diagnostics)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wifi_msgs__msg__range_rssi__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RangeRSSI */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wifi_msgs.msg._range_rssi");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RangeRSSI");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wifi_msgs__msg__RangeRSSI * ros_message = (wifi_msgs__msg__RangeRSSI *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ap_mac
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->ap_mac.data,
      strlen(ros_message->ap_mac.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ap_mac", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid_ap_position
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid_ap_position ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid_ap_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ap_position
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->ap_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ap_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid_range
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid_range ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diagnostics
    PyObject * field = NULL;
    field = wifi_msgs__msg__diagnostics_rssi__convert_to_py(&ros_message->diagnostics);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "diagnostics", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
