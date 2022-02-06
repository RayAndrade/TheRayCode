//
// Created by ray on 2/6/22.
//

#ifndef SHOW_CONCRETEPROTOTYPE2_H
#define SHOW_CONCRETEPROTOTYPE2_H

#include "Prototype.h"


class ConcretePrototype2 : public Prototype {
private:
    float concrete_prototype_field2_;

public:
    ConcretePrototype2(std::string prototype_name, float concrete_prototype_field)
            : Prototype(prototype_name), concrete_prototype_field2_(concrete_prototype_field) {
    }
    Prototype *Clone() const override {
        return new ConcretePrototype2(*this);
    }
};

#endif //SHOW_CONCRETEPROTOTYPE2_H
