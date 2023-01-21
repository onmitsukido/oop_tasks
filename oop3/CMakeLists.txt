cmake_minimum_required(VERSION 3.18)

project(oop3)

set(OOP3_DIR ${CMAKE_CURRENT_SOURCE_DIR}/oop2)
set(OOP3_INCLUDE_DIR ${OOP3_DIR}/include)
message("OOP3_DIR = ${OOP3_DIR}")
message("OOP3_INCLUDE_DIR = ${OOP3_INCLUDE_DIR}")

add_subdirectory(googletest)

add_library(functions functions.cpp)
add_executable(main oop3.cpp)
target_link_libraries(main functions)

add_executable(tests tests.cpp)
target_link_libraries(tests functions gtest gtest_main)