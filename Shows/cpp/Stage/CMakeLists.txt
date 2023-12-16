cmake_minimum_required(VERSION 3.27)
project(Stage)

set(CMAKE_CXX_STANDARD 17)

add_executable(Stage main.cpp
        Component.h
        ConcreteComponent.cpp
        ConcreteComponent.h
        Decorator.h
        ConcreteDecoratorA.h)
