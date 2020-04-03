# Refs:
# https://cliutils.gitlab.io/modern-cmake/chapters/basics.html
# https://raymii.org/s/tutorials/Cpp_project_setup_with_cmake_and_unit_tests.html
# https://code.egym.de/how-to-use-modern-cmake-for-an-app-lib-project-3c2ee6018cde
# https://www.dealii.org/9.1.1/users/cmakelists.html

#####################
# WHAT IS THIS???
#####################
set(BINARY ${CMAKE_PROJECT_NAME})
set(SOURCES ${SOURCES})

#####################
# add_executable
#####################
# Create a target ( commands like add_library and add_executable create targets):
add_executable(${BINARY}_run
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

#####################
# add_library
#####################
# Create a target ( commands like add_library and add_executable create targets):
# We make a library with add_library.
# Library type can be: STATIC/SHARED/MODULE
add_library(${BINARY}_lib STATIC
    main.cpp
    formula.cpp
    formula.h)

# with add_library() we add the source files to the module named ${BINARY}_lib.
# Each "module" gives origin to one "target".
# If we add a .cpp file to several add_executable() calls, meaning if we create several "target"s,
# the .cpp files must be compiled for each target separately. One way to evade this, to compile .cpp
# files once and then to use the "module" or "object target" all the time, is using add_library().
# After creating "module" using add_library(), we need to "link" the "object target", "object file", into the
# executables.
# Here we create a library from source files. We compile the files into a library file. Thereafter, e.g. in tests,
# we can use this library and we save compiling the files again.
