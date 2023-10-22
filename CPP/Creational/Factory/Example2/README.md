[up](../README.md)

When teaching design patterns, it's important to ensure that students understand the underlying principles and real-world applications. The Factory Method is a creational design pattern that provides an interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created.

We'll create a simple example where we have a Factory class that creates different types of shapes. We will demonstrate polymorphism where the exact type of shape is determined at runtime.

Here's how you can structure your project:

1. Shape.h - Base class for shapes
2. Circle.h, Square.h - Derived classes for different types of shapes
3. ShapeFactory.h - Factory class for creating objects of different shapes
4. main.cpp - For testing our Factory design pattern

**Shape.h:**
```cpp
// Shape.h
#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

// Base class
class Shape {
public:
    // Virtual function for polymorphism
    virtual void draw() const = 0;

    virtual ~Shape() = default; // Virtual destructor for proper cleanup
};

#endif //SHAPE_H
```

**Circle.h:**
```cpp
// Circle.h
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

// Derived class
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Inside Circle::draw() method." << std::endl;
    }
};

#endif //CIRCLE_H
```

**Square.h:**
```cpp
// Square.h
#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

// Derived class
class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Inside Square::draw() method." << std::endl;
    }
};

#endif //SQUARE_H
```

**ShapeFactory.h:**
```cpp
// ShapeFactory.h
#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include <string>

// Factory class
class ShapeFactory {
public:
    // Use getShape method to get object of type shape
    Shape* getShape(const std::string& shapeType) {
        if (shapeType == "CIRCLE") {
            return new Circle();
        } else if (shapeType == "SQUARE") {
            return new Square();
        }
        return nullptr;
    }
};

#endif //SHAPEFACTORY_H
```

**main.cpp:**
```cpp
// main.cpp
#include "ShapeFactory.h"
#include <memory>

int main() {
    ShapeFactory shapeFactory;

    // Get an object of Circle and call its draw method.
    std::unique_ptr<Shape> shape1(shapeFactory.getShape("CIRCLE"));
    if (shape1 != nullptr) {
        shape1->draw();
    }

    // Get an object of Square and call its draw method.
    std::unique_ptr<Shape> shape2(shapeFactory.getShape("SQUARE"));
    if (shape2 != nullptr) {
        shape2->draw();
    }

    return 0;
}
```

Explanation:
- `Shape`: This is the base class with a virtual `draw` method, which needs to be overridden by derived classes. It's an interface for the types of objects the factory method creates.
- `Circle` and `Square`: These are concrete classes that implement the `Shape` interface by overriding the `draw` method.
- `ShapeFactory`: This class includes a method `getShape` which returns a pointer to a `Shape` object. It returns a new instance of a `Circle` or `Square` or null, based on the input it's given.
- `main.cpp`: We demonstrate the usage of the `ShapeFactory` by creating a `Circle` and `Square` object. We use `std::unique_ptr` for automatic memory management to avoid memory leaks.

When you run this code, you should see the following output, demonstrating that different types of `Shape` objects are created at runtime:

```
Inside Circle::draw() method.
Inside Square::draw() method.
```
