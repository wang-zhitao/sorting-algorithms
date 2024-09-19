cmake_minimum_required(VERSION 3.15)
project(sortTest)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/sort)

add_executable(sortTest main.cpp)
target_link_libraries(sortTest SORT)
