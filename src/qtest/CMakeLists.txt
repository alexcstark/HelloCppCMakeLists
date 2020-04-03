cmake_minimum_required(VERSION 2.8.11)
project(foo)

enable_testing()

# Tell CMake to run moc when necessary:
set(CMAKE_AUTOMOC ON)

# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Test REQUIRED)

add_executable(foo foo.cpp)
add_test(foo foo)

target_link_libraries(foo Qt5::Test)