cmake_minimum_required(VERSION 3.22)
project(AR2)

set(CMAKE_CXX_STANDARD 23)

add_executable(AR2 main.cpp Interface1.h Object1.h Interface2.h Object2.h Adapter.h)
