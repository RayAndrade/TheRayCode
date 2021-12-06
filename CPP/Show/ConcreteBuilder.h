//
// Created by ray on 12/4/21.
//

#ifndef SHOW_CONCRETEBUILDER_H
#define SHOW_CONCRETEBUILDER_H
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

#endif //SHOW_CONCRETEBUILDER_H
