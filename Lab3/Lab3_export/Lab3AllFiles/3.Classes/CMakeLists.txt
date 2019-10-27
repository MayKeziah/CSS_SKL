cmake_minimum_required(VERSION 3.15)
project(3_Classes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(3_Classes
        ClassTest.cpp
        Square.cpp
        Square.h
        SquareContainer.cpp
        SquareContainer.h)
