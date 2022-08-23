cmake_minimum_required(VERSION 3.3)

# Project
project(xtdc.forms)
find_package(xtd REQUIRED)
add_include_directories(include)
add_references(xtdc.drawing xtd.forms)

add_sources(
  include/xtdc/application.h
  include/xtdc/button.h
  include/xtdc/control.h
  include/xtdc/dialog_result.h
  include/xtdc/form.h
  include/xtdc/message_box.h
  include/xtdc/message_box_buttons.h
  include/xtdc/message_box_default_button.h
  include/xtdc/message_box_icon.h
  include/xtdc/message_box_options.h
  include/xtdc/xtdc.forms.h
)
add_sources(
  src/xtdc/application.cpp
  src/xtdc/button.cpp
  src/xtdc/control.cpp
  src/xtdc/form.cpp
  src/xtdc/message_box.cpp
)
target_type(STATIC_LIBRARY)
