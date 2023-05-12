cmake_minimum_required(VERSION 3.24)
project(Factory)

set(CMAKE_CXX_STANDARD 23)

add_executable(Factory main.cpp Toy.h "Bike.h" Car.h Plane.h SantasBag.h ToyFactory.h)
