cmake_minimum_required(VERSION 3.19)
project(Factory)

set(CMAKE_CXX_STANDARD 14)

add_executable(Factory main.cpp Product.h ConcreteProduct1.h ConcreteProduct2.h Creator.h ConcreteCreator1.h ConcreteCreator2.h)