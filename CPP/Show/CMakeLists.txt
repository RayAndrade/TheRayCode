cmake_minimum_required(VERSION 3.21)
project(Show)

set(CMAKE_CXX_STANDARD 23)

add_executable(Show main.cpp Product.h Builder.h Director.h ConcreteBuilder.h)
