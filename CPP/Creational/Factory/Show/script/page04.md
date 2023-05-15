[home](./page01.md)

[back](./page03.md)


```
Rectangle
```

Rectangle (Rectangle.h): This is a concrete class derived from the Shape abstract base class. It implements the draw() method in a way that is unique to the Rectangle class.

I am going to need **iostream**

```
#include "Shape.h"
#include <iostream>
```

```
class Rectangle {   };
```

```
: public Shape
```

```
public:
    void draw() override {
        std::cout << "Drawing Rectangle." << std::endl;
    }
```


[to slide 5](./page05.md)


