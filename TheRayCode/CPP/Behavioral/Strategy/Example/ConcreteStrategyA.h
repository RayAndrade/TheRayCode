//
// Created by ray on 3/12/24.
//

#ifndef EXAMPLE_CONCRETESTRATEGYA_H
#define EXAMPLE_CONCRETESTRATEGYA_H

#include "Strategy.h"

// Concrete Strategy A class
class ConcreteStrategyA : public Strategy {
public:
    void execute() override;
};

#endif //EXAMPLE_CONCRETESTRATEGYA_H
