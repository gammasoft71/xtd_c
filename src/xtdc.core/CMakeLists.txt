cmake_minimum_required(VERSION 3.3)

# Project
project(xtdc.core)
find_package(xtd REQUIRED)
add_include_directories(include)

add_sources(
  include/xtdc/object.h
  include/xtdc/ustring.h
)
add_sources(
  src/xtdc/object.cpp
  src/xtdc/ustring.cpp
)
target_type(STATIC_LIBRARY)
