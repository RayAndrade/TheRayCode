cmake_minimum_required(VERSION 3.25)
project(Demo)

set(CMAKE_CXX_STANDARD 23)

add_executable(Demo Demo.cpp Singleton.h Singleton.cpp)
