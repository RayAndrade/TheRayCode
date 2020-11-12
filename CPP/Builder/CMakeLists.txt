cmake_minimum_required(VERSION 3.17)
project(Builder)

set(CMAKE_CXX_STANDARD 14)

add_executable(Builder main.cpp Product.cpp Product.h Builder.cpp Builder.h ConcreteBuilder.cpp ConcreteBuilder.h Director.cpp Director.h)