//
// Created by ray on 4/23/23.
//

#ifndef SHOW_DOLLTOYFACTORY_H
#define SHOW_DOLLTOYFACTORY_H

#include "ToyFactory.h"
#include "DollToy.h"

class DollToyFactory : public ToyFactory {
public:
    Toy* createToy() override {
        std::cout << "DollToy :ToyFactory" << std::endl;
        return new DollToy();
    }
};

#endif //SHOW_DOLLTOYFACTORY_H
