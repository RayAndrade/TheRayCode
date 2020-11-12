//
// Created by ray on 8/13/20.
//

#ifndef BUILDER_CONCRETEBUILDER_H
#define BUILDER_CONCRETEBUILDER_H

#include "Builder.h"
#include "Product.h"


class ConcreteBuilder: public Builder {
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
        this->product->parts_.push_back("PartA");
    }
    void ProducePartB()const override{
        this->product->parts_.push_back("PartB");
    }
    void ProducePartC()const override{
        this->product->parts_.push_back("PartC");
    }
    Product* GetProduct() {
        Product* result= this->product;
        this->Reset();
        return result;
    }

};


#endif //BUILDER_CONCRETEBUILDER_H
