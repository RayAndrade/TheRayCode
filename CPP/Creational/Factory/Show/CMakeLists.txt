cmake_minimum_required(VERSION 3.25)
project(Show)

set(CMAKE_CXX_STANDARD 23)

add_executable(Show main.cpp Shape.h Circle.h Square.h)
