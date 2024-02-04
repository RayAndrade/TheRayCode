cmake_minimum_required(VERSION 3.26)
project(example2)

set(CMAKE_CXX_STANDARD 17)

add_executable(example2 main.cpp
        fillColorImp.h
        greenColor.h
        redColor.h
        Shape.h
        bridge.h
        squar.h
        Rectangle.h)
