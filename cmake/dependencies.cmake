include(FetchContent)

include(cmake/dependencies/slint.cmake)

if (BUILD_CURL)
    include(cmake/dependencies/curl.cmake)
endif()

# if (BUILD_LIBPQXX)
#     include(cmake/dependencies/libpqxx.cmake)
# endif()

# if (BUILD_OPENSSL)
#     include(cmake/dependencies/openssl.cmake)
# endif()


