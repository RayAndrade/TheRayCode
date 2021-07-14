cmake_minimum_required(VERSION 3.19)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory main.cpp AbstractProductA.h ProductA1.h ProductA2.h AbstractProductB.h ProductB1.h ProductB2.h AbstractFactory.h ConcreteFactory1.h ConcreteFactory2.h)