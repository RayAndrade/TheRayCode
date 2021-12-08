cmake_minimum_required(VERSION 3.19)
project(Factory)

set(CMAKE_CXX_STANDARD 23)

add_executable(Factory main.cpp Product.h ProductA.h ProductB.h Creator.h CreatorA.h CreatorB.h)