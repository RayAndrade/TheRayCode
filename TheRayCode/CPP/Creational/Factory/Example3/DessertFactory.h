//
// Created by ray on 10/21/23.
//

#ifndef EXAMPLE3_DESSERTFACTORY_H
#define EXAMPLE3_DESSERTFACTORY_H

#include "Cake.h"
#include "IceCream.h"
#include <memory>
#include <stdexcept>

// The Factory class, which is responsible for creating dessert objects
class DessertFactory {
public:
    // Use enum for robust code and avoid hard-coded strings
    enum DessertType {
        CakeType,
        IceCreamType
    };

    // The factory method for creating desserts
    static std::unique_ptr<Dessert> createDessert(DessertType type) {
        switch (type) {
            case CakeType:
                return std::make_unique<Cake>();
            case IceCreamType:
                return std::make_unique<IceCream>();
            default:
                throw std::invalid_argument("Unknown dessert type!");
        }
    }
};

#endif //EXAMPLE3_DESSERTFACTORY_H
