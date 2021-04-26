cmake_minimum_required(VERSION 3.19)
project(AbstractFactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(AbstractFactory main.cpp Product1.h Product1a.h Product2a.h Product2.h Product1b.h Product2b.h AbstractFactory.h Factory1.h Factory2.h)