cmake_minimum_required(VERSION 3.3)

# Project
project(xtd_c.drawing)
find_package(xtd REQUIRED)
add_include_directories(include)
add_references(xtd_c.core xtd.drawing)

add_sources(
  include/xtd_c/point.h
  include/xtd_c/size.h
  include/xtd_c/xtd_c.drawing.h
  include/xtd_c/drawing_template.txt
)
add_sources(
  src/xtd_c/point.cpp
  src/xtd_c/size.cpp
)
target_type(STATIC_LIBRARY)
