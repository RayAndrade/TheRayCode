[up](../README.md)

Certainly! The Flyweight pattern is all about reducing memory usage by sharing as much data as possible with similar objects; it's especially useful when you have a large number of objects with some shared state. In the context of humor, let's imagine we're managing a forest, but instead of trees, we're planting joke-telling plants. Each plant tells a joke, but to save on memory, we'll share the joke part (the intrinsic state) across plants of the same type, while the location of each plant (the extrinsic state) is unique to each.

### Step 1: Flyweight.h

This file defines the `Flyweight` interface. In our case, it will be the interface for our joke-telling plants.

```cpp
// Flyweight.h
#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

#include <string>

class Flyweight {
public:
    virtual ~Flyweight() = default;
    virtual void tellJoke() const = 0; // Each plant tells a joke
};

#endif // FLYWEIGHT_H
```

### Step 2: ConcreteFlyweight.h

This file implements a specific Flyweight, a plant that tells a specific joke.

```cpp
// ConcreteFlyweight.h
#ifndef CONCRETEFLYWEIGHT_H
#define CONCRETEFLYWEIGHT_H

#include "Flyweight.h"
#include <iostream>

class ConcreteFlyweight : public Flyweight {
private:
    std::string joke; // The shared joke
public:
    ConcreteFlyweight(const std::string& joke) : joke(joke) {}
    void tellJoke() const override {
        std::cout << joke << std::endl;
    }
};

#endif // CONCRETEFLYWEIGHT_H
```

### Step 3: FlyweightFactory.h

This class manages flyweight objects and ensures that flyweights are shared properly.

```cpp
// FlyweightFactory.h
#ifndef FLYWEIGHTFACTORY_H
#define FLYWEIGHTFACTORY_H

#include "ConcreteFlyweight.h"
#include <map>
#include <memory>

class FlyweightFactory {
private:
    std::map<std::string, std::shared_ptr<Flyweight>> flyweights;
public:
    FlyweightFactory() {
        // Pre-populate some jokes
        flyweights["tree"] = std::make_shared<ConcreteFlyweight>("Why did the tree go to the dentist? To get a root canal.");
        flyweights["bush"] = std::make_shared<ConcreteFlyweight>("Why do bushes never get lost? Because they always take the hedge path.");
    }

    std::shared_ptr<Flyweight> getFlyweight(const std::string& key) {
        if (flyweights.find(key) == flyweights.end()) {
            std::cout << "Planting a new joke-telling plant: " << key << std::endl;
            flyweights[key] = std::make_shared<ConcreteFlyweight>("This is a new plant joke for " + key);
        }
        return flyweights[key];
    }
};

#endif // FLYWEIGHTFACTORY_H
```

### Step 4: main.cpp

This is where we demonstrate the usage of our Flyweight pattern with joke-telling plants.

```cpp
// main.cpp
#include "FlyweightFactory.h"
#include <iostream>

int main() {
    FlyweightFactory factory;

    auto plant1 = factory.getFlyweight("tree");
    auto plant2 = factory.getFlyweight("tree");
    auto plant3 = factory.getFlyweight("bush");

    std::cout << "Plant 1 says: ";
    plant1->tellJoke();
    std::cout << "Plant 2 says: ";
    plant2->tellJoke();
    std::cout << "Plant 3 says: ";
    plant3->tellJoke();

    // Let's add a new type of plant
    auto plant4 = factory.getFlyweight("flower");
    std::cout << "Plant 4 says: ";
    plant4->tellJoke();

    return 0;
}
```

### Order of Creation

1. **Flyweight.h**: Define the Flyweight interface.
2. **ConcreteFlyweight.h**: Implement specific Flyweight instances (joke-telling plants).
3. **FlyweightFactory.h**: Manage the creation and sharing of Flyweights.
4. **main.cpp**: Demonstrate the Flyweight pattern in action.

### Expected Output

When you run the code, you should see output similar to this:

```
Plant 1 says: Why did the tree go to the dentist? To get a root canal.
Plant 2 says: Why did the tree go to the dentist? To get a root canal.
Plant 3 says: Why do bushes never get lost? Because they always take the hedge path.
Planting a new joke-telling plant: flower
Plant 4 says: This is a new plant joke for flower
```

This humorous example demonstrates how the Flyweight pattern can be used to share intrinsic state (in this case, the joke) between multiple objects (the plants), while allowing them to have their own extrinsic state (not explicitly shown here, but could be their location in a garden). The factory ensures that only one shared instance of each joke exists, reducing memory usage and keeping the garden of jokes efficiently organized.


