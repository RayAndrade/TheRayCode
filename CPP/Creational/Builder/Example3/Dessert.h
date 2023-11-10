//
// Created by ray on 11/10/23.
//

#ifndef DESSERT_H
#define DESSERT_H

#include <string>
#include <vector>
#include <iostream>

class Dessert {
private:
    std::string base;
    std::string filling;
    std::vector<std::string> toppings;

public:
    void setBase(const std::string& b) {
        base = b;
    }

    void setFilling(const std::string& f) {
        filling = f;
    }

    void addTopping(const std::string& topping) {
        toppings.push_back(topping);
    }

    void display() const {
        std::cout << "Dessert with " << base << " base and " << filling << " filling. Toppings: ";
        for (const auto& topping : toppings) {
            std::cout << topping << " ";
        }
        std::cout << std::endl;
    }
};

#endif //DESSERT_H
