cmake_minimum_required(VERSION 3.16)
project(Visitor)

set(CMAKE_CXX_STANDARD 14)

add_executable(Visitor main.cpp Visitor.cpp Visitor.h ComponentA.cpp ComponentA.h ComponentB.cpp ComponentB.h Component.cpp Component.h Visitor1.cpp Visitor1.h Visitor2.cpp Visitor2.h)