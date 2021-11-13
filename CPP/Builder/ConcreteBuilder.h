//
// Created by ray on 11/6/21.
//

#ifndef BUILDER_CONCRETEBUILDER_H
#define BUILDER_CONCRETEBUILDER_H
#include "Director.h"
#include "Product.h"

class ConcreteBuilder : public Builder{

private:

    Product* product;

    /**
     * A fresh builder instance should contain a blank product object, which is
     * used in further assembly.
     */
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
    /**
     * All production steps work with the same product instance.
     */

    void ProducePartA()const override{
        this->product->parts_.push_back("PartA1");
    }

    void ProducePartB()const override{
        this->product->parts_.push_back("PartB1");
    }

    void ProducePartC()const override{
        this->product->parts_.push_back("PartC1");
    }

    /**
     * Concrete Builders are supposed to provide their own methods for
     * retrieving results. That's because various types of builders may create
     * entirely different products that don't follow the same interface.
     * Therefore, such methods cannot be declared in the base Builder interface
     * (at least in a statically typed programming language). Note that PHP is a
     * dynamically typed language and this method CAN be in the base interface.
     * However, we won't declare it there for the sake of clarity.
     *
     * Usually, after returning the end result to the client, a builder instance
     * is expected to be ready to start producing another product. That's why
     * it's a usual practice to call the reset method at the end of the
     * `getProduct` method body. However, this behavior is not mandatory, and
     * you can make your builders wait for an explicit reset call from the
     * client code before disposing of the previous result.
     */

    /**
     * Please be careful here with the memory ownership. Once you call
     * GetProduct the user of this function is responsable to release this
     * memory. Here could be a better option to use smart pointers to avoid
     * memory leaks
     */

    Product* GetProduct() {
        Product* result= this->product;
        this->Reset();
        return result;
    }
};


#endif //BUILDER_CONCRETEBUILDER_H
