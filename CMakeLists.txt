cmake_minimum_required(VERSION 3.3)

# Solution
project(xtdc)
find_package(xtd REQUIRED)

add_projects(src)
add_projects(tests)
