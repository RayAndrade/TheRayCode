cmake_minimum_required(VERSION 3.26)
project(beginning)

set(CMAKE_CXX_STANDARD 17)

add_executable(beginning main.cpp
        Animal.h
        Dog.h
        Cat.h
        Poodle.h
        Hyena.h
        DomesticCat.h
        Siamese.h
        Persian.h
        Lion.h
        Tiger.h
        Cheetah.h
        AnimalFactory.h
        DomesticAnimalFactory.h
        Shepherd.h
        Collie.h
        WildAnimalFactory.h
        Wolf.h
        Fox.h)
