cmake_minimum_required(VERSION 3.3)

# Project
project(xtdc.forms.manual_tests)
#find_package(xtdc REQUIRED)
set(SOURCES
  src/manual_tests.c
)
source_group(src FILES ${SOURCES})

# Options
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# Application properties
add_executable(${PROJECT_NAME} WIN32 MACOSX_BUNDLE ${SOURCES})
target_link_libraries(${PROJECT_NAME} xtdc.forms)
