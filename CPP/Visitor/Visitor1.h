#ifndef VISITOR_VISITOR1_H
#define VISITOR_VISITOR1_H
#include "ComponentA.h"
#include "ComponentB.h"

class Visitor1 : public Visitor {
public:
    void VisitConcreteComponentA(const ComponentA *element) const override {
        std::cout << element->ExclusiveMethodOfConcreteComponentA() << " + Visitor1" << std::endl;
    }

    void VisitConcreteComponentB(const ComponentB *element) const override {
        std::cout << element->SpecialMethodOfConcreteComponentB() << " + Visitor1" << std::endl;
    }
};


#endif //VISITOR_VISITOR1_H
