[top](../README,md)

Certainly! Let's build a simple implementation of the Template Design Pattern in C++.

The Template Pattern defines the program skeleton of an algorithm in a method in an algorithm, but delays some steps to subclasses. This allows subclasses to redefine certain steps of an algorithm without changing the algorithm's structure.

Imagine a simple example where we want to make different beverages, like tea and coffee. Both of these beverages have a similar sequence of steps, like boiling water, brewing, pouring in cup, and adding condiments. However, the details of some steps differ.

Here's how we'd implement it:

1. `Beverage.h`: The abstract class that defines the template method and other abstract methods.
```cpp
// Beverage.h
#pragma once

#include <iostream>

class Beverage {
public:
    // Template method
    void prepareRecipe() {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }

protected:
    void boilWater() const {
        std::cout << "Boiling water\n";
    }

    virtual void brew() const = 0;

    void pourInCup() const {
        std::cout << "Pouring into cup\n";
    }

    virtual void addCondiments() const = 0;
};
```

2. `Tea.h`: Subclass for tea beverage.
```cpp
// Tea.h
#pragma once

#include "Beverage.h"

class Tea : public Beverage {
protected:
    void brew() const override {
        std::cout << "Steeping the tea\n";
    }

    void addCondiments() const override {
        std::cout << "Adding lemon\n";
    }
};
```

3. `Coffee.h`: Subclass for coffee beverage.
```cpp
// Coffee.h
#pragma once

#include "Beverage.h"

class Coffee : public Beverage {
protected:
    void brew() const override {
        std::cout << "Dripping coffee through filter\n";
    }

    void addCondiments() const override {
        std::cout << "Adding sugar and milk\n";
    }
};
```

4. `main.cpp`: Driver program to demonstrate the template pattern.
```cpp
// main.cpp
#include "Tea.h"
#include "Coffee.h"

int main() {
    std::cout << "Making tea...\n";
    Tea tea;
    tea.prepareRecipe();

    std::cout << "\nMaking coffee...\n";
    Coffee coffee;
    coffee.prepareRecipe();

    return 0;
}
```

Explanation:
- **Beverage (Beverage.h)**: It's the abstract class that provides a template method `prepareRecipe()` which defines the skeleton of the beverage preparation algorithm. It also provides default implementations for methods that are common to all beverages (like `boilWater()` and `pourInCup()`) and abstract methods (`brew()` and `addCondiments()`) that need to be implemented by concrete subclasses.
  
- **Tea (Tea.h)** and **Coffee (Coffee.h)**: These are the concrete subclasses that provide specific implementations for the abstract methods.

The order of creating classes:
1. `Beverage` class which provides the overall algorithm structure.
2. Subclasses `Tea` and `Coffee` that implement specific steps of the algorithm.

By using the Template Pattern, we ensure that the sequence of making a beverage remains consistent, while allowing for customization in the brewing and addition of condiments steps.
