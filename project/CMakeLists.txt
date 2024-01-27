# Custom target to generate the Slint C++ API from the Slint source files.
set(TARGET_NAME ${PROJECT_NAME})

add_subdirectory(src/application_engine)

add_library(opsec_includes STATIC)
target_sources(opsec_includes
    PUBLIC
        FILE_SET CXX_MODULES FILES
            src/network_manager.cpp
)

add_executable(${TARGET_NAME} src/main.cpp)

target_link_libraries(${TARGET_NAME} PRIVATE opsec_includes)
target_link_libraries(${TARGET_NAME} PRIVATE ${PROJECT_NAME}_application_engine)

target_link_libraries(${TARGET_NAME} PUBLIC Slint::Slint)
target_link_libraries(${TARGET_NAME} PUBLIC CURL::libcurl)


# On Windows, copy the Slint DLL next to the application binary so that it's found.

if (WIN32)
    target_compile_definitions(${TARGET_NAME} PRIVATE NOMINMAX)

    add_custom_command(TARGET ${TARGET_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        $<TARGET_RUNTIME_DLLS:${TARGET_NAME}>
        $<TARGET_FILE_DIR:${TARGET_NAME}> COMMAND_EXPAND_LISTS
    )
endif()