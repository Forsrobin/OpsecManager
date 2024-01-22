cmake_minimum_required(VERSION 3.28)
project(opsec_manager LANGUAGES CXX)
enable_testing()

set(CMAKE_INCLUDE_CURRENT_DIR_IN_INTERFACE ON)
set(CMAKE_CXX_STANDARD 23)
# set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
# set(CMAKE_CXX_EXTENSIONS OFF)

# Options to enable and disable
option(BUILD_PROJECT "Build the application UI" ON)
option(BUILD_SLINT "Build slint integration" ON)

option(BUILD_LIBPQXX "Build libpqxx" ON)
option(BUILD_OPENSSL "Build OpenSSL" ON)
option(BUILD_CURL "Build CURL" ON)


# This is where all the dependencies are defined
include(cmake/dependencies.cmake)

add_compile_definitions(
    $<$<CONFIG:Debug>:NDEBUG>
    SPDLOG_ACTIVE_LEVEL=$<IF:$<CONFIG:Debug>,SPDLOG_LEVEL_INFO,SPDLOG_LEVEL_WARN>
)

if (BUILD_PROJECT AND BUILD_SLINT)
    add_subdirectory(project)
endif()


