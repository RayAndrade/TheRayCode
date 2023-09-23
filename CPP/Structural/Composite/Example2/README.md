[top](../README.md)

The Composite pattern allows you to compose objects into tree structures to represent part-whole hierarchies. This way, individual objects and compositions of objects can be treated uniformly. 

I'll use a simple example: graphical shapes. Let's say we have simple shapes (like circles) and compound shapes (groups of shapes). Both simple and compound shapes should be treated uniformly (e.g., to draw them).

Let's start by determining the order of our classes:

1. `Shape`: This is our abstract base class.
2. `Circle`: A concrete class that represents a circle.
3. `CompoundShape`: A concrete class that represents a group of shapes.

### 1. Shape.h
```cpp
// Shape.h

#pragma once

class Shape {
public:
    virtual ~Shape() = default;
    virtual void draw() const = 0;  // abstract method to draw the shape
};
```

### 2. Circle.h
```cpp
// Circle.h

#pragma once

#include "Shape.h"
#include <iostream>

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};
```

### 3. CompoundShape.h
```cpp
// CompoundShape.h

#pragma once

#include "Shape.h"
#include <vector>
#include <memory>

class CompoundShape : public Shape {
private:
    std::vector<std::shared_ptr<Shape>> shapes;

public:
    void add(const std::shared_ptr<Shape>& shape) {
        shapes.push_back(shape);
    }

    void draw() const override {
        for (const auto& shape : shapes) {
            shape->draw();
        }
    }
};
```

### main.cpp
```cpp
// main.cpp

#include "Circle.h"
#include "CompoundShape.h"
#include <memory>

int main() {
    auto circle1 = std::make_shared<Circle>();
    auto circle2 = std::make_shared<Circle>();

    CompoundShape group;
    group.add(circle1);
    group.add(circle2);

    std::cout << "Drawing individual circle:" << std::endl;
    circle1->draw();

    std::cout << "\nDrawing compound shape:" << std::endl;
    group.draw();

    return 0;
}
```

### Explanation:

1. `Shape`: This abstract base class has a single method `draw` which is meant to draw the shape. Any concrete shape will need to provide its implementation of this method.

2. `Circle`: A simple concrete shape. Its `draw` method just prints a message to the console.

3. `CompoundShape`: This class can hold multiple `Shape` objects (both simple and compound). When its `draw` method is called, it iterates over its child shapes and calls their `draw` methods.

In the `main` function, we create two circle objects, add them to a compound shape, and then draw both the individual circle and the compound shape.

Remember, the main advantage of the Composite pattern here is that we can treat both individual shapes (`Circle`) and groups of shapes (`CompoundShape`) uniformly. This simplifies client code since it doesn't need to differentiate between simple and composite objects.
