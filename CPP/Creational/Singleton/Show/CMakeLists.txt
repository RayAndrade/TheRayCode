cmake_minimum_required(VERSION 3.25)
project(Show)

set(CMAKE_CXX_STANDARD 17)

add_executable(Show Demo.cpp Singleton.h Singleton.cpp
)
