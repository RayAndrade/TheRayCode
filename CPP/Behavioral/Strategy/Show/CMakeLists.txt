cmake_minimum_required(VERSION 3.27)
project(Show)

set(CMAKE_CXX_STANDARD 17)

add_executable(Show main.cpp
        Strategy.h
        ConcreteStrategyA.h
        ConcreteStrategyB.h
        Context.h
        ConcreteStrategyA.cpp
        ConcreteStrategyB.cpp
        Context.cpp
)
