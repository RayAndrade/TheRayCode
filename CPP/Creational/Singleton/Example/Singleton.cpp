//
// Created by ray on 9/12/23.
//

#include "Singleton.h"
#include <iostream>

Singleton* Singleton::instance = nullptr;

Singleton* Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}

void Singleton::demoMethod() {
    std::cout << "Singleton class method called!" << std::endl;
}