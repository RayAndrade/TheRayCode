//
// Created by ray on 11/10/20.
//

#ifndef SHOW_ABSTRACTION_H
#define SHOW_ABSTRACTION_H
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

#endif //SHOW_ABSTRACTION_H
