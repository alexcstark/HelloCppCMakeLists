set(BINARY ${CMAKE_PROJECT_NAME})

add_executable(ExampleProject_run
    main.cpp
    formula.cpp
    formula.h)
set(SOURCES ${SOURCES})

add_library(${BINARY}_lib STATIC
    main.cpp
    formula.cpp
    formula.h)
