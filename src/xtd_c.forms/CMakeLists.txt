cmake_minimum_required(VERSION 3.3)

# Project
project(xtd_c.forms)
find_package(xtd REQUIRED)
add_include_directories(include)
add_references(xtd_c.drawing xtd.forms)

add_sources(
  include/xtd_c/application.h
  include/xtd_c/button.h
  include/xtd_c/control.h
  include/xtd_c/dialog_result.h
  include/xtd_c/form.h
  include/xtd_c/message_box.h
  include/xtd_c/message_box_buttons.h
  include/xtd_c/message_box_default_button.h
  include/xtd_c/message_box_icon.h
  include/xtd_c/message_box_options.h
  include/xtd_c/xtd_c.forms.h
  include/xtd_c/control_template.txt
)
add_sources(
  src/xtd_c/application.cpp
  src/xtd_c/button.cpp
  src/xtd_c/control.cpp
  src/xtd_c/form.cpp
  src/xtd_c/message_box.cpp
)
target_type(STATIC_LIBRARY)

# Install
add_install_include_directories(include/xtd_c)
install_component()
