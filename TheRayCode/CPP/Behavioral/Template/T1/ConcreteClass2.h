//
// Created by ray on 9/9/20.
//

#ifndef TEMPLATE_CONCRETECLASS2_H
#define TEMPLATE_CONCRETECLASS2_H
#include "AbstractClass.h"

class ConcreteClass2: public AbstractClass  {
protected:
    void RequiredOperations1() const override {
        std::cout << "ConcreteClass2 says: Implemented Operation1\n";
    }
    void RequiredOperation2() const override {
        std::cout << "ConcreteClass2 says: Implemented Operation2\n";
    }
    void Hook1() const override {
        std::cout << "ConcreteClass2 says: Overridden Hook1\n";
    }
};


#endif //TEMPLATE_CONCRETECLASS2_H
