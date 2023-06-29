cmake_minimum_required(VERSION 3.25)
project(Show1)

set(CMAKE_CXX_STANDARD 23)

add_executable(Show1 Demo.cpp Singleton.cpp Singleton.h NonSingleton.h NonSingleton.cpp)
