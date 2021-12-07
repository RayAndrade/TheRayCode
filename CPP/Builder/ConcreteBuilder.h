//
// Created by ray on 12/7/21.
//

#ifndef BUILDER_CONCRETEBUILDER_H
#define BUILDER_CONCRETEBUILDER_H
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

    void ProducePartA()const override{
        this->product->parts_.push_back("PartA1");
    }

    void ProducePartB()const override{
        this->product->parts_.push_back("PartB1");
    }

    void ProducePartC()const override{
        this->product->parts_.push_back("PartC1");
    }
    Product* GetProduct() {
        Product* result= this->product;
        this->Reset();
        return result;
    }
};
#endif //BUILDER_CONCRETEBUILDER_H
