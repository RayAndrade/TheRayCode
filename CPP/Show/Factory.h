//
// Created by ray on 2/6/22.
//

#ifndef SHOW_FACTORY_H
#define SHOW_FACTORY_H

#include <unordered_map>
#include "Type.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"

class Factory {
private:
    std::unordered_map<Type, Prototype *, std::hash<int>> prototypes_;

public:
    Factory() {
        prototypes_[Type::PROTOTYPE_1] = new ConcretePrototype1("PROTOTYPE_1 ", 50.f);
        prototypes_[Type::PROTOTYPE_2] = new ConcretePrototype2("PROTOTYPE_2 ", 60.f);
    }

    ~Factory() {
        delete prototypes_[Type::PROTOTYPE_1];
        delete prototypes_[Type::PROTOTYPE_2];
    }

    Prototype *CreatePrototype(Type type) {
        return prototypes_[type]->Clone();
    }
};

#endif //SHOW_FACTORY_H
