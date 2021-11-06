//
// Created by ray on 6/30/21.
//

#ifndef BUILDER_BUILDER_H
#define BUILDER_BUILDER_H
class Builder {
public:
    virtual ~Builder(){}
    virtual void PartA() const =0;
    virtual void PartB() const =0;
    virtual void PartC() const =0;

};
#endif //BUILDER_BUILDER_H
