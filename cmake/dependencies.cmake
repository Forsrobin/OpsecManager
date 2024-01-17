include(FetchContent)

option(BUILD_POSTGRESS "Build postgress" OFF)

include(cmake/dependencies/slint.cmake)

if (BUILD_POSTGRESS)
    include(cmake/dependencies/postgres.cmake)
    target_link_libraries(${TARGET_NAME} PUBLIC libpqxx::pqxx)
endif()


