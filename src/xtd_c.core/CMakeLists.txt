cmake_minimum_required(VERSION 3.3)

# Project
project(xtd_c.core)
find_package(xtd REQUIRED)
add_include_directories(include)

add_sources(
  include/xtd_c/console.h
  include/xtd_c/console_color.h
  include/xtd_c/event_args.h
  include/xtd_c/event_handler.h
  include/xtd_c/errors.h
  include/xtd_c/object.h
  include/xtd_c/types.h
  include/xtd_c/ustring.h
  include/xtd_c/xtd_c.core.h
  include/xtd_c/privates/__ustring_helper__.h
  include/xtd_c/object_template.txt
  include/xtd_c/diagnostics/debug.h
  include/xtd_c/diagnostics/debugger.h
  include/xtd_c/diagnostics/current_stack_frame.h
  include/xtd_c/diagnostics/trace_listener.h
  include/xtd_c/diagnostics/trace_listener_collection.h
  include/xtd_c/diagnostics/trace_options.h
  )
add_sources(
  src/xtd_c/console.cpp
  src/xtd_c/event_args.cpp
  src/xtd_c/errors.cpp
  src/xtd_c/object.cpp
  src/xtd_c/ustring.cpp
  src/xtd_c/diagnostics/debug.cpp
  src/xtd_c/diagnostics/debugger.cpp
  src/xtd_c/diagnostics/current_stack_frame.cpp
)
target_type(STATIC_LIBRARY)
