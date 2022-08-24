cmake_minimum_required(VERSION 3.3)

# Solution
project(src)
find_package(xtd REQUIRED)

# Projects
add_projects(xtd_c.core)
add_projects(xtd_c.drawing)
add_projects(xtd_c.forms)
add_projects(xtd_c)
