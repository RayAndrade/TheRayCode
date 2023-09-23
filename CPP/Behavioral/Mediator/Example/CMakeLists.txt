cmake_minimum_required(VERSION 3.17)
project(Mediator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Mediator main.cpp BaseComponent.h Mediator.h FirstComponent.h SecondComponent.h ConcreteMediator.h)