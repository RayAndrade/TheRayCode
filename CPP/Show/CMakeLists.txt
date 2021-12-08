cmake_minimum_required(VERSION 3.21)
project(Show)

set(CMAKE_CXX_STANDARD 23)

add_executable(Show main.cpp AbstractProductA.h AbstractProductB.h AbstractFactory.h ProductA1.h ProductA2.h ConcreteFactory1.h ProductB1.h ProductB2.h ConcreteFactory2.h)
