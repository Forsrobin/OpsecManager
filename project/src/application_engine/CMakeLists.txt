set(TARGET_NAME ${PROJECT_NAME}_application_engine)

add_library(${TARGET_NAME} STATIC application_engine.cpp)
add_library(${PROJECT_NAME}::${TARGET_NAME} ALIAS ${TARGET_NAME})

slint_target_sources(${TARGET_NAME} ../../ui/app_window.slint)
target_link_libraries(${TARGET_NAME} PUBLIC Slint::Slint)
target_link_libraries(${TARGET_NAME} PUBLIC opsec_includes)
