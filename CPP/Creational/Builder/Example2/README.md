[up](../README.md)

Certainly! The Builder pattern is a creational design pattern that allows the construction of complex objects step by step. The pattern allows you to produce different types and representations of an object using the same construction code.

In our example, let's create a simple `Pizza` object that requires various ingredients like dough, sauce, and topping. We'll have a `PizzaBuilder` to encapsulate the construction logic for a `Pizza` object.

First, we'll define the `Pizza` class that represents the product created by the builder.

`Pizza.h`:
```cpp
#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <vector>

// Pizza is the complex object that is created by the builder.
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

#endif // PIZZA_H
```

Next, we define the abstract `Builder` class, which declares the building steps.

`PizzaBuilder.h`:
```cpp
#ifndef PIZZA_BUILDER_H
#define PIZZA_BUILDER_H

#include "Pizza.h"

// Abstract Builder
class PizzaBuilder {
protected:
    Pizza* pizza;
public:
    PizzaBuilder() : pizza(nullptr) {}

    virtual ~PizzaBuilder() {}

    Pizza* getPizza() {
        return pizza;
    }

    void createNewPizzaProduct() {
        pizza = new Pizza();
    }

    virtual void buildDough() = 0;
    virtual void buildSauce() = 0;
    virtual void buildTopping() = 0;
};

#endif // PIZZA_BUILDER_H
```

Now, let's create a concrete builder class that implements the `PizzaBuilder` interface.

`HawaiianPizzaBuilder.h`:
```cpp
#ifndef HAWAIIAN_PIZZA_BUILDER_H
#define HAWAIIAN_PIZZA_BUILDER_H

#include "PizzaBuilder.h"

// Concrete Builder for Hawaiian pizza.
class HawaiianPizzaBuilder : public PizzaBuilder {
public:
    virtual ~HawaiianPizzaBuilder() {}

    void buildDough() override {
        pizza->setDough("cross");
    }

    void buildSauce() override {
        pizza->setSauce("mild");
    }

    void buildTopping() override {
        pizza->addTopping("ham");
        pizza->addTopping("pineapple");
    }
};

#endif // HAWAIIAN_PIZZA_BUILDER_H
```

Finally, we need a `Director` class that defines the order of construction steps.

`PizzaDirector.h`:
```cpp
#ifndef PIZZA_DIRECTOR_H
#define PIZZA_DIRECTOR_H

#include "PizzaBuilder.h"

// Director class that constructs an object using the Builder interface.
class PizzaDirector {
public:
    void construct(PizzaBuilder& builder) {
        builder.createNewPizzaProduct();
        builder.buildDough();
        builder.buildSauce();
        builder.buildTopping();
    }
};

#endif // PIZZA_DIRECTOR_H
```

Now, let's use these classes in our `main.cpp`.

`main.cpp`:
```cpp
#include <iostream>
#include "Pizza.h"
#include "PizzaBuilder.h"
#include "HawaiianPizzaBuilder.h"
#include "PizzaDirector.h"

int main() {
    PizzaDirector director;
    HawaiianPizzaBuilder hawaiianBuilder;

    director.construct(hawaiianBuilder);
    Pizza* pizza = hawaiianBuilder.getPizza();
    pizza->display();

    delete pizza; // Don't forget to deallocate memory!

    return 0;
}
```

When you run the code, you should see something like this printed to the console:
```
Pizza with cross dough, mild sauce, toppings: ham pineapple 
```

This demonstrates the building of a Hawaiian Pizza with the defined steps. When teaching this pattern, make sure your students understand that the `Builder` pattern helps in constructing complex objects by separating the construction process from the representation. It gives greater control over the construction process and supports building objects with a lot of optional parameters in a more readable manner.

Regarding the order of creation in your project, you typically start with the product class (`Pizza`), then define the builder interface (`PizzaBuilder`), followed by the concrete builders (`HawaiianPizzaBuilder`), and finally the director (`PizzaDirector`). You might

 then test the building process in the `main` function, as shown above.
