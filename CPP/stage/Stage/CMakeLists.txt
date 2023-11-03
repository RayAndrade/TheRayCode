cmake_minimum_required(VERSION 3.26)
project(Show)

set(CMAKE_CXX_STANDARD 17)

add_executable(beginning main.cpp
        Meal.h
        Breakfast.h
        Lunch.h
        Dinner.h
        Dessert.h
        BreakfastFactory.h
)
