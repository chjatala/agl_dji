#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "vitro_interface::vitro_mqtt" for configuration "Release"
set_property(TARGET vitro_interface::vitro_mqtt APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(vitro_interface::vitro_mqtt PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libvitro_mqtt.so"
  IMPORTED_SONAME_RELEASE "libvitro_mqtt.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS vitro_interface::vitro_mqtt )
list(APPEND _IMPORT_CHECK_FILES_FOR_vitro_interface::vitro_mqtt "${_IMPORT_PREFIX}/lib/libvitro_mqtt.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
