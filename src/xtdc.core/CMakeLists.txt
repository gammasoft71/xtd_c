cmake_minimum_required(VERSION 3.3)

# Project
project(xtdc.core)
find_package(xtd REQUIRED)
add_include_directories(include)

add_sources(
  include/xtdc/console.h
  include/xtdc/console_color.h
  include/xtdc/event_args.h
  include/xtdc/event_handler.h
  include/xtdc/object.h
  include/xtdc/types.h
  include/xtdc/ustring.h
  include/xtdc/xtdc.core.h
  include/xtdc/privates/__ustring_helper__.h
)
add_sources(
  src/xtdc/console.cpp
  src/xtdc/event_args.cpp
  src/xtdc/object.cpp
  src/xtdc/ustring.cpp
)
target_type(STATIC_LIBRARY)
