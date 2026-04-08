//
// Created by ray on 8/30/23.
//

#ifndef EXAMPLE_CONCRETEIMPLEMENTATIONB_H
#define EXAMPLE_CONCRETEIMPLEMENTATIONB_H

#include "Implementation.h"

class ConcreteImplementationB : public Implementation {
public:
    std::string OperationImplementation() const override {
        return "ConcreteImplementationB: Here's the result on the platform B.\n";
    }
};

#endif //EXAMPLE_CONCRETEIMPLEMENTATIONB_H
