cmake_minimum_required(VERSION 3.20)
project(staging_clion)

add_definitions("-std=c++20")
set(CMAKE_CXX_STANDARD 20)

find_package (SQLite3)
include_directories(${SQLite3_INCLUDE_DIRS})

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(staging_clion main.cpp)

target_link_libraries(staging_clion ${SQLite3_LIBRARIES} ${CONAN_LIBS})
