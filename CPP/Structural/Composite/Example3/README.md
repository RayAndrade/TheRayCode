[top](../README.md)

Let's use the Composite pattern with a pizza theme. Let's consider a scenario where pizzas can be composed of different ingredients. Some ingredients, like cheese or pepperoni, are simple, while others, like a meat combo or a veggie mix, can be composites of other ingredients.

Here's the order of our classes:

1. `Ingredient`: This is our abstract base class.
2. `Cheese`, `Pepperoni`: Concrete classes representing simple ingredients.
3. `MeatCombo`, `VeggieMix`: Concrete classes that can contain multiple ingredients.

### 1. Ingredient.h
```cpp
// Ingredient.h

#pragma once

#include <iostream>

class Ingredient {
public:
    virtual ~Ingredient() = default;
    virtual void display() const = 0;  // abstract method to display the ingredient
};
```

### 2. Cheese.h
```cpp
// Cheese.h

#pragma once

#include "Ingredient.h"

class Cheese : public Ingredient {
public:
    void display() const override {
        std::cout << "Cheese";
    }
};
```

### 3. Pepperoni.h
```cpp
// Pepperoni.h

#pragma once

#include "Ingredient.h"

class Pepperoni : public Ingredient {
public:
    void display() const override {
        std::cout << "Pepperoni";
    }
};
```

### 4. ComboIngredient.h (Base class for composite ingredients)
```cpp
// ComboIngredient.h

#pragma once

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
```

### 5. MeatCombo.h
```cpp
// MeatCombo.h

#pragma once

#include "ComboIngredient.h"

class MeatCombo : public ComboIngredient {
public:
    void display() const override {
        std::cout << "Meat Combo (";
        ComboIngredient::display();
        std::cout << "\b\b)";  // remove the last comma and space
    }
};
```

### 6. VeggieMix.h
```cpp
// VeggieMix.h

#pragma once

#include "ComboIngredient.h"

class VeggieMix : public ComboIngredient {
public:
    void display() const override {
        std::cout << "Veggie Mix (";
        ComboIngredient::display();
        std::cout << "\b\b)";  // remove the last comma and space
    }
};
```

### main.cpp
```cpp
// main.cpp

#include "Cheese.h"
#include "Pepperoni.h"
#include "MeatCombo.h"
#include "VeggieMix.h"
#include <memory>

int main() {
    auto cheese = std::make_shared<Cheese>();
    auto pepperoni = std::make_shared<Pepperoni>();

    MeatCombo meaty;
    meaty.add(cheese);
    meaty.add(pepperoni);

    VeggieMix veggies;
    veggies.add(std::make_shared<Cheese>());

    std::cout << "Ingredients in Meat Combo: ";
    meaty.display();
    std::cout << std::endl;

    std::cout << "Ingredients in Veggie Mix: ";
    veggies.display();
    std::cout << std::endl;

    return 0;
}
```

### Explanation:

1. `Ingredient`: The base component class for all ingredients.

2. `Cheese` and `Pepperoni`: Simple ingredients that directly implement the `Ingredient` interface.

3. `ComboIngredient`: This is an intermediate class that helps create composites of ingredients. It has a method to add individual ingredients and a default display method to show all the ingredients.

4. `MeatCombo` and `VeggieMix`: These are composite ingredients that contain multiple other ingredients. They extend the `ComboIngredient` class.

In the main function, we create simple ingredients (`Cheese` and `Pepperoni`) and add them to composite ingredients (`MeatCombo` and `VeggieMix`). Then, we display the ingredients of each combo.
