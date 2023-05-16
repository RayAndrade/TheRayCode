//
// Created by ray on 5/15/23.
//

#ifndef DEMO_CONCRETEPROTOTYPE_H
#define DEMO_CONCRETEPROTOTYPE_H

#include "Prototype.h"

class ConcretePrototype : public Prototype {
public:
    ConcretePrototype(int value): value_(value){}
    ConcretePrototype(const ConcretePrototype& other): value_(other.value_){}
    virtual ~ConcretePrototype(){}
    virtual Prototype* clone() const override {
        return new ConcretePrototype(*this);
    }
    int getValue() { return value_; }
private:
    int value_;
};

#endif //DEMO_CONCRETEPROTOTYPE_H
