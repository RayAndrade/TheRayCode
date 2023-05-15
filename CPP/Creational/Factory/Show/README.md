The Factory design pattern is a creational design pattern that provides an interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created. This pattern is commonly used when a class cannot anticipate the class of objects it needs to create.

Let's take an example of a ShapeFactory that generates objects of different types (Circle, Square, Rectangle). The Factory pattern lets the class defer instantiation to subclasses.

Here's how we might implement this in C++:

### Shape.h:

Shape (Shape.h): This is an abstract base class that declares the draw() method as a pure virtual function. All derived classes (like Circle, Square, Rectangle) are expected to implement this method. The Shape class serves as a general template for all shapes.

```cpp
#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function makes this an abstract base class
    virtual ~Shape() {}
};

#endif // SHAPE_H
```

### Circle.h:

Circle (Circle.h): This is a concrete class that is derived from the Shape abstract base class. It provides a specific implementation of the draw() method, which is unique to the Circle class.

```cpp
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <iostream>

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Circle." << std::endl;
    }
};

#endif // CIRCLE_H
```

### Square.h:

Square (Square.h): This is another concrete class that is derived from the Shape abstract base class. It provides a unique implementation of the draw() method, specific to the Square class.

```cpp
#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"
#include <iostream>

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Square." << std::endl;
    }
};

#endif // SQUARE_H
```

### Rectangle.h:

Rectangle (Rectangle.h): This is a concrete class derived from the Shape abstract base class. It implements the draw() method in a way that is unique to the Rectangle class.


```cpp
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <iostream>

class Rectangle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Rectangle." << std::endl;
    }
};

#endif // RECTANGLE_H
```

### ShapeFactory.h:

ShapeFactory (ShapeFactory.h): This is the Factory class. It has a method getShape(), which returns an object of type Shape. The type of object it creates depends on the input string. If the input is "CIRCLE", it creates an object of type Circle; if the input is "SQUARE", it creates an object of type Square; if the input is "RECTANGLE", it creates an object of type Rectangle. If the input doesn't match any of these, it returns nullptr.

```cpp
#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include <string>

class ShapeFactory {
public:
    Shape* getShape(const std::string& shapeType) {
        if (shapeType == "CIRCLE") {
            return new Circle();
        } else if (shapeType == "SQUARE") {
            return new Square();
        } else if (shapeType == "RECTANGLE") {
            return new Rectangle();
        }
        return nullptr;
    }
};

#endif // SHAPEFACTORY_H
```

### main.cpp:

main function (main.cpp): This is where the Factory pattern is demonstrated. An object of ShapeFactory is created, and then different types of Shape objects are created using the getShape() method of the ShapeFactory. The draw() method of each Shape object is then called. The use of std::unique_ptr is to ensure that the dynamically allocated memory (from the new keyword in the getShape() method) is automatically deallocated when the pointer goes out of scope, to prevent memory leaks.

```cpp
#include "ShapeFactory.h"
#include <memory>

int main() {
    ShapeFactory factory;

    std::unique_ptr<Shape> shape1(factory.getShape("CIRCLE"));
    if (shape1) shape1->draw();

    std::unique_ptr<Shape> shape2(factory.getShape("SQUARE"));
    if (shape2) shape2->draw();

    std::unique_ptr<Shape> shape3(factory.getShape("RECTANGLE"));
    if (shape3) shape3->draw();

    return 0;
}
```

In this example, **ShapeFactory** is a factory class that creates objects of different types. The **getShape()** method of the **ShapeFactory** class creates and returns shape objects based on the input it receives.

In **main.cpp**, the factory creates a **Circle**, **Square**, and **Rectangle** object. The **draw()** method is then called on each object, demonstrating polymorphism. The **std::unique_ptr** is used to handle the memory and automatically delete the objects when they are no longer needed.

Note: It is advisable to handle exceptions for invalid shape types in a production-level code, which is not included in this example for simplicity.

In summary, the Shape class provides a common interface for all derived shapes. The derived classes (Circle, Square, Rectangle) provide specific implementations for this interface. The ShapeFactory class is used to create objects of these types, abstracting away the details of object creation from the client code. The client code (in the main function) works with the abstract Shape interface, and is not concerned with the specific types of shapes that are being created and manipulated.


























