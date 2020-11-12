cmake_minimum_required(VERSION 3.17)
project(Show)

set(CMAKE_CXX_STANDARD 14)

add_executable(Show main.cpp Implementation.h ConcreteImplementationA.h ConcreteImplementationB.h Abstraction.h ExtendedAbstraction.h)