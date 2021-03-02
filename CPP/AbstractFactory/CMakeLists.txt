cmake_minimum_required(VERSION 3.19)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory main.cpp ProductA.h ProductA1.h ProductA2.h ProductB.h ProductB1.h ProductB2.h AbstractFactory.h Factory1.h Factory2.h)