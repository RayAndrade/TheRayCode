//
// Created by ray on 1/29/25.
//
#include "Singleton.h"

Singleton* Singleton::_instance = nullptr;

Singleton::Singleton() {
    std::cout << "Singleton instance created." << std::endl;
}

Singleton* Singleton::Instance() {
    if (_instance == nullptr) {
        _instance = new Singleton();
    }
    return _instance;
}
void Singleton::ShowMessage() {
    std::cout << "Hello from Singleton!" << std::endl;
}
