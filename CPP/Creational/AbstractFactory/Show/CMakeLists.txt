cmake_minimum_required(VERSION 3.24)
project(Show)

set(CMAKE_CXX_STANDARD 14)

add_executable(Show main.cpp AbstractProductA.h AbstractProductB.h AbstractFactory.h ProductA1.h ProductB1.h ConcreteFactory2.h ProductA2.h ProductB2.h)
