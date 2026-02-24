[home](./page01.md)

[back](./page03.md)

**ShapeVisitor.h**

The ShapeVisitor class is our abstract visitor. All specific visitors will implement this interface.

```
ShapeVisitor
```

```
class Circle;
class Square;
class Triangle;

class ShapeVisitor {  };
```

```
public:
    virtual ~ShapeVisitor() = default;

    virtual void visitCircle(Circle& circle) = 0;
    virtual void visitSquare(Square& square) = 0;
    virtual void visitTriangle(Triangle& triangle) = 0;
```


[page 5](./page05.md)
