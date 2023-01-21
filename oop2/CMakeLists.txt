cmake_minimum_required(VERSION 3.18)

project(oop2)

set(OOP2_DIR ${CMAKE_CURRENT_SOURCE_DIR}/oop2)
set(OOP2_INCLUDE_DIR ${OOP2_DIR}/include)
message("OOP2_DIR = ${OOP2_DIR}")
message("OOP2_INCLUDE_DIR = ${OOP2_INCLUDE_DIR}")

add_subdirectory(googletest)

add_library(functions functions.cpp)
add_executable(main oop2.cpp)
target_link_libraries(main functions)

add_executable(tests tests.cpp)
target_link_libraries(tests functions gtest gtest_main)