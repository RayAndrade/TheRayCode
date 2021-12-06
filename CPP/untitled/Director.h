//
// Created by ray on 12/5/21.
//

#ifndef UNTITLED_DIRECTOR_H
#define UNTITLED_DIRECTOR_H
#include "Builder.h"
class Director{
private:
    Builder* builder;
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
#endif //UNTITLED_DIRECTOR_H
