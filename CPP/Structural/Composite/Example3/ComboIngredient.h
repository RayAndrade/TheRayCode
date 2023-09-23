//
// Created by ray on 9/22/23.
//

#ifndef EXAMPLE3_COMBOINGREDIENT_H
#define EXAMPLE3_COMBOINGREDIENT_H

#include "Ingredient.h"
#include <vector>
#include <memory>

class ComboIngredient : public Ingredient {
protected:
    std::vector<std::shared_ptr<Ingredient>> ingredients;

public:
    void add(const std::shared_ptr<Ingredient>& ingredient) {
        ingredients.push_back(ingredient);
    }

    virtual void display() const override {
        for (const auto& ingredient : ingredients) {
            ingredient->display();
            std::cout << ", ";
        }
    }
};

#endif //EXAMPLE3_COMBOINGREDIENT_H
