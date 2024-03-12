cmake_minimum_required(VERSION 3.27)
project(Example3)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example3 main.cpp
        VendingMachine.h
        State.h
        IdleState.h
        HasCoinState.h
        SoldState.h
        VendingMachine.cpp
        IdleState.cpp
        HasCoinState.cpp
        SoldState.cpp
)
