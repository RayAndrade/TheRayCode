#ifndef ABSTRACTFACTORY_PRODUCT1_H
#define ABSTRACTFACTORY_PRODUCT1_H


/**
 * Each distinct product of a product family should have a base interface. All
 * variants of the product must implement this interface.
 */
class Product1 {
public:
    virtual ~Product1(){};
    virtual std::string UsefulFunctionA() const = 0;
};


#endif //ABSTRACTFACTORY_PRODUCT1_H
