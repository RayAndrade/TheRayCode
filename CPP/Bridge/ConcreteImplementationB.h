//
// Created by ray on 8/25/20.
//

#ifndef BRIDGE_CONCRETEIMPLEMENTATIONB_H
#define BRIDGE_CONCRETEIMPLEMENTATIONB_H

#include "Implementation.h"

class ConcreteImplementationB : public Implementation {
public:
    std::string OperationImplementation() const override {
        return "ConcreteImplementationB: Here's the result on the platform B.\n";
    }
};

#endif //BRIDGE_CONCRETEIMPLEMENTATIONB_H
