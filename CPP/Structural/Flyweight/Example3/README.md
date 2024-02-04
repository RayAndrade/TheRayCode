[up](../README.md)

To align more closely with the formal structure and terminology used in the "Design Patterns: Elements of Reusable Object-Oriented Software" book by the Gang of Four (GoF), let's rework the example into a more serious context. We'll use the Flyweight pattern to manage graphical objects in a drawing application, a common use case that demonstrates the pattern's effectiveness in managing memory for large numbers of similar objects.

### Step 1: Flyweight.h

This file defines the `Flyweight` interface for graphical objects.

```cpp
// Flyweight.h
#ifndef FLYWEIGHT_H
#define FLYWEIGHT_H

class Flyweight {
public:
    virtual ~Flyweight() = default;
    virtual void draw(int x, int y) const = 0; // Draw object at position x, y
};

#endif // FLYWEIGHT_H
```

### Step 2: ConcreteFlyweight.h

Implements a specific Flyweight, such as a circle with a specific color.

```cpp
// ConcreteFlyweight.h
#ifndef CONCRETEFLYWEIGHT_H
#define CONCRETEFLYWEIGHT_H

#include "Flyweight.h"
#include <iostream>

class ConcreteFlyweight : public Flyweight {
private:
    std::string color; // Intrinsic state shared by many objects
public:
    ConcreteFlyweight(const std::string& color) : color(color) {}
    void draw(int x, int y) const override {
        std::cout << "Drawing a " << color << " circle at (" << x << ", " << y << ")." << std::endl;
    }
};

#endif // CONCRETEFLYWEIGHT_H
```

### Step 3: FlyweightFactory.h

Manages flyweight objects ensuring that they are shared properly.

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
    std::shared_ptr<Flyweight> getFlyweight(const std::string& color) {
        if (flyweights.find(color) == flyweights.end()) {
            flyweights[color] = std::make_shared<ConcreteFlyweight>(color);
            std::cout << "Creating a circle of color: " << color << std::endl;
        }
        return flyweights[color];
    }
};

#endif // FLYWEIGHTFACTORY_H
```

### Step 4: main.cpp

Demonstrates the Flyweight pattern in a drawing application context.

```cpp
// main.cpp
#include "FlyweightFactory.h"

int main() {
    FlyweightFactory factory;

    auto redCircle = factory.getFlyweight("Red");
    auto blueCircle = factory.getFlyweight("Blue");
    auto redCircle2 = factory.getFlyweight("Red"); // This should not create a new circle

    redCircle->draw(100, 100);
    blueCircle->draw(200, 200);
    redCircle2->draw(300, 300);

    return 0;
}
```

### Order of Creation

1. **Flyweight.h**: Define the `Flyweight` interface for graphical objects.
2. **ConcreteFlyweight.h**: Implement specific `Flyweight` instances (colored circles).
3. **FlyweightFactory.h**: Manage the creation and sharing of `Flyweight` objects.
4. **main.cpp**: Demonstrate the `Flyweight` pattern in action within a drawing application.

### Expected Output

When you run the code, you should see output similar to this:

```
Creating a circle of color: Red
Creating a circle of color: Blue
Drawing a Red circle at (100, 100).
Drawing a Blue circle at (200, 200).
Drawing a Red circle at (300, 300).
```

This output demonstrates how the `Flyweight` pattern can efficiently manage a large number of objects that share common state (in this case, the color of the circles), by ensuring that each unique state is instantiated only once. The `FlyweightFactory` is responsible for managing the instances and reusing them as needed, significantly reducing the memory footprint of the application.
