cmake_minimum_required(VERSION 3.20)
project(AbstractFactory1)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory1 Client.cpp CarFactory.cpp CarFactory.h Car.cpp)
