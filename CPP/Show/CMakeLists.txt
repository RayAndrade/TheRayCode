cmake_minimum_required(VERSION 3.21)
project(Show)

set(CMAKE_CXX_STANDARD 14)

add_executable(Show main.cpp Builder.h Product.h Director.h ConcreteBuilder.h)
