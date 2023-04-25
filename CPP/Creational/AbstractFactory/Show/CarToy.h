//
// Created by ray on 4/23/23.
//

#ifndef SHOW_CARTOY_H
#define SHOW_CARTOY_H

#include "Toy.h"

class CarToy : public Toy {
public:
    void play() override {
        std::cout << "Concrete product class for car toys" << std::endl;
    }
};

#endif //SHOW_CARTOY_H
