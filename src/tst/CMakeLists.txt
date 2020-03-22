# Reference: https://raymii.org/s/tutorials/Cpp_project_setup_with_cmake_and_unit_tests.html

#####################
# WHAT IS THIS???
#####################
set(BINARY ${CMAKE_PROJECT_NAME}_tst)
set(SOURCES ${TEST_SOURCES})

#####################
# add_executable
#####################
add_executable(${BINARY}
    main.cpp
    formula_test.cpp)

#####################
# add_test
#####################
# add_test() also adds executable.
add_test(NAME ${BINARY} COMMAND ${BINARY})

#####################
#
#####################
# With target_link_libraries() we tell CMake that our target depends on which libraries.
target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)

FOREACH(element ${BINARY})
  message("Salam element")
ENDFOREACH()
