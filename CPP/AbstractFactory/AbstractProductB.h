//
// Created by ray on 9/11/21.
//

#ifndef ABSTRACTFACTORY_ABSTRACTPRODUCTB_H
#define ABSTRACTFACTORY_ABSTRACTPRODUCTB_H
class AbstractProductB {
public:
    ~AbstractProductB(){};
    virtual std::string UsefulFunction2() const = 0;
    virtual std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const = 0;
};

#endif //ABSTRACTFACTORY_ABSTRACTPRODUCTB_H
