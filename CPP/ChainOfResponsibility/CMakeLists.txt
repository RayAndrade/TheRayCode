cmake_minimum_required(VERSION 3.16)
project(ChainOfResponsibility)

set(CMAKE_CXX_STANDARD 14)

add_executable(ChainOfResponsibility main.cpp Handler.cpp Handler.h AbstractHandler.cpp AbstractHandler.h MonkeyHandler.cpp MonkeyHandler.h SquirrelHandler.cpp SquirrelHandler.h DogHandler.cpp DogHandler.h)