//
// Created by ray on 11/10/20.
//

#ifndef SHOW_EXTENDEDABSTRACTION_H
#define SHOW_EXTENDEDABSTRACTION_H

#include "Abstraction.h"

class ExtendedAbstraction: public Abstraction{
public:
    ExtendedAbstraction(Implementation* implementation) : Abstraction(implementation) {
    }
    std::string Operation() const override {
        return "ExtendedAbstraction: Extended operation with:\n" +
               this->implementation_->OperationImplementation();
    }

};
#endif //SHOW_EXTENDEDABSTRACTION_H
