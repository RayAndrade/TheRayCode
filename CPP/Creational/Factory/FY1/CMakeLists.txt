cmake_minimum_required(VERSION 3.22)
project(FY1)

set(CMAKE_CXX_STANDARD 23)

add_executable(FY1 main.cpp Toys.cpp ToyFactory.cpp Toy.h Car.h Bike.h Plane.h)
