//
// Created by ray on 12/6/21.
//

#ifndef SHOW_BUILDER_H
#define SHOW_BUILDER_H
class Builder {
public:
    virtual ~Builder(){}
    virtual void PartA() const =0;
    virtual void PartB() const =0;
    virtual void PartC() const =0;

};
#endif //SHOW_BUILDER_H
