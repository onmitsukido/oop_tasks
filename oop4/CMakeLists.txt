cmake_minimum_required(VERSION 3.18)

project(oop4)

add_library(functions functions4.cpp)
add_executable(main oop4.cpp)
target_link_libraries(main functions)