cmake_minimum_required(VERSION 3.19)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(Show main.cpp AbstractFactory.h ConcreteFactory1.h ConcreteFactory2.h AbstractProductA.h AbstractProductB.h ProductA1.h ProductA2.h ProductB1.h ProductB2.h)