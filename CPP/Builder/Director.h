//
// Created by ray on 8/13/20.
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
        this->builder->ProducePartA();
    }
    void BuildFullFeaturedProduct(){
        this->builder->ProducePartA();
        this->builder->ProducePartB();
        this->builder->ProducePartC();
    }


};


#endif //BUILDER_DIRECTOR_H
