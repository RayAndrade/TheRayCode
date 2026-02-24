//
// Created by ray on 7/20/23.
//

#ifndef SHOW_CONCRETEPROTOTYPE_H
#define SHOW_CONCRETEPROTOTYPE_H

#include "Prototype.h"

class ConcretePrototype : public Prototype
{
private:
    int data;

public:
    ConcretePrototype(int d):data(d){}
    ConcretePrototype(const ConcretePrototype& cp): data(cp.data){}
    virtual Prototype* clone() const
    {
        return new ConcretePrototype(*this);
    }
    int getData(){ return data;}
};

#endif //SHOW_CONCRETEPROTOTYPE_H
