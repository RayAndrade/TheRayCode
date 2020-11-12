cmake_minimum_required(VERSION 3.16)
project(Strategy)

set(CMAKE_CXX_STANDARD 14)

add_executable(Strategy main.cpp Strategy.cpp Strategy.h Context.cpp Context.h ConcreteStrategyA.cpp ConcreteStrategyA.h ConcreteStrategyB.cpp ConcreteStrategyB.h)