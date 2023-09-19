[home](./page01.md)

[back](./page02.md)

**Shape.h**

```
Shape
```

```
class ShapeVisitor;  // Forward declaration
```

```
class Shape {  };
```

```
public:
    virtual ~Shape() = default;
```

```
    virtual void draw() const = 0; 
    virtual void accept(ShapeVisitor& visitor) = 0;  // accept a visitor
```




[page 4](./page04.md)
