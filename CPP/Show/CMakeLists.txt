cmake_minimum_required(VERSION 3.21)
project(Show)

set(CMAKE_CXX_STANDARD 23)

add_executable(Show main.cpp Type.h Prototype.h ConcretePrototype1.h ConcretePrototype2.h Factory.h)
