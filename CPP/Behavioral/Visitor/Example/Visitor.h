//
// Created by ray on 9/18/23.
//

#ifndef EXAMPLE_VISITOR_H
#define EXAMPLE_VISITOR_H

class ComponentA;
class ComponentB;

class Visitor {
public:
    virtual void VisitConcreteComponentA(const ComponentA *element) const = 0;
    virtual void VisitConcreteComponentB(const ComponentB *element) const = 0;
};

#endif //EXAMPLE_VISITOR_H
