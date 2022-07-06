//
// Created by ray on 7/24/21.
//

#ifndef BRIDGE_ABSTRACTION_H
#define BRIDGE_ABSTRACTION_H

#include <string>
#include "Implementation.h"

class Abstraction {
protected:
    Implementation* implementation_;
public:
    Abstraction(Implementation* implementation) : implementation_(implementation) {
    }
    virtual ~Abstraction() {
    }
    virtual std::string Operation() const {
        return "Abstraction: Base operation with:\n" +
               this->implementation_->OperationImplementation();
    }
};

#endif //BRIDGE_ABSTRACTION_H
