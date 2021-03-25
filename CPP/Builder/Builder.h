#ifndef BUILDER_BUILDER_H
#define BUILDER_BUILDER_H


class Builder {
public:
    virtual ~Builder(){}
    virtual void ProducePartA() const =0;
    virtual void ProducePartB() const =0;
    virtual void ProducePartC() const =0;

};


#endif //BUILDER_BUILDER_H
