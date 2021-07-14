#ifndef ABSTRACTFACTORY_ABSTRACTPRODUCTA_H
#define ABSTRACTFACTORY_ABSTRACTPRODUCTA_H


/**
 * Each distinct product of a product family should have a base interface. All
 * variants of the product must implement this interface.
 */
class AbstractProductA {
public:
    virtual ~AbstractProductA(){};
    virtual std::string UsefulFunctionA() const = 0;
};


#endif //ABSTRACTFACTORY_ABSTRACTPRODUCTA_H
