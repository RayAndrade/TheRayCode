#ifndef VISITOR_VISITOR_H
#define VISITOR_VISITOR_H

class ComponentA;
class ComponentB;

class Visitor {
public:
    virtual void VisitConcreteComponentA(const ComponentA *element) const = 0;
    virtual void VisitConcreteComponentB(const ComponentB *element) const = 0;
};


#endif //VISITOR_VISITOR_H
