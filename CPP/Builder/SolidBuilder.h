//
// Created by ray on 6/30/21.
//

#ifndef BUILDER_SOLIDBUILDER_H
#define BUILDER_SOLIDBUILDER_H
#include "Builder.h"
#include "Product.h"

class SolidBuilder: public Builder{
private:
    Product* product;
public:
    SolidBuilder(){
        this->Reset();
    }
    ~SolidBuilder(){
        delete product;
    }
    void Reset(){
        this->product= new Product();
    }
    void PartA()const override{
        this->product->parts_.push_back("PartA");
    }
    void PartB()const override{
        this->product->parts_.push_back("PartB");
    }
    void PartC()const override{
        this->product->parts_.push_back("PartC");
    }
    Product* GetProduct() {
        Product* result= this->product;
        this->Reset();
        return result;
    }
};
#endif //BUILDER_SOLIDBUILDER_H
