//
// Created by ray on 12/7/21.
//

#ifndef SHOW_BUILDER_H
#define SHOW_BUILDER_H
class Builder{
public:
    virtual ~Builder(){}
    virtual void ProducePartA() const =0;
    virtual void ProducePartB() const =0;
    virtual void ProducePartC() const =0;
};
#endif //SHOW_BUILDER_H
