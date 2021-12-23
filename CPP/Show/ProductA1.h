//
// Created by The Ray Code on 12/22/21.
//

#ifndef SHOW_PRODUCTA1_H
#define SHOW_PRODUCTA1_H

#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of Product A1.";
    }
};

#endif //SHOW_PRODUCTA1_H
