//
// Created by ray on 12/5/22.
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
