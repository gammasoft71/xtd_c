cmake_minimum_required(VERSION 3.3)

# Project
project(xtd_c.forms)
find_package(xtd REQUIRED)
add_include_directories(include)
add_references(xtd_c.drawing xtd.forms)

add_sources(
  include/xtd_c/forms/anchor_styles.h
  include/xtd_c/forms/appearance.h
  include/xtd_c/forms/application.h
  include/xtd_c/forms/button.h
  include/xtd_c/forms/context_menu.h
  include/xtd_c/forms/control.h
  include/xtd_c/forms/control_appearance.h
  include/xtd_c/forms/control_collection.h
  include/xtd_c/forms/cursor.h
  include/xtd_c/forms/dialog_result.h
  include/xtd_c/forms/dock_style.h
  include/xtd_c/forms/form.h
  include/xtd_c/forms/image_layout.h
  include/xtd_c/forms/message_box.h
  include/xtd_c/forms/message_box_buttons.h
  include/xtd_c/forms/message_box_default_button.h
  include/xtd_c/forms/message_box_icon.h
  include/xtd_c/forms/message_box_options.h
  include/xtd_c/xtd_c.forms.h
  include/xtd_c/control_template.txt
)
add_sources(
  src/xtd_c/forms/application.cpp
  src/xtd_c/forms/button.cpp
  src/xtd_c/forms/context_menu.cpp
  src/xtd_c/forms/control.cpp
  src/xtd_c/forms/control_collection.cpp
  src/xtd_c/forms/cursor.cpp
  src/xtd_c/forms/form.cpp
  src/xtd_c/forms/message_box.cpp
)
target_type(STATIC_LIBRARY)

# Install
add_install_include_directories(include/xtd_c)
install_component()
