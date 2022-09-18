cmake_minimum_required(VERSION 3.17)
project(Decorator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Decorator main.cpp Component.h ConcreteComponent.h Decorator.h ConcreteDecoratorA.h ConcreteDecoratorB.h)