cmake_minimum_required(VERSION 3.26)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp
        Superhero.h
        JusticeLeagueMediator.h
        Batman.h
        JusticeLeagueMediatorImpl.h
        Superman.h
        WonderWoman.h)
