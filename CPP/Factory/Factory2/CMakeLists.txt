cmake_minimum_required(VERSION 3.21)
project(Factory2)

set(CMAKE_CXX_STANDARD 23)

add_executable(Factory2 main.cpp vehicle.h factory.h factory.cpp vehicle.cpp)
