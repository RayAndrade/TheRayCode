cmake_minimum_required(VERSION 3.17)
project(Facade)

set(CMAKE_CXX_STANDARD 14)

add_executable(Facade main.cpp SystemA.h SystemB.h Facade.h)