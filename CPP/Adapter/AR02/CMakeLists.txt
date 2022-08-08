cmake_minimum_required(VERSION 3.23)
project(AR02)

set(CMAKE_CXX_STANDARD 23)

add_executable(AR02 main.cpp Interface1.h Interface2.h Object1.h Object2.h Adapter.h)
