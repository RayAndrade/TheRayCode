cmake_minimum_required(VERSION 3.16)
project(Strategy)

set(CMAKE_CXX_STANDARD 14)

add_executable(Strategy main.cpp Strategy.h Context.h ConcreteStrategyA.h ConcreteStrategyB.h)