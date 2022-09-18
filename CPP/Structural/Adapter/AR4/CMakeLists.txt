cmake_minimum_required(VERSION 3.23)
project(Adapter)

set(CMAKE_CXX_STANDARD 23)

add_executable(AR4 main.cpp Target.h Adapter.cpp Adapter.h Adaptee.cpp Adaptee.h)
