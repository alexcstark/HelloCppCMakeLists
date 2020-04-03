# Reference: https://raymii.org/s/tutorials/Cpp_project_setup_with_cmake_and_unit_tests.html

cmake_minimum_required(VERSION 3.10)
project(ExampleProject
    VERSION 1.0
    DESCRIPTION "Hello CMakeLists!"
    LANGUAGES CXX
    )
# Each project can include multiple "target"s.

set(CMAKE_CXX_STANDARD 14)

# Where should the compiler search for include files? We add "/src" directory to the list of directories in which
# compiler searches for includes.
include_directories(src)

# Regarding the directory of this CMakeLists.txt file, we add subdirectories to the build.
# Each subdirectory has its CMakeLists.txt and its source codes.
add_subdirectory(src)
add_subdirectory(window)
add_subdirectory(tst)
add_subdirectory(qtest)
add_subdirectory(lib/googletest)
