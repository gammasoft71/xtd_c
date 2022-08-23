cmake_minimum_required(VERSION 3.3)

# Project
project(xtdc)
find_package(xtd REQUIRED)
add_include_directories(include)

add_sources(
  include/xtdc/xtdc.h
  include/doxygen/controls_appearances_page.dox
  include/doxygen/cursors_appearances_page.dox
  include/doxygen/dialogs_appearances_page.dox
  include/doxygen/groups.dox
  include/doxygen/license_page.dox
  include/doxygen/main_page.dox
  src/xtd/xtdc.cpp
)
target_type(STATIC_LIBRARY)
