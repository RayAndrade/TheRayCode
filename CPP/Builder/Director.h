//
// Created by ray on 6/30/21.
//

#ifndef BUILDER_DIRECTOR_H
#define BUILDER_DIRECTOR_H
#include "Builder.h"

class Director {
private:
    Builder* builder;
public:
    void set_builder(Builder* builder){
        this->builder=builder;
    }
    void BuildMinimalViableProduct(){
        this->builder->PartA();
    }
    void BuildFullFeaturedProduct(){
        this->builder->PartA();
        this->builder->PartB();
        this->builder->PartC();
    }
};
#endif //BUILDER_DIRECTOR_H
