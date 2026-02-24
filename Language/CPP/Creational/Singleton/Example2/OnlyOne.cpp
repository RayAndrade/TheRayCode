//
// Created by ray on 9/13/23.
//

#include "OnlyOne.h"
#include <iostream>

OnlyOne* OnlyOne::instance = nullptr;

OnlyOne* OnlyOne::getInstance() {
    if (instance == nullptr) {
        instance = new OnlyOne();
    }
    return instance;
}

void OnlyOne::demoMethod() {
    std::cout << "OnlyOne class method called!" << std::endl;
}