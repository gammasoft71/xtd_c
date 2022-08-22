cmake_minimum_required(VERSION 3.3)

# Project
project(xtdc.core.manual_tests VERSION 1.0.0)
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
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} xtdc.core)
