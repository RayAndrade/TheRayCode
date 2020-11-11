//
// Created by ray on 8/1/20.
//

#ifndef ABSTRACT_FACTORY_SOLIDPRODUCTB2_H
#define ABSTRACT_FACTORY_SOLIDPRODUCTB2_H
#include "AbstractProductB.h"

class SolidProductB2 : public AbstractProductB {
public:
    std::string UsefulFunctionB() const override {
        return "The result of the product B2.";
    }
    /**
     * The variant, Product B2, is only able to work correctly with the variant,
     * Product A2. Nevertheless, it accepts any instance of AbstractProductA as an
     * argument.
     */
    std::string AnotherUsefulFunctionB(const AbstractProductA &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of the B2 collaborating with ( " + result + " )";
    }
};


#endif //ABSTRACT_FACTORY_SOLIDPRODUCTB2_H
