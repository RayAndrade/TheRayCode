[home](./page01.md)

[back](./page07.md)

**Triangle.h**

```
#include "Shape.h"
#include "ShapeVisitor.h"

class Square {  };
```

```
 : public Shape
```

```
#include "Shape.h"
#include "ShapeVisitor.h"

class Triangle {  };
```

```
 : public Shape
```

```
public:
    Triangle(double base, double height) : base(base), height(height) {}
```

```
void draw() const override {
    // Draw the square
}
```

```
void accept(ShapeVisitor& visitor) override {
   visitor.visitTriangle(*this);
}
```

```
double getBase() const { return base; }
double getHeight() const { return height; }
```

```
private:
    double base, height;
```

[page 9](./page09.md)
