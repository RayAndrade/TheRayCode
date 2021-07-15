#ifndef ABSTRACTFACTORY_ABSTRACTPRODUCTB_H
#define ABSTRACTFACTORY_ABSTRACTPRODUCTB_H

/**
 * Here's the the base interface of another product. All products can interact
 * with each other, but proper interaction is possible only between products of
 * the same concrete variant.
 */
class AbstractProductB {
    /**
     * Product B is able to do its own thing...
     */
public:
    virtual ~AbstractProductB(){};
    virtual std::string UsefulFunction2() const = 0;
    /**
     * ...but it also can collaborate with the AbstractProductA.
     *
     * The Abstract Factory makes sure that all products it creates are of the
     * same variant and thus, compatible.
     */
    virtual std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const = 0;
};

#endif //ABSTRACTFACTORY_ABSTRACTPRODUCTB_H
