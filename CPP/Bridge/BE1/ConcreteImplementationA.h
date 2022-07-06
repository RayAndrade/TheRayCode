//
// Created by ray on 7/24/21.
//

#ifndef BRIDGE_CONCRETEIMPLEMENTATIONA_H
#define BRIDGE_CONCRETEIMPLEMENTATIONA_H

#include "Implementation.h"

class ConcreteImplementationA : public Implementation {
public:
    std::string OperationImplementation() const override {
        return "ConcreteImplementationA: Here's the result on the platform A.\n";
    }
};

#endif //BRIDGE_CONCRETEIMPLEMENTATIONA_H
