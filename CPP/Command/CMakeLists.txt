cmake_minimum_required(VERSION 3.16)
project(Command)

set(CMAKE_CXX_STANDARD 14)

add_executable(Command main.cpp Command.h SimpleCommand.h Receiver.h ComplexCommand.h Invoker.h)