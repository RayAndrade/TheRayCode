cmake_minimum_required(VERSION 3.27)
project(Example)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example main.cpp
        State.h
        ConcreteStateA.h
        ConcreteStateB.h
        Context.h
        Context.cpp
        ConcreteStateA.cpp)
