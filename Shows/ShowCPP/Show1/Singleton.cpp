// Singleton.cpp
#include "Singleton.h"

Singleton* Singleton::instance = nullptr;

Singleton::Singleton() {
    // Constructor implementation
}

Singleton* Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}
