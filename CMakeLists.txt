cmake_minimum_required(VERSION 3.2)
project(AMG)

add_compile_options(-Wall -Wextra -Wpedantic)

set(CMAKE_CXX_STANDARD 14)
add_library(${PROJECT_NAME} OBJECT
        include/Coordinate.h
        include/math/math_utils.h)
