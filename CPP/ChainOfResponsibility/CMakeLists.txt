cmake_minimum_required(VERSION 3.16)
project(ChainOfResponsibility)

set(CMAKE_CXX_STANDARD 14)

add_executable(ChainOfResponsibility main.cpp Handler.h AbstractHandler.h MouseHandler.h CatHandler.h DogHandler.h)