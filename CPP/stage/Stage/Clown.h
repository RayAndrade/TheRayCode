//
// Created by ray on 11/11/23.
//

#ifndef BEGINNING_CLOWN_H
#define BEGINNING_CLOWN_H

#include "ClownPrototype.h"
#include <iostream>

class Clown : public ClownPrototype {
private:
    std::string name;
public:
    Clown(std::string name) : name(name) {}

    ClownPrototype* clone() override {
        return new Clown(*this);
    }

    void perform() {
        // Example action
        std::cout << "Clown " << name << " is performing!" << std::endl;
    }
};


#endif //BEGINNING_CLOWN_H
