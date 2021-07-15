//
// Created by ray on 7/15/21.
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
