//
// Created by ray on 9/11/21.
//

#ifndef SHOW_PRODUCTA2_H
#define SHOW_PRODUCTA2_H

#include <string>
#include "AbstractProductA.h"

class ProductA2: public AbstractProductA {
public:
    std::string UsefulFunctionA() const override {
        return "The result of Product A2.";
    }
};


#endif //SHOW_PRODUCTA2_H
