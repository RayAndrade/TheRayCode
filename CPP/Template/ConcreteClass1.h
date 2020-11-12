//
// Created by ray on 9/9/20.
//

#ifndef TEMPLATE_CONCRETECLASS1_H
#define TEMPLATE_CONCRETECLASS1_H

#include "AbstractClass.h"

class ConcreteClass1 : public AbstractClass {
protected:
    void RequiredOperations1() const override {
        std::cout << "ConcreteClass1 says: Implemented Operation1\n";
    }
    void RequiredOperation2() const override {
        std::cout << "ConcreteClass1 says: Implemented Operation2\n";
    }
};


#endif //TEMPLATE_CONCRETECLASS1_H
