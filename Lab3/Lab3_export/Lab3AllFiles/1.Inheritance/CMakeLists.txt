cmake_minimum_required(VERSION 3.15)
project(1_Inheritance)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(1_Inheritance
        A.cpp
        A.h
        B.cpp
        B.h
        C.cpp
        C.h
        InheritanceTest.cpp)
