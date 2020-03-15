# Reference: https://raymii.org/s/tutorials/Cpp_project_setup_with_cmake_and_unit_tests.html

cmake_minimum_required(VERSION 3.10)
project(ExampleProject
    VERSION 1.0
    DESCRIPTION "Hello CMakeLists!"
    LANGUAGES CXX
    )
# Each project can include multiple "target"s.

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_subdirectory(src)
add_subdirectory(tst)
add_subdirectory(lib/googletest)
