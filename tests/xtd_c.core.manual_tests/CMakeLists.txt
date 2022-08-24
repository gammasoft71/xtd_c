cmake_minimum_required(VERSION 3.3)

# Project
project(xtd_c.core.manual_tests)
find_package(xtd REQUIRED)
#find_package(xtd_c REQUIRED)
#add_references(xtd_c.tunit xtd_c.forms)
add_sources(src/manual_tests.c)
target_type(C_CONSOLE_APPLICATION)
