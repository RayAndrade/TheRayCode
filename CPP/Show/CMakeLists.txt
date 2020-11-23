cmake_minimum_required(VERSION 3.17)
project(Show)

set(CMAKE_CXX_STANDARD 14)

add_executable(Show main.cpp Component.h Decorator.h ConcreteComponent.h ConcreteDecoratorA.h ConcreteDecoratorB.h)