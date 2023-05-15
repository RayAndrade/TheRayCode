[home](./page01.md)

[back](./page04.md)

```
ShapeFactory
```

ShapeFactory (ShapeFactory.h): This is the Factory class. It has a method getShape(), which returns an object of type Shape. The type of object it creates depends on the input string. If the input is "CIRCLE", it creates an object of type Circle; if the input is "SQUARE", it creates an object of type Square; if the input is "RECTANGLE", it creates an object of type Rectangle. If the input doesn't match any of these, it returns nullptr.


```
#include "Circle.h"
#include "Square.h"
#include "Rectangle.h"
#include <string>
```


```
class ShapeFactory {  };
```


```
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
```

[page6](./page06.md)
