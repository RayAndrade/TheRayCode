//
// Created by ray on 12/7/21.
//

#ifndef SHOW_DIRECTOR_H
#define SHOW_DIRECTOR_H
#include "Builder.h"

class Director{
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

#endif //SHOW_DIRECTOR_H
