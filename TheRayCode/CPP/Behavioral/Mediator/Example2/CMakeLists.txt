cmake_minimum_required(VERSION 3.27)
project(Example2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example2 main.cpp
        Mediator.h
        Mediator.cpp
        Superhero.h
        Superhero.cpp
        SuperheroTeam.h
        SuperheroTeam.cpp)
