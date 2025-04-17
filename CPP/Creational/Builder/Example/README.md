[up](../README.md)

Let's create a `DessertBuilder` using the Builder pattern. In this example, we'll construct a `Dessert` object with various components such as a base (like cake or pastry), a filling (like fruit or cream), and toppings (like chocolate or nuts).

First, let's define the `Dessert` class, which will be the product built by the builders.

`Dessert.h`:
```cpp
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

#endif // DESSERT_H
```

Next, we define the abstract `Builder` class for the dessert.

`DessertBuilder.h`:
```cpp
#ifndef DESSERT_BUILDER_H
#define DESSERT_BUILDER_H

#include "Dessert.h"

class DessertBuilder {
protected:
    Dessert* dessert;
public:
    DessertBuilder() : dessert(nullptr) {}

    virtual ~DessertBuilder() {
        delete dessert;
    }

    Dessert* getDessert() {
        return dessert;
    }

    void createNewDessertProduct() {
        dessert = new Dessert();
    }

    virtual void buildBase() = 0;
    virtual void buildFilling() = 0;
    virtual void buildToppings() = 0;
};

#endif // DESSERT_BUILDER_H
```

Now, let's create a concrete builder class for a specific type of dessert, say a `CakeBuilder`.

`CakeBuilder.h`:
```cpp
#ifndef CAKE_BUILDER_H
#define CAKE_BUILDER_H

#include "DessertBuilder.h"

class CakeBuilder : public DessertBuilder {
public:
    virtual ~CakeBuilder() {}

    void buildBase() override {
        dessert->setBase("sponge cake");
    }

    void buildFilling() override {
        dessert->setFilling("vanilla cream");
    }

    void buildToppings() override {
        dessert->addTopping("chocolate shavings");
        dessert->addTopping("strawberries");
    }
};

#endif // CAKE_BUILDER_H
```

And the `Director` class to control the building process:

`DessertDirector.h`:
```cpp
#ifndef DESSERT_DIRECTOR_H
#define DESSERT_DIRECTOR_H

#include "DessertBuilder.h"

class DessertDirector {
public:
    void construct(DessertBuilder& builder) {
        builder.createNewDessertProduct();
        builder.buildBase();
        builder.buildFilling();
        builder.buildToppings();
    }
};

#endif // DESSERT_DIRECTOR_H
```

Finally, we use these classes in `main.cpp` to construct a dessert.

`main.cpp`:
```cpp
#include <iostream>
#include "Dessert.h"
#include "DessertBuilder.h"
#include "CakeBuilder.h"
#include "DessertDirector.h"

int main() {
    DessertDirector director;
    CakeBuilder cakeBuilder;

    director.construct(cakeBuilder);
    Dessert* dessert = cakeBuilder.getDessert();
    dessert->display();

    delete dessert; // Clean up the allocated memory

    return 0;
}
```

When you run this code, it will output something like:
```
Dessert with sponge cake base and vanilla cream filling. Toppings: chocolate shavings strawberries 
```

This demonstrates the construction of a cake using the Builder pattern. The `DessertBuilder` allows for a structured way to construct complex desserts, `CakeBuilder` provides the specific steps for creating a cake, and the `DessertDirector` manages the construction process.

The order of creation in your project should be:

1. Create the product class (`Dessert`).
2. Define the builder interface (`DessertBuilder`).
3. Implement concrete builders (like `CakeBuilder`).
4. Implement the director class (`DessertDirector`).
5. In `main.cpp`, use the director to construct a dessert with the concrete builder.

Running the `main.cpp` file will demonstrate how the Builder pattern can be used to create complex objects step-by-step, separating the construction process from the

 final product's representation.
