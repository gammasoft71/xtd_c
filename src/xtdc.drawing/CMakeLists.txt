cmake_minimum_required(VERSION 3.3)

# Project
project(xtdc.drawing)
find_package(xtd REQUIRED)
add_include_directories(include)
add_references(xtdc.core xtd.drawing)

add_sources(
  include/xtdc/point.h
  include/xtdc/size.h
  include/xtdc/xtdc.drawing.h
)
add_sources(
  src/xtdc/point.cpp
  src/xtdc/size.cpp
)
target_type(STATIC_LIBRARY)
