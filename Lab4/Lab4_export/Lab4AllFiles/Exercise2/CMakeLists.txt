cmake_minimum_required(VERSION 3.15)
project(Exercise2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Exercise2
        Driver.cpp
        Square.cpp
        Square.h
        )
