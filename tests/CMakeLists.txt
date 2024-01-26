include(CTest)

find_package(GTest REQUIRED COMPONENTS gtest_main)

add_executable(opsec_manager_tests application_engine_test.cc)
target_link_libraries(opsec_manager_tests
 PRIVATE
  opsec_manager
  gtest::gtestt)

# add_test(NAME opsec_manager_tests COMMAND opsec_manager_tests)
include(GoogleTest)
gtest_discover_tests(hello_test)