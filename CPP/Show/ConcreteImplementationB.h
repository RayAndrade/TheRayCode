//
// Created by ray on 11/10/20.
//

#ifndef SHOW_CONCRETEIMPLEMENTATIONB_H
#define SHOW_CONCRETEIMPLEMENTATIONB_H
#include "Implementation.h"

class ConcreteImplementationB : public Implementation{
public:
    std::string OperationImplementation() const override {
        return "ConcreteImplementationB: Here's the result on the platform B.\n";
    }

};
#endif //SHOW_CONCRETEIMPLEMENTATIONB_H
