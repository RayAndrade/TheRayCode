//
// Created by ray on 12/5/21.
//

#ifndef UNTITLED_CONCRETEBUILDER_H
#define UNTITLED_CONCRETEBUILDER_H
#include "Director.h"
#include "Product.h"

class ConcreteBuilder : public Builder{
private:
    Product* product;
public:
    ConcreteBuilder(){
        this->Reset();
    }

    ~ConcreteBuilder(){
        delete product;
    }

    void Reset(){
        this->product= new Product();
    }
};

#endif //UNTITLED_CONCRETEBUILDER_H
