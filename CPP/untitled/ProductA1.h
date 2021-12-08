//
// Created by ray on 12/8/21.
//

#ifndef UNTITLED_PRODUCTA1_H
#define UNTITLED_PRODUCTA1_H
#include "AbstractProductA.h"
class ProductA1 : public AbstractProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of Product A1.";
    }
};
#endif //UNTITLED_PRODUCTA1_H
