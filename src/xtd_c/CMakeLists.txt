cmake_minimum_required(VERSION 3.3)

# Project
project(xtd_c)
find_package(xtd REQUIRED)
add_include_directories(include)
add_references(xtd_c.core xtd_c.drawing xtd_c.forms)

add_sources(
  include/xtd_c/xtd_c.h
  include/doxygen/controls_appearances_page.dox
  include/doxygen/cursors_appearances_page.dox
  include/doxygen/dialogs_appearances_page.dox
  include/doxygen/groups.dox
  include/doxygen/license_page.dox
  include/doxygen/main_page.dox
  src/xtd_c/xtd_c.cpp
)
target_type(STATIC_LIBRARY)

# Install
add_install_include_directories(include/xtd_c)
install_component()
