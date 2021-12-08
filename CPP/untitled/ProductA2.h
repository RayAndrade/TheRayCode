//
// Created by ray on 12/8/21.
//

#ifndef UNTITLED_PRODUCTA2_H
#define UNTITLED_PRODUCTA2_H
#include "AbstractProductA.h"

class ProductA2 : public AbstractProductA {
    std::string UsefulFunctionA() const override {
        return "The result of Product A2.";
    }
};
#endif //UNTITLED_PRODUCTA2_H
