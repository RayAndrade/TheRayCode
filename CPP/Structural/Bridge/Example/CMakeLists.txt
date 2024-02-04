cmake_minimum_required(VERSION 3.26)
project(example)

set(CMAKE_CXX_STANDARD 17)

add_executable(example main.cpp
        Implementation.h
        Abstraction.h
        ConcreteImplementationA.h
        ConcreteImplementationB.h
        ExtendedAbstraction.h)
