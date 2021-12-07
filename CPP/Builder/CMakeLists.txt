cmake_minimum_required(VERSION 3.21)
project(Builder)

set(CMAKE_CXX_STANDARD 23)

add_executable(Builder main.cpp Builder.h Product.h Director.h ConcreteBuilder.h)
