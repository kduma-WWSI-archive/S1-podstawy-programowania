cmake_minimum_required(VERSION 3.6)
project(PP)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp src/wejscie.cpp src/wejscie.h src/wyjscie.cpp src/wyjscie.h src/obliczenia.cpp src/obliczenia.h)
add_executable(PP ${SOURCE_FILES})