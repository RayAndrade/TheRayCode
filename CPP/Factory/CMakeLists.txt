cmake_minimum_required(VERSION 3.19)
project(Factory)

set(CMAKE_CXX_STANDARD 14)

add_executable(Factory main.cpp Product.h Creator.h ConcreteProductA.h ConcreteProductB.h ConcreteCreatorA.h ConcreteCreatorB.h)