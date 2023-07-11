//
// Created by ray on 6/28/23.
//
#include "Singleton.h"

Singleton* Singleton::instance = nullptr;

Singleton::Singleton() {
    // Private constructor
}

Singleton* Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}

void Singleton::someMethod() {
    // Implementation of the method
}
