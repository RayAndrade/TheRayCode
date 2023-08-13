cmake_minimum_required(VERSION 3.26)
project(example1)

set(CMAKE_CXX_STANDARD 17)

add_executable(example1 main.cpp
        DishWasher.h
        Teenager.h
        Parent.h
        Robot.h)
