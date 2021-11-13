//
// Created by ray on 11/6/21.
//

#ifndef BUILDER_BUILDER_H
#define BUILDER_BUILDER_H
/**
 * The Builder interface specifies methods for creating the different parts of
 * the Product objects.
 */
class Builder{
public:
    virtual ~Builder(){}
    virtual void ProducePartA() const =0;
    virtual void ProducePartB() const =0;
    virtual void ProducePartC() const =0;
};
#endif //BUILDER_BUILDER_H
