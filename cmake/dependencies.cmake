include(FetchContent)

option(BUILD_LIBPQXX "Build libpqxx" ON)
option(BUILD_OPENSSL "Build OpenSSL" ON)

include(cmake/dependencies/slint.cmake)

if (BUILD_LIBPQXX)
    include(cmake/dependencies/libpqxx.cmake)
endif()

if (BUILD_OPENSSL)
    include(cmake/dependencies/openssl.cmake)
endif()


