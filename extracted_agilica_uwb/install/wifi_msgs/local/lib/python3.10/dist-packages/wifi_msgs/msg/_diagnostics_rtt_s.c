// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from wifi_msgs:msg/DiagnosticsRTT.idl
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
#include "wifi_msgs/msg/detail/diagnostics_rtt__struct.h"
#include "wifi_msgs/msg/detail/diagnostics_rtt__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool wifi_msgs__msg__diagnostics_rtt__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("wifi_msgs.msg._diagnostics_rtt.DiagnosticsRTT", full_classname_dest, 45) == 0);
  }
  wifi_msgs__msg__DiagnosticsRTT * ros_message = _ros_message;
  {  // rssi
    PyObject * field = PyObject_GetAttrString(_pymsg, "rssi");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rssi = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rssi_spread
    PyObject * field = PyObject_GetAttrString(_pymsg, "rssi_spread");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rssi_spread = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num_bursts
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_bursts");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->num_bursts = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // burst_duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "burst_duration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->burst_duration = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ftms_per_burst
    PyObject * field = PyObject_GetAttrString(_pymsg, "ftms_per_burst");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ftms_per_burst = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rtt_avg
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtt_avg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rtt_avg = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rtt_spread
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtt_spread");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rtt_spread = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rtt_variance
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtt_variance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rtt_variance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * wifi_msgs__msg__diagnostics_rtt__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DiagnosticsRTT */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("wifi_msgs.msg._diagnostics_rtt");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DiagnosticsRTT");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  wifi_msgs__msg__DiagnosticsRTT * ros_message = (wifi_msgs__msg__DiagnosticsRTT *)raw_ros_message;
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
  {  // rssi_spread
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rssi_spread);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rssi_spread", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_bursts
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->num_bursts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_bursts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // burst_duration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->burst_duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "burst_duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ftms_per_burst
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ftms_per_burst);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ftms_per_burst", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtt_avg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rtt_avg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtt_avg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtt_spread
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rtt_spread);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtt_spread", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtt_variance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rtt_variance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtt_variance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
