[home](./page01.md)

[back](./page08.md)

**Triangle.h**

```
Triangle
```

```
#include "Shape.h"
#include "ShapeVisitor.h"

class Triangle : public Shape {  };
```


```
public:
    Triangle(double base, double height) : base(base), height(height) {}
```

```
void draw() const override {
    // Draw the triangle
}

void accept(ShapeVisitor& visitor) override {
    visitor.visitTriangle(*this);
}

double getBase() const { return base; }
double getHeight() const { return height; }
```

```
private:
    double base, height;
```


[page 10](./page10.md)
