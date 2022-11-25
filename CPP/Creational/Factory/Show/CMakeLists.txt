cmake_minimum_required(VERSION 3.23)
project(Show)

set(CMAKE_CXX_STANDARD 23)

add_executable(Show main.cpp Toy.h Bike.h Car.h Plane.h SantasBag.h ToyFactory.h)
