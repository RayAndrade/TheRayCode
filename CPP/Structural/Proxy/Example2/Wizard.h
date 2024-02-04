//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_WIZARD_H
#define EXAMPLE2_WIZARD_H

#include "Subject.h"
#include <iostream>

// RealSubject class that the Proxy represents
class Wizard : public Subject {
public:
    void castSpell(const std::string& spell) override {
        std::cout << "Wizard casts " << spell << " with a flick of his wand!" << std::endl;
    }
};


#endif //EXAMPLE2_WIZARD_H
