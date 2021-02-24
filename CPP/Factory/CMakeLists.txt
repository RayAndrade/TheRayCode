cmake_minimum_required(VERSION 3.19)
project(Factory)

set(CMAKE_CXX_STANDARD 14)

add_executable(Factory main.cpp Product.h ConcreteProductA.h ConcreteProductB.h Creator.h ConcreteCreatorA.h ConcreteCreatorB.h)