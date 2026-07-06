cmake_minimum_required(VERSION 3.8)
project(psdk_wrapper C)

set(CMAKE_C_STANDARD 11)
add_definitions(-D_GNU_SOURCE)

execute_process(COMMAND uname -m OUTPUT_VARIABLE HOST_ARCH OUTPUT_STRIP_TRAILING_WHITESPACE)
if (HOST_ARCH STREQUAL "x86_64")
    set(PSDK_LIB_ARCH_DIR x86_64-linux-gnu-gcc)
elseif (HOST_ARCH STREQUAL "aarch64")
    set(PSDK_LIB_ARCH_DIR aarch64-linux-gnu-gcc)
else ()
    message(FATAL_ERROR "psdk_wrapper: unsupported host architecture '${HOST_ARCH}' "
                         "(DJI only ships prebuilt PSDK static libs for x86_64/aarch64/arm Linux)")
endif ()

set(PSDK_LIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/third_party/psdk_lib)

add_library(psdk_wrapper SHARED
    src/psdk_wrapper.c
    third_party/platform/osal/osal.c
    third_party/platform/osal/osal_fs.c
    third_party/platform/osal/osal_socket.c
    third_party/platform/hal/hal_uart.c
)

target_include_directories(psdk_wrapper PRIVATE
    ${PSDK_LIB_DIR}/include
    third_party/platform
    third_party/platform/hal
)

find_library(PSDK_STATIC_LIB payloadsdk
    PATHS ${PSDK_LIB_DIR}/lib/${PSDK_LIB_ARCH_DIR}
    NO_DEFAULT_PATH
)
if (NOT PSDK_STATIC_LIB)
    message(FATAL_ERROR "psdk_wrapper: could not find libpayloadsdk.a under "
                         "${PSDK_LIB_DIR}/lib/${PSDK_LIB_ARCH_DIR}")
endif ()

target_link_libraries(psdk_wrapper
    -Wl,--whole-archive ${PSDK_STATIC_LIB} -Wl,--no-whole-archive
    m dl pthread rt
)

install(TARGETS psdk_wrapper
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)

find_package(ament_cmake QUIET)
if (ament_cmake_FOUND)
    ament_package()
endif ()
