cmake_minimum_required(VERSION 3.17)
project(Memento)

set(CMAKE_CXX_STANDARD 14)

add_executable(Memento main.cpp Memento.h SolverMemento.h Originator.h Caretaker.h)