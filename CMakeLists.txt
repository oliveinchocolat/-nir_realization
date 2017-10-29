cmake_minimum_required(VERSION 3.6)
project(three_coloring)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp graph.cpp graph.h extra_type.h)
add_executable(three_coloring ${SOURCE_FILES})