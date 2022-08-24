cmake_minimum_required(VERSION 3.3)

# Project
project(xtd_c.forms.manual_tests)
find_package(xtd REQUIRED)
add_references(xtd_c)
add_sources(src/manual_tests.c)
target_type(C_GUI_APPLICATION)
