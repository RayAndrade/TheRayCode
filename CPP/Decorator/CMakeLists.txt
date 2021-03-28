cmake_minimum_required(VERSION 3.17)
project(Decorator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Decorator main.cpp Component.cpp Component.h ConcreteComponent.cpp ConcreteComponent.h Decorator.cpp Decorator.h ConcreteDecoratorA.cpp ConcreteDecoratorA.h ConcreteDecoratorB.cpp ConcreteDecoratorB.h)