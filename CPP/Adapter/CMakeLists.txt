cmake_minimum_required(VERSION 3.16)
project(Adapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(Adapter main.cpp Adaptee.h Target.h Adapter.h)