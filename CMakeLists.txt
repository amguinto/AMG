cmake_minimum_required(VERSION 3.16)
project(AMG)

set(CMAKE_CXX_STANDARD 14)
add_library(${PROJECT_NAME} OBJECT
        include/Coordinate.h
        include/math/math_utils.hpp)
