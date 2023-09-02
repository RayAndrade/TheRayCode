cmake_minimum_required(VERSION 3.26)
project(example)

set(CMAKE_CXX_STANDARD 17)

add_executable(example main.cpp
        Component.h
        Leaf.h
        Composite.h)
