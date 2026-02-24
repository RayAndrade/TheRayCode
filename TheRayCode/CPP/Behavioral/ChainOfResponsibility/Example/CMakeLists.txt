cmake_minimum_required(VERSION 3.27)
project(Example)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example main.cpp
        DishWasher.h
        Teenager.h
        Parent.h
        Robot.h
)
