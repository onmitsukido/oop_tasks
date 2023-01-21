cmake_minimum_required(VERSION 3.18)

project(oop6)

set(OOP6_DIR ${CMAKE_CURRENT_SOURCE_DIR}/oop6)
set(OOP6_INCLUDE_DIR ${OOP6_DIR}/include)
message("OOP6_DIR = ${OOP6_DIR}")
message("OOP6_INCLUDE_DIR = ${OOP6_INCLUDE_DIR}")

add_subdirectory(googletest)

add_library(functions functions.cpp)
add_executable(main oop6.cpp)
target_link_libraries(main functions)

add_executable(tests tests.cpp)
target_link_libraries(tests functions gtest gtest_main)