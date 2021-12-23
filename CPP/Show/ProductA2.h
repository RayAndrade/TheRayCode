//
// Created by The Ray Code on 12/22/21.
//

#ifndef SHOW_PRODUCTA2_H
#define SHOW_PRODUCTA2_H

#include "AbstractProductA.h"

class ProductA2 : public AbstractProductA {
    std::string UsefulFunctionA() const override {
        return "The result of Product A2.";
    }
};

#endif //SHOW_PRODUCTA2_H
