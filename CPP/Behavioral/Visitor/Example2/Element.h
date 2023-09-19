//
// Created by ray on 9/18/23.
//

#ifndef EXAMPLE2_ELEMENT_H
#define EXAMPLE2_ELEMENT_H

#include "Visitor.h"

class Element {
public:
    virtual void accept(Visitor& visitor) = 0;
};

#endif //EXAMPLE2_ELEMENT_H
