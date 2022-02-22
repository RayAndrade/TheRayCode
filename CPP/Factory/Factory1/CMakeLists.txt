cmake_minimum_required(VERSION 3.21)
project(Factory1)

set(CMAKE_CXX_STANDARD 23)

add_executable(Factory1 main.cpp ToyFactory.cpp Object.cpp)
