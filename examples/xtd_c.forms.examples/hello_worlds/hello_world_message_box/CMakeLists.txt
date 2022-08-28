cmake_minimum_required(VERSION 3.3)

project(hello_world_message_box)
find_package(xtd_c REQUIRED)
add_sources(src/hello_world_message_box.c)
target_type(C_GUI_APPLICATION)
