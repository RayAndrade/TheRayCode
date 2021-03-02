#ifndef ABSTRACTFACTORY_PRODUCTA_H
#define ABSTRACTFACTORY_PRODUCTA_H


/**
 * Each distinct product of a product family should have a base interface. All
 * variants of the product must implement this interface.
 */
class ProductA {
public:
    virtual ~ProductA(){};
    virtual std::string UsefulFunctionA() const = 0;
};


#endif //ABSTRACTFACTORY_PRODUCTA_H
