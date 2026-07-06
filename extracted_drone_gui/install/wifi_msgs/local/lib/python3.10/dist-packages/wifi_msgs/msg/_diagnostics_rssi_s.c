// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wifi_msgs:msg/DiagnosticsRSSI.idl
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
#include "wifi_msgs/msg/detail/diagnostics_rssi__struct.h"
#include "wifi_msgs/msg/detail/diagnostics_rssi__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wifi_msgs__msg__diagnostics_rssi__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("wifi_msgs.msg._diagnostics_rssi.DiagnosticsRSSI", full_classname_dest, 47) == 0);
  }
  wifi_msgs__msg__DiagnosticsRSSI * ros_message = _ros_message;
  {  // rssi
    PyObject * field = PyObject_GetAttrString(_pymsg, "rssi");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rssi = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a
    PyObject * field = PyObject_GetAttrString(_pymsg, "a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // n
    PyObject * field = PyObject_GetAttrString(_pymsg, "n");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->n = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wifi_msgs__msg__diagnostics_rssi__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DiagnosticsRSSI */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wifi_msgs.msg._diagnostics_rssi");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DiagnosticsRSSI");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wifi_msgs__msg__DiagnosticsRSSI * ros_message = (wifi_msgs__msg__DiagnosticsRSSI *)raw_ros_message;
  {  // rssi
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rssi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rssi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // n
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "n", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
