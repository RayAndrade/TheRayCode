cmake_minimum_required(VERSION 3.26)
project(beginning)

set(CMAKE_CXX_STANDARD 17)

add_executable(beginning main.cpp
        Sandwich.h
        SandwichBuilder.h
        ClubSandwichBuilder.h
        SandwichDirector.h
)
