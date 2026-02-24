cmake_minimum_required(VERSION 3.27)
project(Example3)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example3 main.cpp
        Command.h
        Light.h
        TV.h
        LightOnCommand.h
        LightOffCommand.h
        TVOnCommand.h
        TVOffCommand.h
        RemoteControl.h)
