cmake_minimum_required(VERSION 3.26)
project(Example2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example2 main.cpp
        Meal.h
        Breakfast.h
        Lunch.h
        Dinner.h
        Dessert.h
        MealFactory.h
        ConcreteMealFactory.h
        LunchFactory.h
        DinnerFactory.h
        DessertFactory.h
        BreakfastFactory.h)
