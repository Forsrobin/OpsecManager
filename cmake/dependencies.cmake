include(FetchContent)

option(BUILD_POSTGRESS "Build postgress" OFF)
option(BUILD_OPENSSL "Build postgress" ON)

include(cmake/dependencies/slint.cmake)

if (BUILD_POSTGRESS)
    include(cmake/dependencies/postgres.cmake)
    target_link_libraries(${TARGET_NAME} PUBLIC libpqxx::pqxx)
endif()

if (BUILD_OPENSSL)
    include(cmake/dependencies/openssl.cmake)
endif()


