#ifndef VISITOR_COMPONENTB_H
#define VISITOR_COMPONENTB_H
#include <iostream>
#include <array>
#include "Visitor.h"
#include "Component.h"

class ComponentB : public Component {
    /**
     * Same here: visitConcreteComponentB => ComponentB
     */
public:
    void Accept(Visitor *visitor) const override {
        visitor->VisitConcreteComponentB(this);
    }
    std::string SpecialMethodOfConcreteComponentB() const {
        return "B";
    }
};


#endif //VISITOR_COMPONENTB_H
