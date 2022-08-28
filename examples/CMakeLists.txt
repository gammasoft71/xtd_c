cmake_minimum_required(VERSION 3.3)

# Solution
project(xtdc.examples)

# Options
option(XTD_C_BUILD_EXAMPLES_XTD_C_CMAKE "Build xtd_c.cmake examples" ON)
option(XTD_C_BUILD_EXAMPLES_XTD_C_CORE "Build xtd_c.core examples" ON)
option(XTD_C_BUILD_EXAMPLES_XTD_C_DRAWING "Build xtd_c.drawing examples" ON)
option(XTD_C_BUILD_EXAMPLES_XTD_C_FORMS "Build xtd_c.forms examples" ON)
option(XTD_C_BUILD_EXAMPLES_XTD_C_TUNIT "Build xtd_c.tunit examples" ON)

# Find xtd package
find_package(xtdc REQUIRED)

# Projects
if (XTD_C_BUILD_EXAMPLES_XTD_C_CMAKE)
  add_projects(xtd_c.cmake.examples)
endif()

if (XTD_C_BUILD_EXAMPLES_XTD_C_CORE)
  add_projects(xtd_c.core.examples)
endif()

if (XTD_C_BUILD_EXAMPLES_XTD_C_DRAWING)
  #add_projects(xtd_c.drawing.examples)
endif()

if (XTD_C_BUILD_EXAMPLES_XTD_C_FORMS)
  add_projects(xtd_c.forms.examples)
endif()

if (XTD_C_BUILD_EXAMPLES_XTD_C_TUNIT)
  #add_projects(xtd_c.tunit.examples)
endif()
