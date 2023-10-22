//
// Created by ray on 10/21/23.
//

#ifndef EXAMPLE3_CAKE_H
#define EXAMPLE3_CAKE_H

#include "Dessert.h"

// Concrete class representing a specific dessert
class Cake : public Dessert {
public:
    std::string getName() const override {
        return "Cake";
    }

    void prepare() override {
        // Here, add preparation steps specific to cake
        std::cout << "Preparing a cake..." << std::endl;
    }
};

#endif //EXAMPLE3_CAKE_H
