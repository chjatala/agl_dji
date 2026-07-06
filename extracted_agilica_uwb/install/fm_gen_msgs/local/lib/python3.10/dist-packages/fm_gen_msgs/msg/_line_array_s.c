// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from fm_gen_msgs:msg/LineArray.idl
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
#include "fm_gen_msgs/msg/detail/line_array__struct.h"
#include "fm_gen_msgs/msg/detail/line_array__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "fm_gen_msgs/msg/detail/line__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool fm_gen_msgs__msg__line__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * fm_gen_msgs__msg__line__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool fm_gen_msgs__msg__line_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("fm_gen_msgs.msg._line_array.LineArray", full_classname_dest, 37) == 0);
  }
  fm_gen_msgs__msg__LineArray * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // num_detection
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_detection");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_detection = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // camera_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->camera_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // time_captured
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_captured");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time_captured = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lines
    PyObject * field = PyObject_GetAttrString(_pymsg, "lines");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lines'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!fm_gen_msgs__msg__Line__Sequence__init(&(ros_message->lines), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create fm_gen_msgs__msg__Line__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    fm_gen_msgs__msg__Line * dest = ros_message->lines.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!fm_gen_msgs__msg__line__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * fm_gen_msgs__msg__line_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LineArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("fm_gen_msgs.msg._line_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LineArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  fm_gen_msgs__msg__LineArray * ros_message = (fm_gen_msgs__msg__LineArray *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_detection
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_detection);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_detection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->camera_id.data,
      strlen(ros_message->camera_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_captured
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time_captured);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_captured", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lines
    PyObject * field = NULL;
    size_t size = ros_message->lines.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    fm_gen_msgs__msg__Line * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lines.data[i]);
      PyObject * pyitem = fm_gen_msgs__msg__line__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "lines", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
