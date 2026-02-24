cmake_minimum_required(VERSION 3.27)
project(Example2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example2 main.cpp
        Joke.h
        Iterator.h
        JokeBook.h
        JokeIterator.h
)
