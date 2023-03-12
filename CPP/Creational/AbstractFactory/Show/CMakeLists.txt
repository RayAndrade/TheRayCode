cmake_minimum_required(VERSION 3.24)
project(Show)

set(CMAKE_CXX_STANDARD 14)

add_executable(Show main.cpp Product.h ConcreteProduct1.h ConcreteProduct2.h Factory.h ConcreteFactory1.h ConcreteFactory2.h)
