cmake_minimum_required(VERSION 3.19)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory main.cpp ProductA.h ProductB.h Factory.h ProductB1.h ProductB2.h)