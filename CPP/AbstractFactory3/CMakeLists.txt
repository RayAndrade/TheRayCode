cmake_minimum_required(VERSION 3.20)
project(AbstractFactory3)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory3 main.cpp AbstractFactory.h AbstractProductA.h AbstractProductB.h ConcreteFactory1.h ConcreteFactory2.h ProductA1.h ProductA2.h ProductB1.h ProductB2.h)
