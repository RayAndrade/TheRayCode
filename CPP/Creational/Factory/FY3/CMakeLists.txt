cmake_minimum_required(VERSION 3.22)
project(F3)

set(CMAKE_CXX_STANDARD 23)

add_executable(F3 main.cpp Product.h ProductA.h ProductB.h Creator.h CreatorA.h CreatorB.h)
