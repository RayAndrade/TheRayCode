cmake_minimum_required(VERSION 3.17)
project(Facade)

set(CMAKE_CXX_STANDARD 14)

add_executable(Facade main.cpp Subsystem1.cpp Subsystem1.h Subsystem2.cpp Subsystem2.h Facade.cpp Facade.h)