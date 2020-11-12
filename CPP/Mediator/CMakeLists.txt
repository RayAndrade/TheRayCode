cmake_minimum_required(VERSION 3.17)
project(Mediator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Mediator main.cpp BaseComponent.cpp BaseComponent.h Mediator.cpp Mediator.h Component1.cpp Component1.h Component2.cpp Component2.h ConcreteMediator.cpp ConcreteMediator.h)