cmake_minimum_required(VERSION 3.26)
project(Mediator)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example2 main.cpp
        Mediator.h
        User.h
        ChatRoom.h)
