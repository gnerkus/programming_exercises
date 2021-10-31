cmake_minimum_required(VERSION 3.20)
project(staging_clion)

set(CMAKE_CXX_STANDARD 20)

add_executable(staging_clion main.cpp)

find_package (SQLite3)
include_directories(${SQLite3_INCLUDE_DIRS})
target_link_libraries(staging_clion ${SQLite3_LIBRARIES})