cmake_minimum_required(VERSION 3.16)
project(Visitor)

set(CMAKE_CXX_STANDARD 14)

add_executable(Visitor main.cpp Visitor.h ComponentA.h ComponentB.h Component.h Visitor1.h Visitor2.h)