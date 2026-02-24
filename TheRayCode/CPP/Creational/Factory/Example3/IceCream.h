//
// Created by ray on 10/21/23.
//

#ifndef EXAMPLE3_ICECREAM_H
#define EXAMPLE3_ICECREAM_H

#include "Dessert.h"

// Concrete class representing a specific dessert
class IceCream : public Dessert {
public:
    std::string getName() const override {
        return "Ice Cream";
    }

    void prepare() override {
        // Here, add preparation steps specific to ice cream
        std::cout << "Preparing ice cream..." << std::endl;
    }
};

#endif //EXAMPLE3_ICECREAM_H
