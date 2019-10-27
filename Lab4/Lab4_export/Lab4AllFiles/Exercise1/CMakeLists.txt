cmake_minimum_required(VERSION 3.15)
project(Exercise1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Exercise1
        CopyAssignTest.cpp
        MyClass.cpp
        MyClass.h MySubClass.cpp MySubClass.h)
