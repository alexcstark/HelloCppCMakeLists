# Reference: https://raymii.org/s/tutorials/Cpp_project_setup_with_cmake_and_unit_tests.html

set(BINARY ${CMAKE_PROJECT_NAME}_tst)
set(SOURCES ${TEST_SOURCES})
add_executable(ExampleProject_tst
    main.cpp
    formula_test.cpp)
add_test(NAME ${BINARY} COMMAND ${BINARY})
target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)
