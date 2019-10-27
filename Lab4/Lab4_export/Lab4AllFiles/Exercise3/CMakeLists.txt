cmake_minimum_required(VERSION 3.15)
project(Exercise3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Exercise3
        IteratorTest.cpp
        SquareContainer2.cpp
        SquareContainer2.h)
