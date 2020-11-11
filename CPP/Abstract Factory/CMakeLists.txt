cmake_minimum_required(VERSION 3.17)
project(Abstract_Factory)

set(CMAKE_CXX_STANDARD 14)

add_executable(Abstract_Factory main.cpp AbstractProductA.cpp AbstractProductA.h SolidProductA1.cpp SolidProductA1.h SolidProductA2.cpp SolidProductA2.h AbstractProductB.cpp AbstractProductB.h SolidFactory1.cpp SolidFactory1.h SolidProductB1.cpp SolidProductB1.h SolidProductB2.cpp SolidProductB2.h AbstractFactory.cpp AbstractFactory.h SolidFactory2.cpp SolidFactory2.h)