cmake_minimum_required(VERSION 3.3)

# Solution
project(xtdc.examples)

# Options
option(XTDC_BUILD_EXAMPLES_XTD_CMAKE "Build xtd.cmake examples" ON)
option(XTDC_BUILD_EXAMPLES_XTD_CORE "Build xtd.core examples" ON)
option(XTDC_BUILD_EXAMPLES_XTD_DRAWING "Build xtd.drawing examples" ON)
option(XTDC_BUILD_EXAMPLES_XTD_FORMS "Build xtd.forms examples" ON)
option(XTDC_BUILD_EXAMPLES_XTD_TUNIT "Build xtd.tunit examples" ON)

# Find xtd package
find_package(xtdc REQUIRED)

# Projects
if (XTD_BUILD_EXAMPLES_XTD_CMAKE)
  #add_projects(xtdc.cmake.examples)
endif()

if (XTD_BUILD_EXAMPLES_XTD_CORE)
  #add_projects(xtdc.core.examples)
endif()

if (XTD_BUILD_EXAMPLES_XTD_DRAWING)
  #add_projects(xtdc.drawing.examples)
endif()

if (XTD_BUILD_EXAMPLES_XTD_FORMS)
  #add_projects(xtdc.forms.examples)
endif()

if (XTD_BUILD_EXAMPLES_XTD_TUNIT)
  #add_projects(xtdc.tunit.examples)
endif()
