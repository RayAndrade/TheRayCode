//
// Created by ray on 11/9/23.
//

#ifndef BEGINNING_PIZZA_H
#define BEGINNING_PIZZA_H


#include <vector>
#include <iostream>

class Pizza {
private:
    std::string dough;
    std::string sauce;
    std::vector<std::string> toppings;

public:
    void setDough(const std::string& d) {
        dough = d;
    }

    void setSauce(const std::string& s) {
        sauce = s;
    }

    void addTopping(const std::string& topping) {
        toppings.push_back(topping);
    }

    void display() const {
        std::cout << "Pizza with " << dough << " dough, " << sauce << " sauce, toppings: ";
        for (const auto& topping : toppings) {
            std::cout << topping << " ";
        }
        std::cout << std::endl;
    }
};

#endif //BEGINNING_PIZZA_H
