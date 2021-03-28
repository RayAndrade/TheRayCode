//
// Created by ray on 8/25/20.
//

#ifndef BRIDGE_EXTENDEDABSTRACTION_H
#define BRIDGE_EXTENDEDABSTRACTION_H
#include "Abstraction.h"

class ExtendedAbstraction : public Abstraction {
public:
    ExtendedAbstraction(Implementation* implementation) : Abstraction(implementation) {
    }
    std::string Operation() const override {
        return "ExtendedAbstraction: Extended operation with:\n" +
               this->implementation_->OperationImplementation();
    }
};


#endif //BRIDGE_EXTENDEDABSTRACTION_H
