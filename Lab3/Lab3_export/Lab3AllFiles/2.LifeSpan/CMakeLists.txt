cmake_minimum_required(VERSION 3.15)
project(2_LifeSpan)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(2_LifeSpan
        ScopeEtc.cpp
        SuperInt.cpp
        SuperInt.h SuperSuperInt.cpp SuperSuperInt.h)
