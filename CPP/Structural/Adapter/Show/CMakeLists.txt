cmake_minimum_required(VERSION 3.26)
project(Show)

set(CMAKE_CXX_STANDARD 23)

add_executable(Show main.cpp
        Target.h
        Adaptee.h
        Adapter.h)
