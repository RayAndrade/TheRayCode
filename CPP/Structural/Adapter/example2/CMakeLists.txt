cmake_minimum_required(VERSION 3.26)
project(example2)

set(CMAKE_CXX_STANDARD 17)

add_executable(example2 main.cpp
        Interface1.h
        Interface2.h
        Object1.h
        Object2.h
        Adapter.h)
