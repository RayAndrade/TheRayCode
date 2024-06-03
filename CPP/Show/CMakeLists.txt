cmake_minimum_required(VERSION 3.28)
project(Show)

set(CMAKE_CXX_STANDARD 17)

add_executable(Show main.cpp
        Animal.h
        Dog.h
        Cat.h
        Poodle.h
        Hyena.h
        DomesticCat.h
        Lion.h
        AnimalFactory.h
        Collie.h
        Shepherd.h
        Tiger.h
        Cheetah.h
        Wolf.h
        Fox.h
        DomesticAnimalFactory.h
        WildAnimalFactory.h
)
