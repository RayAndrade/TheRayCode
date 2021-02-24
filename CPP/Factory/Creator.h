#ifndef FACTORY_CREATOR_H
#define FACTORY_CREATOR_H

#include "Product.h"

class Creator {

/**
   * Note that the Creator may also provide some default implementation of the
   * factory method.
   */

public:
    virtual ~Creator(){};
    virtual Product* FactoryMethod() const = 0;

    /**
   * Also note that, despite its name, the Creator's primary responsibility is
   * not creating products. Usually, it contains some core business logic that
   * relies on Product objects, returned by the factory method. Subclasses can
   * indirectly change that business logic by overriding the factory method and
   * returning a different type of product from it.
   */

    std::string SomeOperation() const {
        Product* product = this->FactoryMethod();
        std::string result = "\n\nCreator: The same creator's code has just worked with "
                             + product->Operation();
        delete product;
        return result;
    }
};


#endif //FACTORY_CREATOR_H
