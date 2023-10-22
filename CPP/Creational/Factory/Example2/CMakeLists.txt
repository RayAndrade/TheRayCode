cmake_minimum_required(VERSION 3.26)
project(Example2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example2 main.cpp
        Shape.h
        Circle.h
        Square.h
        ShapeFactory.h)
