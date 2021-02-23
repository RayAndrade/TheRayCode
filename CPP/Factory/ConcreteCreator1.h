#ifndef FACTORY_CONCRETECREATOR1_H
#define FACTORY_CONCRETECREATOR1_H

/**
 * Concrete Creators override the factory method in order to change the
 * resulting product's type.
 */

#include "Creator.h"
#include "ConcreteProduct1.h"

class ConcreteCreator1 : public Creator {

/**
   * Note that the signature of the method still uses the abstract product type,
   * even though the concrete product is actually returned from the method. This
   * way the Creator can stay independent of concrete product classes.
   */

public:
    Product* FactoryMethod() const override {
        return new ConcreteProduct1();
    }
};

#endif //FACTORY_CONCRETECREATOR1_H
