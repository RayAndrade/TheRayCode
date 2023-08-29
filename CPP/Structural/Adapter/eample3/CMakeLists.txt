cmake_minimum_required(VERSION 3.26)
project(eample3)

set(CMAKE_CXX_STANDARD 17)

add_executable(eample3 main.cpp
        Adaptee.h
        Adaptee.cpp
        Target.h
        Adapter.h
        Adapter.cpp)
