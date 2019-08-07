cmake_minimum_required(VERSION 3.11)
project(raylib-js)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

add_subdirectory(include)
add_subdirectory(examples)
add_subdirectory(bin)