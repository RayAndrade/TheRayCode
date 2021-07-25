cmake_minimum_required(VERSION 3.17)
project(Bridge)

set(CMAKE_CXX_STANDARD 14)

add_executable(Bridge main.cpp Implementation.h Abstraction.h ConcreteImplementationA.h)