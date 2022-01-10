cmake_minimum_required(VERSION 3.21)
project(Show)

set(CMAKE_CXX_STANDARD 23)

set(Headers Type.h Prototype.h ConcretePrototype1.h ConcretePrototype2.h Factory.h)

add_executable(Show ${PROJECT_SOURCE_DIR}/ main.cpp Type.h Prototype.h ConcretePrototype1.h ConcretePrototype2.h Factory.h)
