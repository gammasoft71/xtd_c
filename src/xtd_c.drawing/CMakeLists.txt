cmake_minimum_required(VERSION 3.3)

# Project
project(xtd_c.drawing)
find_package(xtd REQUIRED)
add_include_directories(include)
add_references(xtd_c.core xtd.drawing)

add_sources(
  include/xtd_c/drawing/color.h
  include/xtd_c/drawing/image.h
  include/xtd_c/drawing/known_color.h
  include/xtd_c/drawing/font.h
  include/xtd_c/drawing/point.h
  include/xtd_c/drawing/rectangle.h
  include/xtd_c/drawing/size.h
  include/xtd_c/xtd_c.drawing.h
  include/xtd_c/drawing_template.txt
)
add_sources(
  src/xtd_c/drawing/color.cpp
  src/xtd_c/drawing/image.cpp
  src/xtd_c/drawing/font.cpp
  src/xtd_c/drawing/point.cpp
  src/xtd_c/drawing/rectangle.cpp
  src/xtd_c/drawing/size.cpp
)
target_type(STATIC_LIBRARY)

# Install
add_install_include_directories(include/xtd_c)
install_component()
