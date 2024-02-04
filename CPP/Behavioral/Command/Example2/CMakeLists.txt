cmake_minimum_required(VERSION 3.27)
project(Example2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example2 main.cpp
        Receiver.h
        Command.h
        LightOnCommand.h
        MusicOnCommand.h
        CoffeeMakerOnCommand.h
        Invoker.h)
