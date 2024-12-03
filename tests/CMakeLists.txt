# Add the executable for the test
add_executable(test_add test_add.cpp)

# Link the test executable with the library
target_link_libraries(test_add PRIVATE add)

# Specify include directories for the test
target_include_directories(test_add PRIVATE ${CMAKE_SOURCE_DIR}/src)

# Register the test with CTest
add_test(AddTest test_add)