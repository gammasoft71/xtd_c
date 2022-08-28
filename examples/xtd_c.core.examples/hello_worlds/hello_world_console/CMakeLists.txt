cmake_minimum_required(VERSION 3.3)

project(hello_world_console)
find_package(xtd_c REQUIRED)
add_sources(src/hello_world_console.c)
target_type(C_CONSOLE_APPLICATION)
