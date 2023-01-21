cmake_minimum_required(VERSION 3.18)

project(oop2)

add_library(functions functions.cpp)
add_executable(main oop2.cpp)
target_link_libraries(main functions)