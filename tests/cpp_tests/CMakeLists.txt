include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)


# Add the executable for the test
add_executable(test_add test_add.cpp)

# Link the test executable with the library
target_link_libraries(test_add PRIVATE GTest::GTest add)

# Specify include directories for the test
target_include_directories(test_add PRIVATE ${CMAKE_SOURCE_DIR}/src)

# Register the test with CTest
add_test(AddTest test_add)