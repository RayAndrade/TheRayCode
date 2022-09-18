
#ifndef VISITOR_COMPONENT_H
#define VISITOR_COMPONENT_H

#include "Visitor.h"

class Component {
public:
    virtual ~Component() {}
    virtual void Accept(Visitor *visitor) const = 0;
};


#endif //VISITOR_COMPONENT_H
