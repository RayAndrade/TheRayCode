//
// Created by ray on 8/30/23.
//

#ifndef EXAMPLE_CONCRETEIMPLEMENTATIONA_H
#define EXAMPLE_CONCRETEIMPLEMENTATIONA_H

#include "Implementation.h"

class ConcreteImplementationA : public Implementation {
public:
    std::string OperationImplementation() const override {
        return "ConcreteImplementationA: Here's the result on the platform A.\n";
    }
};

#endif //EXAMPLE_CONCRETEIMPLEMENTATIONA_H
