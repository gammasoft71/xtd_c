cmake_minimum_required(VERSION 3.3)

# Solution
project(src)
find_package(xtd REQUIRED)

# Projects
add_projects(xtdc.core)
add_projects(xtdc.drawing)
add_projects(xtdc.forms)
