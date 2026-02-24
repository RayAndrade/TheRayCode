[home](./page01.md)

[back](./page05.md)

**Circle.h**

```
Circle
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
class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}

    void draw() const override {
        // Draw the circle
    }

    void accept(ShapeVisitor& visitor) override {
        visitor.visitCircle(*this);
    }

    double getRadius() const { return radius; }
```

```
private:
    double radius;
```



[page 7](./page07.md)
