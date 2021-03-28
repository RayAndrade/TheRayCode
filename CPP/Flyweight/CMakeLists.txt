cmake_minimum_required(VERSION 3.17)
project(Flyweight)

set(CMAKE_CXX_STANDARD 14)

add_executable(Flyweight main.cpp SharedState.cpp SharedState.h UniqueState.cpp UniqueState.h Flyweight.cpp Flyweight.h FlyweightFactory.cpp FlyweightFactory.h)