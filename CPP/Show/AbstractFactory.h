//
// Created by ray on 9/11/21.
//

#ifndef SHOW_ABSTRACTFACTORY_H
#define SHOW_ABSTRACTFACTORY_H


class AbstractFactory {
public:
    virtual AbstractProductA *CreateProductA() const = 0;
    virtual AbstractProductB *CreateProductB() const = 0;
};


#endif //SHOW_ABSTRACTFACTORY_H
