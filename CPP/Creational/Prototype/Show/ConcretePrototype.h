//
// Created by ray on 5/22/23.
//

#ifndef SHOW_CONCRETEPROTOTYPE_H
#define SHOW_CONCRETEPROTOTYPE_H

#include "Prototype.h"

class ConcretePrototype : public Prototype{

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


#endif //SHOW_CONCRETEPROTOTYPE_H
