#ifndef ABSTRACTFACTORY_PRODUCTB_H
#define ABSTRACTFACTORY_PRODUCTB_H

/**
 * Here's the the base interface of another product. All products can interact
 * with each other, but proper interaction is possible only between products of
 * the same concrete variant.
 */
class ProductB {
    /**
     * Product B is able to do its own thing...
     */
public:
    virtual ~ProductB(){};
    virtual std::string UsefulFunctionB() const = 0;
    /**
     * ...but it also can collaborate with the ProductA.
     *
     * The Abstract Factory makes sure that all products it creates are of the
     * same variant and thus, compatible.
     */
    virtual std::string AnotherUsefulFunctionB(const ProductA &collaborator) const = 0;
};

#endif //ABSTRACTFACTORY_PRODUCTB_H
