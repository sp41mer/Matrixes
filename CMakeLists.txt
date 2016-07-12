cmake_minimum_required(VERSION 3.3)
project(Matrixes)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES task2.cpp)
add_executable(Matrixes ${SOURCE_FILES})