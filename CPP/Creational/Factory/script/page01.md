[home](./page01.md)


```
Shape
```
Craete a class/interface named **Shape**

This is an abstract base class that declares the draw() method as a pure virtual function. All derived classes (like Circle, Square, Rectangle) are expected to implement this method. The Shape class serves as a general template for all shapes.

```
class Shape {  };
```

Require the following methods
```
public:
    virtual void draw() = 0; // Pure virtual function makes this an abstract base class
    virtual ~Shape() {}
```

[page 02](./page02.md)




