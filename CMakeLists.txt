cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)



# This must be called before adding any subdirectories
enable_testing()


add_subdirectory(src/cpp_src)
add_subdirectory(tests)

