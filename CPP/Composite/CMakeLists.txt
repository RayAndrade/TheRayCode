cmake_minimum_required(VERSION 3.17)
project(Composite)

set(CMAKE_CXX_STANDARD 14)

add_executable(Composite main.cpp Component.h Leaf.h Composite.h)