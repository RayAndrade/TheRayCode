cmake_minimum_required(VERSION 3.26)
project(Mediator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Example main.cpp
        Superhero.h
        JusticeLeagueMediator.h
        Batman.h
        Superman.h
        WonderWoman.h
        JusticeLeagueMediatorImpl.h
)
