cmake_minimum_required(VERSION 3.3)

# Solution
project(tests)
find_package(xtd REQUIRED)

add_projects(xtd_c.core.manual_tests)
add_projects(xtd_c.forms.manual_tests)
