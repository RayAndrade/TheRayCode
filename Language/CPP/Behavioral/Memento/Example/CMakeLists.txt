cmake_minimum_required(VERSION 3.26)
project(Memento)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example main.cpp
        Potion.h
        Wizard.h
        Spellbook.h)
