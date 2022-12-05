cmake_minimum_required(VERSION 3.22)
project(Factory)

set(CMAKE_CXX_STANDARD 23)

add_executable(Factory main.cpp Toys.cpp Toy.h Car.h Bike.h Plane.h ToyFactory.h)
