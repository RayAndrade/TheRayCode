[home](./page01.md)

[back](./page01.md)

```
Circle
```

Circle (Circle.h): This is a concrete class that is derived from the Shape abstract base class. It provides a specific implementation of the draw() method, which is unique to the Circle class

```
Circle {  };
```

```
#include "Shape.h"
#include <iostream>
```

```
: public Shape
```

```
public:
    void draw() override {
        std::cout << "Drawing Circle." << std::endl;
    }
```

[to slide 3](./page03.md)
