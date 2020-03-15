# Refs:
# https://cliutils.gitlab.io/modern-cmake/chapters/basics.html
# https://raymii.org/s/tutorials/Cpp_project_setup_with_cmake_and_unit_tests.html

set(BINARY ${CMAKE_PROJECT_NAME})


#####################
# add_executable
#####################
add_executable(ExampleProject_run
    main.cpp
    formula.cpp
    formula.h)
# ExampleProject_run: is the name of two things:
# 1. generated executable file(.exe)
# 2. generated CMake target
# Then source and header files are listed.
# Header files can be ignored. Only source files are compiled.
# But they are listed so IDE shows them in the target folder.
# Each target is shown with a folder in IDEs.
# In CMake, a "target" is executable or library file.

set(SOURCES ${SOURCES})

#####################
# add_library
#####################
# We make a library with add_library.
# Library type can be: STATIC/SHARED/MODULE
add_library(${BINARY}_lib STATIC
    main.cpp
    formula.cpp
    formula.h)
