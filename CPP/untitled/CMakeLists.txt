cmake_minimum_required(VERSION 3.21)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled main.cpp AbstractProductA.h AbstractProductB.h AbstractFactory.h ProductA1.h ProductA2.h ProductB1.h ProductB2.h ConcreteFactory1.h ConcreteFactory2.h)
