# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**C++ Factory Design Pattern**

|**Pattern**|   |   |   |   |
|---|---|---|---|---|
| **Factory** | [**C++**](../../../CPP/Creational/Builder/README.md) | [**C#**](../../../Csharp/Creational/Builder/README.md) | [Java](../../../Java/Creational/Builder/README.md) | [PHP](../../../PHP/Creational/Builder/README.md) |

[Show](./script/page01.md)

Craete a class/interface named **Shape**.
This is an abstract base class that declares the draw() method as a pure virtual function. All derived classes (like Circle, Square, Rectangle) are expected to implement this method. The Shape class serves as a general template for all shapes.

```
class Shape { 
public:
    virtual void draw() = 0; // Pure virtual function makes this an abstract base class
    virtual ~Shape() {}
};
```
**Circle** (Circle.h): This is a concrete class that is derived from the Shape abstract base class. It provides a specific implementation of the draw() method, which is unique to the Circle class

```
#include "Shape.h"
#include <iostream>

class Circle : public Shape { 
public:
    void draw() override {
        std::cout << "Drawing Circle." << std::endl;
    }
};
```

**Square** (Square.h): This is another concrete class that is derived from the Shape abstract base class. It provides a unique implementation of the draw() method, specific to the Square class.

```
#include "Shape.h"
#include <iostream>

class Square : public Shape { 
public:
    void draw() override {
        std::cout << "Drawing Square." << std::endl;
    }
};
```
**Rectangle** (Rectangle.h): This is a concrete class derived from the Shape abstract base class. It implements the draw() method in a way that is unique to the Rectangle class.

```
#include "Shape.h"
#include <iostream>

class Rectangle:public Shape {  
public:
    void draw() override {
        std::cout << "Drawing Rectangle." << std::endl;
    }
};
```
**ShapeFactory** (ShapeFactory.h): This is the Factory class. It has a method getShape(), which returns an object of type Shape. The type of object it creates depends on the input string. If the input is "CIRCLE", it creates an object of type Circle; if the input is "SQUARE", it creates an object of type Square; if the input is "RECTANGLE", it creates an object of type Rectangle. If the input doesn't match any of these, it returns nullptr.

```
#include <string>
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"

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
```
**main** function (main.cpp): This is where the Factory pattern is demonstrated. An object of ShapeFactory is created, and then different types of Shape objects are created using the getShape() method of the ShapeFactory. The draw() method of each Shape object is then called. The use of std::unique_ptr is to ensure that the dynamically allocated memory (from the new keyword in the getShape() method) is automatically 

```
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

When you compile and run you should get

```
Drawing Circle.
Drawing Square.
Drawing Rectangle.
```

[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
