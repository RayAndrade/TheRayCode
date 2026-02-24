[home](./page01.md)

[back](./page06.md)

**Square.h**

```
Square
```

```
#include "Shape.h"
#include "ShapeVisitor.h"

class Circle {  };
```

```
 : public Shape
```

```
public:
    Circle(double radius) : radius(radius) {}
```

```
void draw() const override {
    // Draw the circle
}
```


```
void accept(ShapeVisitor& visitor) override {
    visitor.visitCircle(*this);
}
```


```
double getRadius() const { return radius; }
```


```
private:
    double radius;
```



[page 8](./page08.md)
