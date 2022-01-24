// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from chassis_interfaces:msg/UploadRunLog.idl
// generated code does not contain a copyright notice

#ifndef CHASSIS_INTERFACES__MSG__DETAIL__UPLOAD_RUN_LOG__STRUCT_H_
#define CHASSIS_INTERFACES__MSG__DETAIL__UPLOAD_RUN_LOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'log_type'
// Member 'log_value'
// Member 'application_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/UploadRunLog in the package chassis_interfaces.
typedef struct chassis_interfaces__msg__UploadRunLog
{
  rosidl_runtime_c__String log_type;
  rosidl_runtime_c__String log_value;
  rosidl_runtime_c__String application_name;
} chassis_interfaces__msg__UploadRunLog;

// Struct for a sequence of chassis_interfaces__msg__UploadRunLog.
typedef struct chassis_interfaces__msg__UploadRunLog__Sequence
{
  chassis_interfaces__msg__UploadRunLog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} chassis_interfaces__msg__UploadRunLog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHASSIS_INTERFACES__MSG__DETAIL__UPLOAD_RUN_LOG__STRUCT_H_