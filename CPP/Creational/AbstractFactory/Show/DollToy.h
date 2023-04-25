//
// Created by ray on 4/23/23.
//

#ifndef SHOW_DOLLTOY_H
#define SHOW_DOLLTOY_H

#include "Toy.h"

class DollToy : public Toy {
public:
    void play() override {
        std::cout << "Concrete product class for doll toys" << std::endl;
    }
};

#endif //SHOW_DOLLTOY_H
