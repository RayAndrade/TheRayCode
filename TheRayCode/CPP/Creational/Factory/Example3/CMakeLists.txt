cmake_minimum_required(VERSION 3.26)
project(Example3)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example3 main.cpp
        Dessert.h
        Cake.h
        IceCream.h
        DessertFactory.h)
