cmake_minimum_required(VERSION 3.5)

project(main LANGUAGES CXX)
include_directories(lib)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main main.cpp header.h)
add_subdirectory(lib)
target_link_libraries(main dll_lib)
