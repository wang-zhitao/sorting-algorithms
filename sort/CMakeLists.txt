cmake_minimum_required(VERSION 3.15)
project(sort)

file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

add_library(SORT STATIC ${SRC_LIST})