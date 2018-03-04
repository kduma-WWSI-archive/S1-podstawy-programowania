cmake_minimum_required(VERSION 3.6)
project(PP)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp calc.cpp f_io.cpp test.cpp)
add_executable(PP ${SOURCE_FILES})