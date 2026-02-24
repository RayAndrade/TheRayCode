cmake_minimum_required(VERSION 3.26)
project(Memento)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example2 main.cpp
        FairyTaleMemento.h
        EnchantedBook.h
        StoryKeeper.h)
