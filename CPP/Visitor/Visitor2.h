#ifndef VISITOR_VISITOR2_H
#define VISITOR_VISITOR2_H
#include <iostream>
#include <array>
#include "ComponentA.h"
#include "ComponentB.h"

class Visitor2 : public Visitor {
public:
    void VisitConcreteComponentA(const ComponentA *element) const override {
        std::cout << element->ExclusiveMethodOfConcreteComponentA() << " + Visitor2" << std::endl;
    }
    void VisitConcreteComponentB(const ComponentB *element) const override {
        std::cout << element->SpecialMethodOfConcreteComponentB() << " + Visitor2" << std::endl;
    }
};


#endif //VISITOR_VISITOR2_H
