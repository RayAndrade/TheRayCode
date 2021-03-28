cmake_minimum_required(VERSION 3.16)
project(Template)

set(CMAKE_CXX_STANDARD 14)

add_executable(Template main.cpp AbstractClass.cpp AbstractClass.h ConcreteClass1.cpp ConcreteClass1.h ConcreteClass2.cpp ConcreteClass2.h)