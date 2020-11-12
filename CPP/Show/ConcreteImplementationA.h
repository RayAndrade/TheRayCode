//
// Created by ray on 11/10/20.
//

#ifndef SHOW_CONCRETEIMPLEMENTATIONA_H
#define SHOW_CONCRETEIMPLEMENTATIONA_H
#include "Implementation.h"

class ConcreteImplementationA : public Implementation{
public:
    std::string OperationImplementation() const override {
        return "ConcreteImplementationA: Here's the result on the platform A.\n";
    }

};

#endif //SHOW_CONCRETEIMPLEMENTATIONA_H
