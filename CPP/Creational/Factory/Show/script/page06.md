[home](./page01.md)

[back](./page05.md)

```
#include "ShapeFactory.h"
#include <memory>
```

main function (main.cpp): This is where the Factory pattern is demonstrated. An object of ShapeFactory is created, and then different types of Shape objects are created using the getShape() method of the ShapeFactory. The draw() method of each Shape object is then called. The use of std::unique_ptr is to ensure that the dynamically allocated memory (from the new keyword in the getShape() method) is automatically deallocated when the pointer goes out of scope, to prevent memory leaks.

```
 ShapeFactory factory;

std::unique_ptr<Shape> shape1(factory.getShape("CIRCLE"));
if (shape1) shape1->draw();

std::unique_ptr<Shape> shape2(factory.getShape("SQUARE"));
if (shape2) shape2->draw();

std::unique_ptr<Shape> shape3(factory.getShape("RECTANGLE"));
if (shape3) shape3->draw();
```

[page7](./page07.md)

