//
// Created by ray on 12/7/21.
//

#ifndef SHOW_DIRECTOR_H
#define SHOW_DIRECTOR_H
#include "Builder.h"

class Director{
    /**
     * @var Builder
     */
private:
    Builder* builder;
    /**
     * The Director works with any builder instance that the client code passes
     * to it. This way, the client code may alter the final type of the newly
     * assembled product.
     */

public:

    void set_builder(Builder* builder){
        this->builder=builder;
    }

    /**
     * The Director can construct several product variations using the same
     * building steps.
     */

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
