cmake_minimum_required(VERSION 3.16)
project(Prototype)

set(CMAKE_CXX_STANDARD 14)

add_executable(Prototype main.cpp Type.h Prototype.h ConcretePrototype1.h ConcretePrototype2.h Factory.h)