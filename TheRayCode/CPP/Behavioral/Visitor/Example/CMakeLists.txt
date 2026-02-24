cmake_minimum_required(VERSION 3.26)
project(Example)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example main.cpp Visitor.h
        Component.h
        ComponentA.h
        ComponentB.h
        Visitor1.h
        Visitor2.h)
