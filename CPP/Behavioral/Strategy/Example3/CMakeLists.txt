cmake_minimum_required(VERSION 3.27)
project(Example3)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example3 main.cpp
        Strategy.h
        JuggleBalls.h
        JuggleKnives.h
        JuggleChainsaws.h
        Juggler.h)
