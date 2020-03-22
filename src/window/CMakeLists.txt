# Refs:
# https://cliutils.gitlab.io/modern-cmake/chapters/basics.html
# https://raymii.org/s/tutorials/Cpp_project_setup_with_cmake_and_unit_tests.html
# https://code.egym.de/how-to-use-modern-cmake-for-an-app-lib-project-3c2ee6018cde
# https://www.dealii.org/9.1.1/users/cmakelists.html


find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Tell CMake to run moc when necessary:
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

#####################
# WHAT IS THIS???
#####################
set(BINARY ${CMAKE_PROJECT_NAME}_window)
set(SOURCES ${SOURCES})

#####################
# add_executable
#####################
# Create a target ( commands like add_library and add_executable create targets):
add_executable(${BINARY}
    main.cpp
    mainwindow.cpp
    mainwindow.ui
    mainwindow.h)
# ExampleProject_run: is the name of two things:
# 1. generated executable file(.exe)
# 2. generated CMake target
# Then source and header files are listed.
# Header files can be ignored. Only source files are compiled.
# But they are listed so IDE shows them in the target folder.
# Each target is shown with a folder in IDEs.
# In CMake, a "target" is executable or library file.

#####################
#
#####################
target_link_libraries(${BINARY} Qt5::Widgets)
