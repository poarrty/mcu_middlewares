// generated from
// rosidl_typesupport_microxrcedds_c/resource/rosidl_typesupport_microxrcedds_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef CHASSIS_INTERFACES__MSG__ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__VISIBILITY_CONTROL_H_
#define CHASSIS_INTERFACES__MSG__ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_EXPORT_chassis_interfaces __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_chassis_interfaces __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_EXPORT_chassis_interfaces __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_chassis_interfaces __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_BUILDING_DLL_chassis_interfaces
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_chassis_interfaces ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_EXPORT_chassis_interfaces
  #else
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_chassis_interfaces ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_chassis_interfaces
  #endif
#else
  #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_EXPORT_chassis_interfaces __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_chassis_interfaces
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_chassis_interfaces __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_chassis_interfaces
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // CHASSIS_INTERFACES__MSG__ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__VISIBILITY_CONTROL_H_
