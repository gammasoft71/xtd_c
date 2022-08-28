cmake_minimum_required(VERSION 3.3)

project(hello_world_cmake)
find_package(xtd_c REQUIRED)

message(STATUS "Hello, World!\n")

add_sources(src/hello_world_cmake.c)
target_type(C_GUI_APPLICATION)
