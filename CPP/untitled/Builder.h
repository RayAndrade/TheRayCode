//
// Created by ray on 12/5/21.
//

#ifndef UNTITLED_BUILDER_H
#define UNTITLED_BUILDER_H
class Builder{
public:
    virtual ~Builder(){}
    virtual void ProducePartA() const =0;
    virtual void ProducePartB() const =0;
    virtual void ProducePartC() const =0;
};
#endif //UNTITLED_BUILDER_H
